`include "defines.vh"

module mem (
    input   wire[`WordBus]      alu_result_i,
    input   wire[1:0]           wb_sel_i,
    input   wire[15:0]          pc4_i,
    input   wire[`WordBus]      dm_data_i,

    output  wire[`WordBus]      reg_wdata_o
);

assign  reg_wdata_o = (wb_sel_i == `WB_FROM_ALU) ? alu_result_i
                        : (wb_sel_i == `WB_FROM_PC) ? pc4_i
                        : (wb_sel_i == `WB_FROM_DM) ? dm_data_i
                        : `ZeroWord;

endmodule //mem