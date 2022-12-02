`include "defines.vh"

module ex_mem (
    input   wire                clk,
    input   wire                rst,
    input   wire                pause_i, 
    input   wire                inst_valid_i,
    input   wire                mem_wen_i,
    input   wire[`WordBus]      mem_wdata_i,
    input   wire                reg_wen_i,
    input   wire[`RegAddrBus]   reg_waddr_i,
    input   wire[`WordBus]      alu_result_i,
    input   wire[1:0]           wb_sel_i, 
    input   wire[15:0]          pc_i,
    input   wire[15:0]          pc4_i,

    output   reg                inst_valid_o,
    output   reg                mem_wen_o,
    output   reg[`WordBus]      mem_wdata_o,
    output   reg                reg_wen_o,
    output   reg[`RegAddrBus]   reg_waddr_o,
    output   reg[`WordBus]      alu_result_o,
    output   reg[1:0]           wb_sel_o,
    output   reg[15:0]          pc_o,
    output   reg[15:0]          pc4_o
    
);


always @(posedge clk or posedge rst) begin
    if(rst) begin
        inst_valid_o <= `False;
        mem_wen_o    <= `Disable;
        mem_wdata_o  <= `ZeroWord;
        reg_wen_o    <= `Disable;
        reg_waddr_o  <= `RegAddr0;
        alu_result_o <= `ZeroWord;
        wb_sel_o     <= `WB_FROM_NOP;
        pc_o         <= `ZERO_PC;
        pc4_o        <= `ZERO_PC;
    end else if(pause_i == `True) begin
        inst_valid_o <= `False;
        mem_wen_o    <= `Disable;
        mem_wdata_o  <= `ZeroWord;
        reg_wen_o    <= `Disable;
        reg_waddr_o  <= `RegAddr0;
        alu_result_o <= `ZeroWord;
        wb_sel_o     <= `WB_FROM_NOP;
        pc_o         <= `ZERO_PC;
        pc4_o        <= `ZERO_PC;
    end else begin
        inst_valid_o <= inst_valid_i;
        mem_wen_o    <= mem_wen_i;
        mem_wdata_o  <= mem_wdata_i;
        reg_wen_o    <= reg_wen_i;
        reg_waddr_o  <= reg_waddr_i;
        alu_result_o <= alu_result_i;
        wb_sel_o     <= wb_sel_i;
        pc_o         <= pc_i;
        pc4_o        <= pc4_i;
    end
end

endmodule //ex_mem