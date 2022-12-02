`include "defines.vh"

module regfile (
    input   wire                clk,
    input   wire                wen,
    input   wire[`RegAddrBus]   waddr,
    input   wire[`RegAddrBus]   raddr1,
    input   wire[`RegAddrBus]   raddr2,
    input   wire[`WordBus]      wdata,

    output  wire[`WordBus]      data1_o,    //读数据1
    output  wire[`WordBus]      data2_o     //读数据2
);

reg [`WordBus]  regs[0:31];


/* 
    读数据，
    读地址与写地址相同时，
    直接把写的数据给出
*/
assign  data1_o = (raddr1 == `RegAddr0) ? `ZeroWord 
                  : (raddr1 == waddr) ?  wdata
                  : regs[raddr1];
assign  data2_o = (raddr2 == `RegAddr0) ? `ZeroWord 
                  : (raddr2 == waddr) ?  wdata
                  : regs[raddr2];

//写数据
always @(posedge clk) begin
    if(wen) begin
        regs[waddr] <= wdata;
    end else begin
        regs[0] <= `ZeroWord; 
    end
end

endmodule //regfile