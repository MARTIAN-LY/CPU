`include "defines.vh"

module bubble (
    input   wire                rst,
    input   wire                ex_wen_i,
    input   wire[1:0]           ex_wb_sel_i,
    input   wire[`RegAddrBus]   ex_reg_waddr_i,
    input   wire                id_op1_sel_i,
    input   wire[`RegAddrBus]   id_raddr1_i,
    input   wire                id_op2_sel_i,
    input   wire[`RegAddrBus]   id_raddr2_i,

    output  reg                 pc_pause_o,
    output  reg                 ifid_pause_o,
    output  reg                 idex_pause_o,
    output  reg                 exmem_pause_o,
    output  reg                 memwb_pause_o
);


wire    lu_pause = (ex_wen_i == `Enable) && ( ex_wb_sel_i == `WB_FROM_DM ) 
                && ( ( id_op1_sel_i == `OP1_FROM_REG1 && id_raddr1_i == ex_reg_waddr_i)
                    || (id_op2_sel_i == `OP2_FROM_REG2 && id_raddr2_i == ex_reg_waddr_i) );

always @(*) begin
    if(rst) begin
        pc_pause_o    = `False; 
        ifid_pause_o  = `False;
        idex_pause_o  = `False;
        exmem_pause_o = `False;
        memwb_pause_o = `False;
    end else if(lu_pause) begin
        pc_pause_o    = `True; 
        ifid_pause_o  = `True;
        idex_pause_o  = `True;
        exmem_pause_o = `False;
        memwb_pause_o = `False;
    end else begin
        pc_pause_o    = `False; 
        ifid_pause_o  = `False;
        idex_pause_o  = `False;
        exmem_pause_o = `False;
        memwb_pause_o = `False;
    end
end

endmodule //bubble