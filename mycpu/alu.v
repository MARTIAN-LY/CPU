`include "defines.vh"

module alu (
    input   wire            rst,
    input   wire[`WordBus]  num1_i,
    input   wire[`WordBus]  num2_i,
    input   wire[1:0]       sel,    //运算大类
    input   wire[3:0]       op,     //具体运算

    output  reg[31:0]       result_o
);

reg[`WordBus]   result_arith;
reg[`WordBus]   result_shift;
reg[`WordBus]   result_logic;

// 两数相加
wire[`WordBus] num_add = num1_i + num2_i;
// 两数相减
wire[`WordBus] num_sub = num1_i + ( ~num2_i + 1 );

wire num1_eq_num2 = (num1_i == num2_i);

wire num1_lt_num2 = ( op == `ALU_SLT) ?
                            (  ( num1_i[31] && !num2_i[31])
                            || ( num1_i[31] &&  num2_i[31] && num_sub[31])
                            || (!num1_i[31] && !num2_i[31] && num_sub[31]) )
                            :  ( num1_i < num2_i );

//算数运算
always @(*) begin
    if(rst) begin
        result_arith = `ZeroWord;
    end else begin
        case (op)
            `ALU_ADD: begin
                result_arith = num_add;
            end
            `ALU_SUB: begin
                result_arith = num_sub;
            end
            `ALU_LUI: begin
                result_arith = num2_i;
            end
            `ALU_SLT,`ALU_SLTU: begin
                result_arith = num1_lt_num2;
            end
            default begin
                result_arith = `ZeroWord;
            end        
        endcase
    end
end

//移位运算
always @(*) begin
    if(rst) begin
        result_shift = `ZeroWord;
    end else begin
        case (op)
            `ALU_SLL: begin
                result_shift = num1_i << num2_i[4:0];
            end
            `ALU_SRL: begin
                result_shift = num1_i >> num2_i[4:0];
            end
            `ALU_SRA: begin
                result_shift = $signed( num1_i ) >>> num2_i[4:0];
            end
            default begin
                result_shift = `ZeroWord;
            end
        endcase
    end
end

//逻辑运算
always @(*) begin
    if(rst) begin
        result_logic = `ZeroWord;
    end else begin
        case (op)
            `ALU_AND: begin
                result_logic = num1_i & num2_i;
            end
            `ALU_OR: begin
                result_logic = num1_i | num2_i;
            end
            `ALU_XOR: begin
                result_logic = num1_i ^ num2_i;
            end
            default begin
                result_logic = `ZeroWord;
            end
        endcase
    end 
end

//根据运算大类进行结果输出
always @(*) begin
    case (sel)
        `ALU_SEL_ARITH: begin
            result_o = result_arith;
        end
        `ALU_SEL_LOGIC: begin
            result_o = result_logic;
        end
        `ALU_SEL_SHIFT: begin
            result_o = result_shift;
        end
        default begin
            result_o = `ZeroWord;
        end
    endcase
end

endmodule //alu