`include "defines.vh"
/* 
    生成立即数
 */
module imm_gen (
    input   wire            rst,
    input   wire[2:0]       sel_i,
    input   wire[31:7]      data_i,
    output  reg[`WordBus]   imm_o
);

always @(*) begin
    if(rst) begin
        imm_o = `ZeroWord;
    end else begin
        case (sel_i)
            // I 型，有符号
            `IMM_I: begin
                imm_o = { { 20{data_i[31]} }, data_i[31:20]};
            end
            // S 型
            `IMM_S: begin
                imm_o = { { 20{data_i[31]} } , data_i[31:25], data_i[11:7]};
            end
            // B 型
            `IMM_B: begin
                imm_o = { { 20{data_i[31]} } , data_i[7], data_i[30:25], data_i[11:8], 1'b0};
            end
            // U 型
            `IMM_U: begin
                imm_o = { data_i[31:12], 12'b0};
            end
            // J 型
            `IMM_J: begin
                imm_o = {  { 12{data_i[31]} }, data_i[19:12], data_i[20], data_i[30:21], 1'b0 };
            end
            default begin
                imm_o = `ZeroWord;
            end
        endcase
    end
end


endmodule //imm_gen