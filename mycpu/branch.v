`include "defines.vh"

module branch (
    input   wire            rst,
    input   wire[2:0]       sel_i,
    input   wire[`WordBus]  data1_i,
    input   wire[`WordBus]  data2_i,
    input   wire[15:0]      pc_i,
    input   wire[15:0]      imm_i,
    input   wire            is_jalr_i,
    
    output  wire[15:0]      br_addr_o,
    output  reg             pc_sel_o
);

// 跳转地址
assign br_addr_o = (is_jalr_i) ? (data1_i + imm_i) : pc_i + imm_i;

// 两数相减
wire[`WordBus] data_sub = data1_i + ( ~data2_i + 1 );

wire data1_eq_data2 = (data1_i == data2_i);

wire data1_lt_data2 = ( (sel_i == `BR_BLT) || (sel_i == `BR_BGE) ) ?
                            (  ( data1_i[31] && !data2_i[31])
                            || ( data1_i[31] &&  data2_i[31] && data_sub[31])
                            || (!data1_i[31] && !data2_i[31] && data_sub[31]) )
                            :  ( data1_i < data2_i );

always @(*) begin
    if(rst) begin
        pc_sel_o = 1'b0;
    end else begin
        case (sel_i)
            `BR_BEQ: begin
                pc_sel_o = data1_eq_data2;
            end
            `BR_BNE: begin
                pc_sel_o = ~data1_eq_data2;
            end          
            `BR_BLT,`BR_BLTU: begin
                pc_sel_o = data1_lt_data2;
            end     
            `BR_BGE,`BR_BGEU: begin
                pc_sel_o = ~data1_lt_data2;
            end
            `BR_J: begin
                pc_sel_o = 1'b1;
            end
            default begin
                pc_sel_o = 1'b0;
            end
        endcase
    end
end


endmodule //branch