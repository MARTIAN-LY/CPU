`include "defines.vh"

module ex (      
    input  wire                 rst,
    input  wire                 inst_valid_i,
    input  wire[`WordBus]       op1_i,
    input  wire[`WordBus]       op2_i,
    input  wire[1:0]            alu_sel_i,
    input  wire[3:0]            alu_op_i,
    input  wire                 reg_wen_i,
    input  wire[`RegAddrBus]    reg_waddr_i,
    input  wire[1:0]            wb_sel_i,
    input  wire[`InstAddrBus]   pc_i,
    input  wire[`InstAddrBus]   pc4_i,
    input  wire                 mem_wen_i,
    input  wire[`WordBus]       mem_wdata_i, 

    output wire                 inst_valid_o,
    output wire                 mem_wen_o,
    output wire[`WordBus]       mem_wdata_o,
    output wire                 reg_wen_o,
    output wire[`RegAddrBus]    reg_waddr_o,
    output wire[`WordBus]       alu_result_o,
    output wire[1:0]            wb_sel_o,
    output wire[15:0]           pc_o,
    output wire[15:0]           pc4_o,

    output wire[`WordBus]       data_forward_o
);


assign inst_valid_o = inst_valid_i;
assign mem_wen_o = mem_wen_i;
assign mem_wdata_o = mem_wdata_i;
assign reg_wen_o = reg_wen_i;
assign reg_waddr_o = reg_waddr_i;
assign wb_sel_o = wb_sel_i;
assign pc_o  = pc_i;
assign pc4_o = pc4_i;

alu u_alu(
    .rst(rst),
    .num1_i(op1_i),
    .num2_i(op2_i),
    .sel(alu_sel_i),
    .op(alu_op_i),

    .result_o(alu_result_o)
);

assign data_forward_o = wb_sel_i == (`WB_FROM_PC) ? {16'b0,pc4_i} : alu_result_o;

endmodule //ex