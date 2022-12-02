`include "defines.vh"

module miniRV (

    input   wire                clk,
    input   wire                rst,
    // 从 im 读取的指令
    input   wire[`WordBus]      inst_i,
    // 从 dm 读取的数据
    input   wire[`WordBus]      mem_rdata_i,


    output  wire[`MemAddrBus]   inst_addr_o,
    output  wire[15:0]          mem_addr_o,
    output  wire                mem_wen_o,
    output  wire[`WordBus]      mem_wdata_o,

    output          debug_wb_have_inst,   // WB阶段是否有指令 (对单周期CPU，此flag恒为1)
    output [31:0]   debug_wb_pc,          // WB阶段的PC (若wb_have_inst=0，此项可为任意值)
    output          debug_wb_ena,         // WB阶段的寄存器写使能 (若wb_have_inst=0，此项可为任意值)
    output [4:0]    debug_wb_reg,         // WB阶段写入的寄存器号 (若wb_ena或wb_have_inst=0，此项可为任意值)
    output [31:0]   debug_wb_value        // WB阶段写入寄存器的值 (若wb_ena或wb_have_inst=0，此项可为任意值)
);


// pc
wire                pc_sel_i;
wire[15:0]          pc_br_addr_i;

wire[`InstAddrBus]  pc_pc_o;
wire[`InstAddrBus]  pc_pc4_o;

// 给 im 的地址
assign inst_addr_o = pc_pc_o[15:2];

//if_id
wire[15:0]          ifid_pc_o;
wire[15:0]          ifid_pc4_o;
wire[`WordBus]      ifid_inst_o;

//id_ex
wire                idex_inst_valid_i;
wire[`WordBus]      idex_op1_i;
wire[`WordBus]      idex_op2_i;
wire[1:0]           idex_alu_sel_i;
wire[3:0]           idex_alu_op_i;
wire                idex_reg_wen_i;
wire[`RegAddrBus]   idex_reg_waddr_i;
wire[1:0]           idex_wb_sel_i;
wire                idex_mem_wen_i;
wire[`WordBus]      idex_mem_wdata_i;

wire[`WordBus]      idex_op1_o;
wire[`WordBus]      idex_op2_o;
wire[1:0]           idex_alu_sel_o;
wire[3:0]           idex_alu_op_o;
wire                idex_reg_wen_o;
wire[`RegAddrBus]   idex_reg_waddr_o;
wire[1:0]           idex_wb_sel_o;
wire[`InstAddrBus]  idex_pc_o;
wire[`InstAddrBus]  idex_pc4_o;
wire                idex_mem_wen_o;
wire[`WordBus]      idex_mem_wdata_o;


wire[`WordBus]      ex_data_forward_o;

// ex_mem
wire                exmem_inst_valid_i;
wire                exmem_mem_wen_i;
wire[`WordBus]      exmem_mem_wdata_i;
wire                exmem_reg_wen_i;
wire[`RegAddrBus]   exmem_reg_waddr_i;
wire[`WordBus]      exmem_alu_result_i;
wire[1:0]           exmem_wb_sel_i;
wire[15:0]          exmem_pc4_i;

wire                exmem_inst_valid_o;
wire                exmem_reg_wen_o;
wire[`RegAddrBus]   exmem_reg_waddr_o;
wire[`WordBus]      exmem_alu_result_o;
wire[1:0]           exmem_wb_sel_o;
wire[15:0]          exmem_pc4_o;

wire[15:0]          exmem_pc_i;
wire[15:0]          exmem_pc_o;

// mem_wb
wire                memwb_reg_wen_i;
wire[`RegAddrBus]   memwb_reg_waddr_i;
wire[`WordBus]      memwb_reg_wdata_i;
wire[15:0]          trace_pc; 

// regfile
wire                regfile_wen_i;
wire[`WordBus]      regfile_wdata_i;
wire[`RegAddrBus]   regfile_waddr_i;
wire[`RegAddrBus]   regfile_raddr1_i;
wire[`RegAddrBus]   regfile_raddr2_i;

wire[`WordBus]      regfile_data1_o;
wire[`WordBus]      regfile_data2_o;

// alu
wire[`WordBus]      alu_num1_i;
wire[`WordBus]      alu_num2_i;
wire[1:0]           alu_sel_i;    //运算大类
wire[5:0]           alu_op_i;     //具体运算


// bubble
wire                bubble_id_op1_sel_i;
wire[`RegAddrBus]   bubble_id_raddr1_i;
wire                bubble_id_op2_sel_i;
wire[`RegAddrBus]   bubble_id_raddr2_i;

wire                bubble_pc_pause_o;
wire                bubble_ifid_pause_o;
wire                bubble_idex_pause_o;
wire                bubble_exmem_pause_o;
wire                bubble_memwb_pause_o;

pc u_pc(
    .clk(clk),
    .rst(rst),
    .pause_i(bubble_pc_pause_o),
    .sel_i(pc_sel_i),
    .br_addr_i(pc_br_addr_i),
    .pc4_o(pc_pc4_o),
    .pc_o(pc_pc_o)
);

if_id u_if_id(
    .clk(clk),
    .rst(rst),
    .pause_i(bubble_ifid_pause_o),
    .pc_i(pc_pc_o),
    .pc4_i(pc_pc4_o),
    .inst_i(inst_i),
    .flush_i(pc_sel_i),

    .pc_o(ifid_pc_o),
    .pc4_o(ifid_pc4_o),
    .inst_o(ifid_inst_o)
);

regfile u_regfile(
    .clk(clk),
    .wen(regfile_wen_i),
    .waddr(regfile_waddr_i),
    .raddr1(ifid_inst_o[19:15]),
    .raddr2(ifid_inst_o[24:20]),
    .wdata(regfile_wdata_i),
    .data1_o(regfile_data1_o),
    .data2_o(regfile_data2_o)
);

id u_id(
    .rst(rst),
    .inst_i(ifid_inst_o),
    .rdata1_i(regfile_data1_o),
    .rdata2_i(regfile_data2_o),
    .pc_i(ifid_pc_o),

    .pc_sel_o(pc_sel_i),
    .br_addr_o(pc_br_addr_i),
    .reg_wen_o(idex_reg_wen_i),
    .reg_waddr_o(idex_reg_waddr_i),
    .inst_valid_o(idex_inst_valid_i),
    .op1_o(idex_op1_i),
    .op2_o(idex_op2_i),
    .alu_sel_o(idex_alu_sel_i),
    .alu_op_o(idex_alu_op_i),
    .mem_wen_o(idex_mem_wen_i),
    .mem_wdata_o(idex_mem_wdata_i),
    .wb_sel_o(idex_wb_sel_i),

    //从 ex 阶段前递的数据
    .ex_wen_i(exmem_reg_wen_i),
    .ex_waddr_i(exmem_reg_waddr_i),
    .ex_wdata_i(ex_data_forward_o),
 
    //从 mem 阶段前递的数据
    .mem_wen_i(exmem_reg_wen_o),
    .mem_waddr_i(exmem_reg_waddr_o),
    .mem_wdata_i(memwb_reg_wdata_i),

    // 给 bubble
    .op1_sel_o(bubble_id_op1_sel_i),
    .raddr1_o(bubble_id_raddr1_i),
    .op2_sel_o(bubble_id_op2_sel_i),
    .raddr2_o(bubble_id_raddr2_i)
);

wire idex_inst_valid_o;

id_ex u_id_ex(
    .clk(clk),
    .rst(rst),
    .pause_i(bubble_idex_pause_o),

    .inst_valid_i(idex_inst_valid_i),
    .op1_i(idex_op1_i),
    .op2_i(idex_op2_i),
    .alu_sel_i(idex_alu_sel_i),
    .alu_op_i(idex_alu_op_i),
    .reg_wen_i(idex_reg_wen_i),
    .reg_waddr_i(idex_reg_waddr_i),
    .wb_sel_i(idex_wb_sel_i),
    .pc_i(ifid_pc_o),
    .pc4_i(ifid_pc4_o),
    .mem_wen_i(idex_mem_wen_i),
    .mem_wdata_i(idex_mem_wdata_i),

    .inst_valid_o(idex_inst_valid_o),
    .op1_o(idex_op1_o),
    .op2_o(idex_op2_o),
    .alu_sel_o(idex_alu_sel_o),
    .alu_op_o(idex_alu_op_o),
    .reg_wen_o(idex_reg_wen_o),
    .reg_waddr_o(idex_reg_waddr_o),
    .wb_sel_o(idex_wb_sel_o),
    .pc_o(idex_pc_o),
    .pc4_o(idex_pc4_o),
    .mem_wen_o(idex_mem_wen_o),
    .mem_wdata_o(idex_mem_wdata_o)
);

ex u_ex(
    .rst(rst),
    .inst_valid_i(idex_inst_valid_o),
    .op1_i(idex_op1_o),
    .op2_i(idex_op2_o),
    .alu_sel_i(idex_alu_sel_o),
    .alu_op_i(idex_alu_op_o),
    .reg_wen_i(idex_reg_wen_o),
    .reg_waddr_i(idex_reg_waddr_o),
    .wb_sel_i(idex_wb_sel_o),
    .pc_i(idex_pc_o),
    .pc4_i(idex_pc4_o),
    .mem_wen_i(idex_mem_wen_o),
    .mem_wdata_i(idex_mem_wdata_o),

    .inst_valid_o(exmem_inst_valid_i),
    .mem_wen_o(exmem_mem_wen_i),
    .mem_wdata_o(exmem_mem_wdata_i),
    .reg_wen_o(exmem_reg_wen_i),
    .reg_waddr_o(exmem_reg_waddr_i),
    .alu_result_o(exmem_alu_result_i),
    .wb_sel_o(exmem_wb_sel_i),
    .pc_o(exmem_pc_i),
    .pc4_o(exmem_pc4_i),

    .data_forward_o(ex_data_forward_o)
);


ex_mem u_ex_mem(
    .clk(clk),
    .rst(rst),
    .pause_i(bubble_exmem_pause_o),

    .inst_valid_i(exmem_inst_valid_i),
    .mem_wen_i(exmem_mem_wen_i),
    .mem_wdata_i(exmem_mem_wdata_i),
    .reg_wen_i(exmem_reg_wen_i),
    .reg_waddr_i(exmem_reg_waddr_i),
    .alu_result_i(exmem_alu_result_i),
    .wb_sel_i(exmem_wb_sel_i), 
    .pc4_i(exmem_pc4_i),

    .inst_valid_o(exmem_inst_valid_o),
    .mem_wen_o(mem_wen_o),
    .mem_wdata_o(mem_wdata_o),
    .reg_wen_o(exmem_reg_wen_o),
    .reg_waddr_o(exmem_reg_waddr_o),
    .alu_result_o(exmem_alu_result_o),
    .wb_sel_o(exmem_wb_sel_o), 
    .pc4_o(exmem_pc4_o),

    .pc_i(exmem_pc_i),
    .pc_o(exmem_pc_o)
);

mem u_mem(
    .alu_result_i(exmem_alu_result_o),
    .wb_sel_i(exmem_wb_sel_o),
    .pc4_i(exmem_pc4_o),
    .dm_data_i(mem_rdata_i),

    .reg_wdata_o(memwb_reg_wdata_i)
);


mem_wb u_mem_wb(
    .clk(clk),
    .rst(rst),
    .pause_i(bubble_memwb_pause_o),
    .inst_valid_i(exmem_inst_valid_o),
    .reg_wen_i(exmem_reg_wen_o),
    .reg_waddr_i(exmem_reg_waddr_o),
    .reg_wdata_i(memwb_reg_wdata_i),

    .inst_valid_o(debug_wb_have_inst),
    .reg_wen_o(regfile_wen_i),
    .reg_waddr_o(regfile_waddr_i),
    .reg_wdata_o(regfile_wdata_i),

    .pc_i(exmem_pc_o),
    .pc_o(trace_pc)
);

bubble u_bubble(
    .rst(rst),
    .ex_wen_i(idex_reg_wen_o),
    .ex_wb_sel_i(idex_wb_sel_o),
    .ex_reg_waddr_i(idex_reg_waddr_o),
    .id_op1_sel_i(bubble_id_op1_sel_i),
    .id_raddr1_i(bubble_id_raddr1_i),
    .id_op2_sel_i(bubble_id_op2_sel_i),
    .id_raddr2_i(bubble_id_raddr2_i),

    .pc_pause_o(bubble_pc_pause_o),
    .ifid_pause_o(bubble_ifid_pause_o),
    .idex_pause_o(bubble_idex_pause_o),
    .exmem_pause_o(bubble_exmem_pause_o),
    .memwb_pause_o(bubble_memwb_pause_o)
);

assign mem_addr_o = exmem_alu_result_o[15:0];

/* trace 测试 

    output        debug_wb_have_inst,   // WB阶段是否有指令 (对单周期CPU，此flag恒为1)
    output [31:0] debug_wb_pc,          // WB阶段的PC (若wb_have_inst=0，此项可为任意值)
    output        debug_wb_ena,         // WB阶段的寄存器写使能 (若wb_have_inst=0，此项可为任意值)
    output [4:0]  debug_wb_reg,         // WB阶段写入的寄存器号 (若wb_ena或wb_have_inst=0，此项可为任意值)
    output [31:0] debug_wb_value   
*/
assign debug_wb_pc        = {16'b0,trace_pc};
assign debug_wb_ena       = regfile_wen_i;
assign debug_wb_reg       = regfile_waddr_i;
assign debug_wb_value     = regfile_wdata_i;

endmodule //miniRV