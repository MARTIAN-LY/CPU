`include "defines.vh"

module id (
    input   wire                rst,
    input   wire[`WordBus]      inst_i,
    input   wire[`WordBus]      rdata1_i,
    input   wire[`WordBus]      rdata2_i,
    input   wire[15:0]          pc_i,

    output  wire                inst_valid_o,
    output  wire                pc_sel_o,
    output  wire[15:0]          br_addr_o,
    output  wire                reg_wen_o,
    output  wire[`RegAddrBus]   reg_waddr_o,
    output  wire[`WordBus]      op1_o,
    output  wire[`WordBus]      op2_o,
    output  wire[1:0]           alu_sel_o,
    output  wire[3:0]           alu_op_o,
    output  wire                mem_wen_o,
    output  wire[`WordBus]      mem_wdata_o,
    output  wire[1:0]           wb_sel_o,

    /* 
        解决 RR1 型数据冲突，
        该指令操作数来自上一条指令的运算结果
                                或 pc+4 
    */
    input   wire                ex_wen_i,
    input   wire[`RegAddrBus]   ex_waddr_i,
    input   wire[`WordBus]      ex_wdata_i,

    /* 
        解决 RR2 型数据冲突，
        该指令操作数来自上上条指令的运算结果
                                或 pc+4
                                或 dram
    */ 
    input   wire                mem_wen_i,
    input   wire[`RegAddrBus]   mem_waddr_i,
    input   wire[`WordBus]      mem_wdata_i,


    /* 
        给 bubble 模块的信号
    */
    output  wire                op1_sel_o,
    output  wire[`RegAddrBus]   raddr1_o,
    output  wire                op2_sel_o,
    output  wire[`RegAddrBus]   raddr2_o

);


//ctrl模块输出
wire[2:0]    ctrl_imm_sel_o;
wire         ctrl_op1_sel_o;
wire         ctrl_op2_sel_o;
wire[2:0]    ctrl_br_sel_o;

// imm_gen 输出
wire[`WordBus]  immgen_imm_o;

/* 判断前递 */
wire    reg1_ex_forward = (ex_wen_i == `Enable) && (ex_waddr_i == inst_i[19:15]);
wire    reg1_mem_forward = (mem_wen_i == `Enable) && (mem_waddr_i == inst_i[19:15]);

wire    reg2_ex_forward = (ex_wen_i == `Enable) && (ex_waddr_i == inst_i[24:20]);
wire    reg2_mem_forward = (mem_wen_i == `Enable) && (mem_waddr_i == inst_i[24:20]);

wire[`WordBus]    reg1_data = (inst_i[19:15] == `RegAddr0) ? `ZeroWord 
                                : (reg1_ex_forward == `True) ? ex_wdata_i
                                : (reg1_mem_forward == `True) ? mem_wdata_i
                                : rdata1_i ;
wire[`WordBus]    reg2_data = (inst_i[24:20] == `RegAddr0) ? `ZeroWord
                                : (reg2_ex_forward == `True) ? ex_wdata_i
                                : (reg2_mem_forward == `True) ? mem_wdata_i
                                : rdata2_i ;
/* 选择操作数  */
assign op1_o = (ctrl_op1_sel_o == `OP1_FROM_PC) ? {16'b0,pc_i} 
                : reg1_data;
assign op2_o = (ctrl_op2_sel_o == `OP2_FROM_IMM) ? immgen_imm_o 
                : reg2_data;

ctrl u_ctrl(
    .rst(rst),
    .opcode(inst_i[6:0]),
    .func3(inst_i[14:12]),
    .func7(inst_i[31:25]),
    
    .inst_valid(inst_valid_o),
    .imm_sel(ctrl_imm_sel_o),
    .reg_wen(reg_wen_o),
    .op1_sel(ctrl_op1_sel_o),
    .op2_sel(ctrl_op2_sel_o),
    .alu_sel(alu_sel_o),
    .alu_op(alu_op_o),
    .mem_wen(mem_wen_o),
    .wb_sel(wb_sel_o),
    .br_sel(ctrl_br_sel_o),
    .is_jalr_o(ctrl_is_jalr_o)
);

imm_gen u_imm_gen(
    .rst(rst),
    .sel_i(ctrl_imm_sel_o),
    .data_i(inst_i[31:7]),
    .imm_o(immgen_imm_o)
);

branch u_branch(
    .rst(rst),
    .sel_i(ctrl_br_sel_o),
    .data1_i(reg1_data),
    .data2_i(reg2_data),
    .pc_i(pc_i),
    .imm_i(immgen_imm_o[15:0]),
    .is_jalr_i(ctrl_is_jalr_o),
    .pc_sel_o(pc_sel_o),
    .br_addr_o(br_addr_o)
);

assign reg_waddr_o = inst_i[11:7];
assign mem_wdata_o = reg2_data;
 /* 
        给 bubble 模块的信号
*/
assign op1_sel_o = ctrl_op1_sel_o;
assign raddr1_o  = inst_i[19:15];
assign op2_sel_o = ctrl_op2_sel_o;
assign raddr2_o  = inst_i[24:20]; 

endmodule //id