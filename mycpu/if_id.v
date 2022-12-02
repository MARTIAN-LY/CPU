`include "defines.vh"

module if_id (
    input   wire                clk,
    input   wire                rst,
    input   wire                pause_i,
    input   wire[`InstAddrBus]  pc_i,
    input   wire[`InstAddrBus]  pc4_i,
    input   wire[`WordBus]      inst_i,
    input   wire                flush_i,

    output  reg[`InstAddrBus]   pc_o,
    output  reg[`InstAddrBus]   pc4_o,
    output  reg[`WordBus]       inst_o
);

always @(posedge clk or posedge rst) begin
    if(rst) begin
        pc_o   <= 16'b0;
        pc4_o  <= 16'b0;
        inst_o <= 32'b0;
    end else if(flush_i) begin
        pc_o   <= 16'b0;
        pc4_o  <= 16'b0;
        inst_o <= 32'b0;
    end else if(pause_i == `True) begin
        pc_o   <= pc_o;
        pc4_o  <= pc4_o;
        inst_o <= inst_o;
    end else begin
        pc_o   <= pc_i;
        pc4_o  <= pc4_i;
        inst_o <= inst_i;
    end
        
end

endmodule //if_id