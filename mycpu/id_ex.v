`include "defines.vh"

module id_ex (

    input   wire                clk,
    input   wire                rst,
    input   wire                pause_i,
    input   wire                inst_valid_i,
    input   wire[`WordBus]      op1_i,
    input   wire[`WordBus]      op2_i,
    input   wire[1:0]           alu_sel_i,
    input   wire[3:0]           alu_op_i,
    input   wire                reg_wen_i,
    input   wire[`RegAddrBus]   reg_waddr_i,
    input   wire[1:0]           wb_sel_i,
    input   wire[`InstAddrBus]  pc_i,
    input   wire[`InstAddrBus]  pc4_i,
    input   wire                mem_wen_i,
    input   wire[`WordBus]      mem_wdata_i,

    output  reg                 inst_valid_o,
    output  reg[`WordBus]       op1_o,
    output  reg[`WordBus]       op2_o,
    output  reg[1:0]            alu_sel_o,
    output  reg[3:0]            alu_op_o,
    output  reg                 reg_wen_o,
    output  reg[`RegAddrBus]    reg_waddr_o,
    output  reg[1:0]            wb_sel_o,
    output  reg[`InstAddrBus]   pc_o,
    output  reg[`InstAddrBus]   pc4_o,
    output  reg                 mem_wen_o,
    output  reg[`WordBus]       mem_wdata_o
);

always @(posedge clk or posedge rst) begin
    if(rst) begin
        inst_valid_o <= `False;
        op1_o        <= `ZeroWord;
        op2_o        <= `ZeroWord;
        alu_sel_o    <= `ALU_SEL_NOP;
        alu_op_o     <= `ALU_NOP;
        reg_wen_o    <= `Disable;
        reg_waddr_o  <= `RegAddr0;
        wb_sel_o     <= `WB_FROM_NOP;
        pc_o         <= `ZERO_PC;
        pc4_o        <= `ZERO_PC;
        mem_wen_o    <= `Disable;
        mem_wdata_o  <= `Disable;
    end else if(pause_i == `True) begin
        inst_valid_o <= `False;
        op1_o        <= `ZeroWord;
        op2_o        <= `ZeroWord;
        alu_sel_o    <= `ALU_SEL_NOP;
        alu_op_o     <= `ALU_NOP;
        reg_wen_o    <= `Disable;
        reg_waddr_o  <= `RegAddr0;
        wb_sel_o     <= `WB_FROM_NOP;
        pc_o         <= `ZERO_PC;
        pc4_o        <= `ZERO_PC;
        mem_wen_o    <= `Disable;
        mem_wdata_o  <= `Disable;
    end else begin
        inst_valid_o <= inst_valid_i;
        op1_o        <= op1_i;
        op2_o        <= op2_i;
        alu_sel_o    <= alu_sel_i;
        alu_op_o     <= alu_op_i;
        reg_wen_o    <= reg_wen_i;
        reg_waddr_o  <= reg_waddr_i;
        wb_sel_o     <= wb_sel_i;
        pc_o         <= pc_i;
        pc4_o        <= pc4_i;
        mem_wen_o    <= mem_wen_i;
        mem_wdata_o  <= mem_wdata_i;
    end
end

endmodule //id_ex