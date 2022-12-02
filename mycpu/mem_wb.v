`include "defines.vh"

module mem_wb (
    input   wire                clk,
    input   wire                rst,
    input   wire                pause_i, 
    input   wire                inst_valid_i,
    input   wire                reg_wen_i,
    input   wire[`RegAddrBus]   reg_waddr_i,
    input   wire[`WordBus]      reg_wdata_i,
    input   wire[15:0]          pc_i,

    output  reg                 inst_valid_o,
    output  reg                 reg_wen_o,
    output  reg[`RegAddrBus]    reg_waddr_o,
    output  reg[`WordBus]       reg_wdata_o,
    output  reg[15:0]           pc_o

);

always @(posedge clk or posedge rst) begin
    if(rst) begin
        inst_valid_o <= `False;
        reg_wen_o    <= `Disable;
        reg_waddr_o  <= `RegAddr0;
        reg_wdata_o  <= `ZeroWord;
        pc_o         <= `ZERO_PC;
    end else if(pause_i == `True) begin
        inst_valid_o <= `False;
        reg_wen_o    <= `Disable;
        reg_waddr_o  <= `RegAddr0;
        reg_wdata_o  <= `ZeroWord;
        pc_o         <= `ZERO_PC;
    end else begin
        inst_valid_o <= inst_valid_i;
        reg_wen_o    <= reg_wen_i;
        reg_waddr_o  <= reg_waddr_i;
        reg_wdata_o  <= reg_wdata_i;
        pc_o         <= pc_i;
    end
end

endmodule //mem_wb