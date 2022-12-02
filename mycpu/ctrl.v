`include "defines.vh"

module ctrl (
    input   wire        rst,
    input   wire[6:0]   opcode,
    input   wire[2:0]   func3,
    input   wire[6:0]   func7,

    output  reg         inst_valid,
    output  reg[2:0]    imm_sel,
    output  reg         reg_wen,
    output  reg         op1_sel,
    output  reg         op2_sel,
    output  reg[1:0]    alu_sel,
    output  reg[3:0]    alu_op,
    output  reg         mem_wen,
    output  reg[1:0]    wb_sel,
    output  reg[2:0]    br_sel,
    output  wire        is_jalr_o
);

/* 还得专门给 jalr 加一条线  */
assign is_jalr_o = (opcode == `OPCODE_I3) && (func3 == `FUNC3_JALR);

always @(*) begin
    if(rst) begin
        inst_valid = `False;
        imm_sel    = `IMM_NOP;
        reg_wen    = `Disable;
        op1_sel    = `OP1_FROM_PC;
        op2_sel    = `OP2_FROM_IMM;
        alu_sel    = `ALU_SEL_NOP;
        alu_op     = `ALU_NOP;
        mem_wen    = `Disable;
        wb_sel     = `WB_FROM_NOP;
        br_sel     = `BR_NOP;
    end
    else begin
        case (opcode)
            `OPCODE_R: begin
                case (func7[5]) 
                    1'b0: begin
                        case (func3)
                            `FUNC3_ADD: begin        
                                inst_valid = `True;             
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_ARITH;
                                alu_op     = `ALU_ADD;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            `FUNC3_SLT: begin      
                                inst_valid = `True;                 
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_ARITH;
                                alu_op     = `ALU_SLT;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            `FUNC3_SLTU: begin     
                                inst_valid = `True;                   
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_ARITH;
                                alu_op     = `ALU_SLTU;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            `FUNC3_AND: begin     
                                inst_valid = `True;                  
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_LOGIC;
                                alu_op     = `ALU_AND;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            `FUNC3_OR: begin    
                                inst_valid = `True;               
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_LOGIC;
                                alu_op     = `ALU_OR;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            `FUNC3_XOR: begin     
                                inst_valid = `True;                 
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_LOGIC;
                                alu_op     = `ALU_XOR;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            `FUNC3_SLL: begin   
                                inst_valid = `True;                    
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_SHIFT;
                                alu_op     = `ALU_SLL;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            `FUNC3_SRL: begin    
                                inst_valid = `True;                    
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_SHIFT;
                                alu_op     = `ALU_SRL;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            default begin
                                inst_valid = `False;
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Disable;
                                op1_sel    = `OP1_FROM_PC;
                                op2_sel    = `OP2_FROM_IMM;
                                alu_sel    = `ALU_SEL_NOP;
                                alu_op     = `ALU_NOP;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_NOP;
                                br_sel     = `BR_NOP;
                            end
                        endcase
                    end
                    1'b1: begin
                        case (func3)
                            `FUNC3_SUB: begin   
                                inst_valid = `True;                    
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_ARITH;
                                alu_op     = `ALU_SUB;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            `FUNC3_SRA: begin
                                inst_valid = `True;
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Enable;
                                op1_sel    = `OP1_FROM_REG1;
                                op2_sel    = `OP2_FROM_REG2;
                                alu_sel    = `ALU_SEL_SHIFT;
                                alu_op     = `ALU_SRA;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_ALU;
                                br_sel     = `BR_NOP;
                            end
                            default begin
                                inst_valid = `False;
                                imm_sel    = `IMM_NOP;
                                reg_wen    = `Disable;
                                op1_sel    = `OP1_FROM_PC;
                                op2_sel    = `OP2_FROM_IMM;
                                alu_sel    = `ALU_SEL_NOP;
                                alu_op     = `ALU_NOP;
                                mem_wen    = `Disable;
                                wb_sel     = `WB_FROM_NOP;
                                br_sel     = `BR_NOP;
                            end
                        endcase
                    end
                    default begin
                        inst_valid = `False;
                        imm_sel    = `IMM_NOP;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_NOP;
                        alu_op     = `ALU_NOP;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_NOP;
                    end
                endcase
            end

            `OPCODE_I1: begin
                case (func3)
                    // arithmatic
                    `FUNC3_ADDI: begin       
                        inst_valid = `True;                 
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_ALU;
                        br_sel     = `BR_NOP;
                    end
                    `FUNC3_SLTI: begin       
                        inst_valid = `True;                
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_SLT;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_ALU;
                        br_sel     = `BR_NOP;
                    end
                    `FUNC3_SLTIU: begin      
                        inst_valid = `True;                  
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_SLTU;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_ALU;
                        br_sel     = `BR_NOP;
                    end
                    //logic
                    `FUNC3_ANDI: begin     
                        inst_valid = `True;                  
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_LOGIC;
                        alu_op     = `ALU_AND;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_ALU;
                        br_sel     = `BR_NOP;
                    end
                    `FUNC3_ORI: begin        
                        inst_valid = `True;                
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_LOGIC;
                        alu_op     = `ALU_OR;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_ALU;
                        br_sel     = `BR_NOP;
                    end 
                    `FUNC3_XORI: begin     
                        inst_valid = `True;                  
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_LOGIC;
                        alu_op     = `ALU_XOR;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_ALU;
                        br_sel     = `BR_NOP;
                    end
                    // shift
                    `FUNC3_SLLI: begin     
                        inst_valid = `True;                  
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_SHIFT;
                        alu_op     = `ALU_SLL;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_ALU;
                        br_sel     = `BR_NOP;
                    end
                    `FUNC3_SRI: begin   
                        inst_valid = `True;                    
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_SHIFT;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_ALU;
                        br_sel     = `BR_NOP;
                        if(func7[5]) begin
                            alu_op = `ALU_SRA;
                        end else begin
                            alu_op = `ALU_SRL;
                        end
                    end
                    default begin
                        inst_valid = `False;
                        imm_sel    = `IMM_NOP;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_NOP;
                        alu_op     = `ALU_NOP;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_NOP;
                    end
                endcase
            end

            `OPCODE_I2: begin
                case (func3)
                    // `FUNC3_LB: begin
                    //     
                    //     imm_sel    = `IMM_I;
                    //     reg_wen    = `Enable;
                    //     op1_sel    = `OP1_FROM_REG1;
                    //     op2_sel    = `OP2_FROM_IMM;
                    //     alu_sel    = `ALU_SEL_ARITH;
                    //     alu_op     = `ALU_ADD;
                    //     mem_wen    = `Disable;
                    //     wb_sel     = `WB_FROM_DM;
                    //     br_sel     = `BR_NOP;
                    // end
                    // `FUNC3_LBU: begin
                    //     
                    //     imm_sel    = `IMM_I;
                    //     reg_wen    = `Enable;
                    //     op1_sel    = `OP1_FROM_REG1;
                    //     op2_sel    = `OP2_FROM_IMM;
                    //     alu_sel    = `ALU_SEL_ARITH;
                    //     alu_op     = `ALU_ADD;
                    //     mem_wen    = `Disable;
                    //     wb_sel     = `WB_FROM_DM;
                    //     br_sel     = `BR_NOP;
                    // end
                    // `FUNC3_LH: begin
                    //     
                    //     imm_sel    = `IMM_I;
                    //     reg_wen    = `Enable;
                    //     op1_sel    = `OP1_FROM_REG1;
                    //     op2_sel    = `OP2_FROM_IMM;
                    //     alu_sel    = `ALU_SEL_ARITH;
                    //     alu_op     = `ALU_ADD;
                    //     mem_wen    = `Disable;
                    //     wb_sel     = `WB_FROM_DM;
                    //     br_sel     = `BR_NOP;
                    // end
                    // `FUNC3_LHU: begin
                    //     
                    //     imm_sel    = `IMM_I;
                    //     reg_wen    = `Enable;
                    //     op1_sel    = `OP1_FROM_REG1;
                    //     op2_sel    = `OP2_FROM_IMM;
                    //     alu_sel    = `ALU_SEL_ARITH;
                    //     alu_op     = `ALU_ADD;
                    //     mem_wen    = `Disable;
                    //     wb_sel     = `WB_FROM_DM;
                    //     br_sel     = `BR_NOP;
                    // end
                    `FUNC3_LW: begin
                        inst_valid = `True;
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_DM;
                        br_sel     = `BR_NOP;
                    end
                    default begin
                        inst_valid = `False;
                        imm_sel    = `IMM_NOP;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_NOP;
                        alu_op     = `ALU_NOP;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_NOP;
                    end
                endcase
            end

            `OPCODE_I3: begin
                if(func3 == `FUNC3_JALR) begin
                        inst_valid = `True;                       
                        imm_sel    = `IMM_I;
                        reg_wen    = `Enable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_NOP;
                        alu_op     = `ALU_NOP;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_PC;
                        br_sel     = `BR_J;
                end else begin     
                    inst_valid = `False;
                    imm_sel    = `IMM_NOP;
                    reg_wen    = `Disable;
                    op1_sel    = `OP1_FROM_PC;
                    op2_sel    = `OP2_FROM_IMM;
                    alu_sel    = `ALU_SEL_NOP;
                    alu_op     = `ALU_NOP;
                    mem_wen    = `Disable;
                    wb_sel     = `WB_FROM_NOP;
                    br_sel     = `BR_NOP;
                end
            end

            `OPCODE_S: begin
                case (func3)
                    // `FUNC3_SB: begin
                        
                    // end
                    // `FUNC3_SH: begin
                
                    // end
                    `FUNC3_SW: begin
                        inst_valid = `True;
                        imm_sel    = `IMM_S;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_REG1;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Enable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_NOP;
                    end
                    default begin     
                        inst_valid = `False;
                        imm_sel    = `IMM_NOP;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_NOP;
                        alu_op     = `ALU_NOP;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_NOP;
                    end
                endcase
            end

            `OPCODE_B: begin
                case (func3)
                    `FUNC3_BEQ: begin
                        inst_valid = `True;
                        imm_sel    = `IMM_B;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_BEQ;
                    end
                    `FUNC3_BNE: begin
                        inst_valid = `True;
                        imm_sel    = `IMM_B;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_BNE;
                    end
                    `FUNC3_BLT: begin
                        inst_valid = `True;
                        imm_sel    = `IMM_B;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_BLT;
                    end
                    `FUNC3_BLTU: begin
                        inst_valid = `True;
                        imm_sel    = `IMM_B;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_BLTU;
                    end
                    `FUNC3_BGE: begin
                        inst_valid = `True;
                        imm_sel    = `IMM_B;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_BGE;
                    end
                    `FUNC3_BGEU: begin 
                        inst_valid = `True;   
                        imm_sel    = `IMM_B;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_ARITH;
                        alu_op     = `ALU_ADD;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_BGEU;
                    end
                    default begin   
                        inst_valid = `False;
                        imm_sel    = `IMM_NOP;
                        reg_wen    = `Disable;
                        op1_sel    = `OP1_FROM_PC;
                        op2_sel    = `OP2_FROM_IMM;
                        alu_sel    = `ALU_SEL_NOP;
                        alu_op     = `ALU_NOP;
                        mem_wen    = `Disable;
                        wb_sel     = `WB_FROM_NOP;
                        br_sel     = `BR_NOP;
                    end
                endcase
            end

            // lui 
            `OPCODE_U1: begin
                inst_valid = `True;
                imm_sel    = `IMM_U;
                reg_wen    = `Enable;
                op1_sel    = `OP1_FROM_REG1;
                op2_sel    = `OP2_FROM_IMM;
                alu_sel    = `ALU_SEL_ARITH;
                alu_op     = `ALU_LUI;
                mem_wen    = `Disable;
                wb_sel     = `WB_FROM_ALU;
                br_sel     = `BR_NOP;
            end

            // auipc
            `OPCODE_U2: begin       
                inst_valid = `True;      
                imm_sel    = `IMM_U;
                reg_wen    = `Enable;
                op1_sel    = `OP1_FROM_PC;
                op2_sel    = `OP2_FROM_IMM;
                alu_sel    = `ALU_SEL_ARITH;
                alu_op     = `ALU_ADD;
                mem_wen    = `Disable;
                wb_sel     = `WB_FROM_ALU;
                br_sel     = `BR_NOP;
            end

            `OPCODE_J: begin
                inst_valid = `True;
                imm_sel    = `IMM_J;
                reg_wen    = `Enable;
                op1_sel    = `OP1_FROM_PC;
                op2_sel    = `OP2_FROM_IMM;
                alu_sel    = `ALU_SEL_ARITH;
                alu_op     = `ALU_ADD;
                mem_wen    = `Disable;
                wb_sel     = `WB_FROM_PC;
                br_sel     = `BR_J;
            end
            default begin
                inst_valid = `False;
                imm_sel    = `IMM_NOP;
                reg_wen    = `Disable;
                op1_sel    = `OP1_FROM_PC;
                op2_sel    = `OP2_FROM_IMM;
                alu_sel    = `ALU_SEL_NOP;
                alu_op     = `ALU_NOP;
                mem_wen    = `Disable;
                wb_sel     = `WB_FROM_NOP;
                br_sel     = `BR_NOP;
            end
        endcase
    end
end


endmodule //ctrl