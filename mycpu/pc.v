`include "defines.vh"

`define FROM_BR 1'b1


module pc (
    input   wire                clk,
    input   wire                rst,
    input   wire                pause_i,
    input   wire                sel_i,
    input   wire[`InstAddrBus]  br_addr_i,

    output  wire[`InstAddrBus]  pc4_o,
    output  reg[`InstAddrBus]   pc_o
);

assign pc4_o = pc_o + 4;

always @(posedge clk or posedge rst) begin
    if(rst) begin
        pc_o <= `ZERO_PC;
    end else if (pause_i == `True) begin
        pc_o <= pc_o;
    end else if (sel_i == `FROM_BR)begin
        pc_o <= br_addr_i;
    end else begin
        pc_o <= pc_o + 4;
    end
end

endmodule //pc