//常用宏定义
`define True        1'b1
`define False       1'b0
`define Enable      1'b1
`define Disable     1'b0
`define ZeroWord    32'h0000_0000
`define OneWord     32'h0000_0001
`define WordBus     31:0
`define ZERO_PC     16'h0000

//指令寻址空间 2^14 * 4 B = 2^16 KB 
`define InstAddrBus 15:0
`define MemAddrBus  13:0

//寄存器寻址空间
`define RegAddrBus  4:0    
`define RegAddr0    5'b00000

//ALU操作数选择
`define OP1_FROM_PC     1'b0
`define OP1_FROM_REG1   1'b1
`define OP2_FROM_REG2   1'b0
`define OP2_FROM_IMM    1'b1

//写回来源选择
`define WB_FROM_NOP     2'b00
`define WB_FROM_PC      2'b01
`define WB_FROM_ALU     2'b10
`define WB_FROM_DM      2'b11

//跳转指令类型
`define BR_NOP          3'b000
`define BR_BEQ          3'b001
`define BR_BNE          3'b010
`define BR_BLT          3'b011
`define BR_BLTU         3'b100
`define BR_BGE          3'b101
`define BR_BGEU         3'b110
`define BR_J            3'b111

 
// alu_op
`define ALU_NOP     4'b0000
`define ALU_ADD     4'b0001
`define ALU_SUB     4'b0010
`define ALU_LUI     4'b0011
`define ALU_AUIPC   4'b0100

`define ALU_SLL     4'b0101
`define ALU_SRL     4'b0110
`define ALU_SRA     4'b0111

`define ALU_AND     4'b1000
`define ALU_OR      4'b1001
`define ALU_XOR     4'b1010

`define ALU_SLT     4'b1011
`define ALU_SLTU    4'b1100 


// alu_sel
`define ALU_SEL_NOP     2'b00
`define ALU_SEL_ARITH   2'b01
`define ALU_SEL_SHIFT   2'b10
`define ALU_SEL_LOGIC   2'b11

// 立即数类型
`define IMM_NOP     3'b000
`define IMM_I       3'b001
`define IMM_S       3'b010
`define IMM_B       3'b011
`define IMM_U       3'b100
`define IMM_J       3'b101

// opcode
`define OPCODE_R    7'b0110011
`define OPCODE_I1   7'b0010011
`define OPCODE_I2   7'b0000011
`define OPCODE_I3   7'b1100111
`define OPCODE_S    7'b0100011
`define OPCODE_B    7'b1100011
`define OPCODE_U1   7'b0110111
`define OPCODE_U2   7'b0010111
`define OPCODE_J    7'b1101111


// func7
`define FUNC7_R1	7'b0000000
`define FUNC7_R2	7'b0100000

// func3
`define FUNC3_ADD   3'b000
`define FUNC3_SUB	3'b000
`define FUNC3_AND	3'b111
`define FUNC3_OR	3'b110
`define FUNC3_XOR	3'b100
`define FUNC3_SLL	3'b001
`define FUNC3_SRL	3'b101
`define FUNC3_SRA	3'b101
`define FUNC3_SLT	3'b010
`define FUNC3_SLTU  3'b011

`define FUNC3_ADDI	3'b000
`define FUNC3_ANDI	3'b111
`define FUNC3_ORI	3'b110
`define FUNC3_XORI	3'b100
`define FUNC3_SLLI	3'b001
`define FUNC3_SRI	3'b101
`define FUNC3_SLTI	3'b010
`define FUNC3_SLTIU	3'b011
`define FUNC3_LB	3'b000
`define FUNC3_LBU	3'b100
`define FUNC3_LH	3'b001
`define FUNC3_LHU	3'b101
`define FUNC3_LW	3'b010
`define FUNC3_JALR	3'b000

`define FUNC3_SB    3'b000
`define FUNC3_SH    3'b001
`define FUNC3_SW    3'b010

`define FUNC3_BEQ	3'b000
`define FUNC3_BNE	3'b001
`define FUNC3_BLT	3'b100
`define FUNC3_BLTU	3'b110
`define FUNC3_BGE	3'b101
`define FUNC3_BGEU	3'b111

