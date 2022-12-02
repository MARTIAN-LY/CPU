// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+138,"rst_n", false,-1);
    tracep->declBus(c+139,"led_en_o", false,-1, 7,0);
    tracep->declBit(c+140,"led_ca_o", false,-1);
    tracep->declBit(c+141,"led_cb_o", false,-1);
    tracep->declBit(c+142,"led_cc_o", false,-1);
    tracep->declBit(c+143,"led_cd_o", false,-1);
    tracep->declBit(c+144,"led_ce_o", false,-1);
    tracep->declBit(c+145,"led_cf_o", false,-1);
    tracep->declBit(c+146,"led_cg_o", false,-1);
    tracep->declBit(c+147,"led_dp_o", false,-1);
    tracep->declBus(c+148,"light_o", false,-1, 23,0);
    tracep->declBus(c+149,"switch_i", false,-1, 23,0);
    tracep->declBit(c+150,"debug_wb_have_inst", false,-1);
    tracep->declBus(c+151,"debug_wb_pc", false,-1, 31,0);
    tracep->declBit(c+152,"debug_wb_ena", false,-1);
    tracep->declBus(c+153,"debug_wb_reg", false,-1, 4,0);
    tracep->declBus(c+154,"debug_wb_value", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+138,"rst_n", false,-1);
    tracep->declBus(c+139,"led_en_o", false,-1, 7,0);
    tracep->declBit(c+140,"led_ca_o", false,-1);
    tracep->declBit(c+141,"led_cb_o", false,-1);
    tracep->declBit(c+142,"led_cc_o", false,-1);
    tracep->declBit(c+143,"led_cd_o", false,-1);
    tracep->declBit(c+144,"led_ce_o", false,-1);
    tracep->declBit(c+145,"led_cf_o", false,-1);
    tracep->declBit(c+146,"led_cg_o", false,-1);
    tracep->declBit(c+147,"led_dp_o", false,-1);
    tracep->declBus(c+148,"light_o", false,-1, 23,0);
    tracep->declBus(c+149,"switch_i", false,-1, 23,0);
    tracep->declBit(c+150,"debug_wb_have_inst", false,-1);
    tracep->declBus(c+151,"debug_wb_pc", false,-1, 31,0);
    tracep->declBit(c+152,"debug_wb_ena", false,-1);
    tracep->declBus(c+153,"debug_wb_reg", false,-1, 4,0);
    tracep->declBus(c+154,"debug_wb_value", false,-1, 31,0);
    tracep->declBus(c+25,"cpu_inst_i", false,-1, 31,0);
    tracep->declBus(c+155,"cpu_rdata_i", false,-1, 31,0);
    tracep->declBus(c+26,"im_addr_i", false,-1, 13,0);
    tracep->declBus(c+83,"bridge_addr_i", false,-1, 15,0);
    tracep->declBit(c+84,"bridge_wen_i", false,-1);
    tracep->declBus(c+85,"bridge_wdata_i", false,-1, 31,0);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->pushNamePrefix("u_bridge ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+84,"wen_i", false,-1);
    tracep->declBus(c+83,"addr_i", false,-1, 15,0);
    tracep->declBus(c+85,"wdata_i", false,-1, 31,0);
    tracep->declBus(c+155,"data_o", false,-1, 31,0);
    tracep->declBus(c+139,"led_en_o", false,-1, 7,0);
    tracep->declBit(c+140,"led_ca_o", false,-1);
    tracep->declBit(c+141,"led_cb_o", false,-1);
    tracep->declBit(c+142,"led_cc_o", false,-1);
    tracep->declBit(c+143,"led_cd_o", false,-1);
    tracep->declBit(c+144,"led_ce_o", false,-1);
    tracep->declBit(c+145,"led_cf_o", false,-1);
    tracep->declBit(c+146,"led_cg_o", false,-1);
    tracep->declBit(c+147,"led_dp_o", false,-1);
    tracep->declBus(c+148,"light_o", false,-1, 23,0);
    tracep->declBus(c+149,"switch_i", false,-1, 23,0);
    tracep->declBus(c+86,"tmp_addr", false,-1, 15,0);
    tracep->declBus(c+156,"dram_data_o", false,-1, 31,0);
    tracep->declBus(c+27,"led_data", false,-1, 31,0);
    tracep->pushNamePrefix("u_dram ");
    tracep->declBus(c+165,"ADDR_BITS", false,-1, 31,0);
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBus(c+87,"a", false,-1, 15,0);
    tracep->declBit(c+84,"we", false,-1);
    tracep->declBus(c+85,"d", false,-1, 31,0);
    tracep->declBus(c+156,"spo", false,-1, 31,0);
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->declBus(c+2,"j", false,-1, 31,0);
    tracep->declBus(c+3,"mem_file", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_led_display ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+27,"number", false,-1, 31,0);
    tracep->declBus(c+139,"led_en", false,-1, 7,0);
    tracep->declBit(c+140,"led_ca", false,-1);
    tracep->declBit(c+141,"led_cb", false,-1);
    tracep->declBit(c+142,"led_cc", false,-1);
    tracep->declBit(c+143,"led_cd", false,-1);
    tracep->declBit(c+144,"led_ce", false,-1);
    tracep->declBit(c+145,"led_cf", false,-1);
    tracep->declBit(c+146,"led_cg", false,-1);
    tracep->declBit(c+147,"led_dp", false,-1);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+4+i*1,"led_num", true,(i+0), 6,0);
    }
    tracep->declBus(c+28,"cnt", false,-1, 15,0);
    tracep->declBus(c+166,"cnt_end", false,-1, 15,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_inst_mem ");
    tracep->declBus(c+165,"ADDR_BITS", false,-1, 31,0);
    tracep->declBus(c+29,"a", false,-1, 15,0);
    tracep->declBus(c+25,"spo", false,-1, 31,0);
    tracep->declBus(c+20,"i", false,-1, 31,0);
    tracep->declBus(c+21,"j", false,-1, 31,0);
    tracep->declBus(c+22,"mem_file", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_miniRv ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+25,"inst_i", false,-1, 31,0);
    tracep->declBus(c+155,"mem_rdata_i", false,-1, 31,0);
    tracep->declBus(c+26,"inst_addr_o", false,-1, 13,0);
    tracep->declBus(c+83,"mem_addr_o", false,-1, 15,0);
    tracep->declBit(c+84,"mem_wen_o", false,-1);
    tracep->declBus(c+85,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+150,"debug_wb_have_inst", false,-1);
    tracep->declBus(c+151,"debug_wb_pc", false,-1, 31,0);
    tracep->declBit(c+152,"debug_wb_ena", false,-1);
    tracep->declBus(c+153,"debug_wb_reg", false,-1, 4,0);
    tracep->declBus(c+154,"debug_wb_value", false,-1, 31,0);
    tracep->declBit(c+112,"pc_sel_i", false,-1);
    tracep->declBus(c+157,"pc_br_addr_i", false,-1, 15,0);
    tracep->declBus(c+30,"pc_pc_o", false,-1, 15,0);
    tracep->declBus(c+31,"pc_pc4_o", false,-1, 15,0);
    tracep->declBus(c+32,"ifid_pc_o", false,-1, 15,0);
    tracep->declBus(c+33,"ifid_pc4_o", false,-1, 15,0);
    tracep->declBus(c+88,"ifid_inst_o", false,-1, 31,0);
    tracep->declBit(c+113,"idex_inst_valid_i", false,-1);
    tracep->declBus(c+158,"idex_op1_i", false,-1, 31,0);
    tracep->declBus(c+114,"idex_op2_i", false,-1, 31,0);
    tracep->declBus(c+115,"idex_alu_sel_i", false,-1, 1,0);
    tracep->declBus(c+116,"idex_alu_op_i", false,-1, 3,0);
    tracep->declBit(c+117,"idex_reg_wen_i", false,-1);
    tracep->declBus(c+89,"idex_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+118,"idex_wb_sel_i", false,-1, 1,0);
    tracep->declBit(c+159,"idex_mem_wen_i", false,-1);
    tracep->declBus(c+119,"idex_mem_wdata_i", false,-1, 31,0);
    tracep->declBus(c+34,"idex_op1_o", false,-1, 31,0);
    tracep->declBus(c+35,"idex_op2_o", false,-1, 31,0);
    tracep->declBus(c+36,"idex_alu_sel_o", false,-1, 1,0);
    tracep->declBus(c+37,"idex_alu_op_o", false,-1, 3,0);
    tracep->declBit(c+90,"idex_reg_wen_o", false,-1);
    tracep->declBus(c+91,"idex_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+38,"idex_wb_sel_o", false,-1, 1,0);
    tracep->declBus(c+39,"idex_pc_o", false,-1, 15,0);
    tracep->declBus(c+40,"idex_pc4_o", false,-1, 15,0);
    tracep->declBit(c+92,"idex_mem_wen_o", false,-1);
    tracep->declBus(c+93,"idex_mem_wdata_o", false,-1, 31,0);
    tracep->declBus(c+120,"ex_data_forward_o", false,-1, 31,0);
    tracep->declBit(c+41,"exmem_inst_valid_i", false,-1);
    tracep->declBit(c+92,"exmem_mem_wen_i", false,-1);
    tracep->declBus(c+93,"exmem_mem_wdata_i", false,-1, 31,0);
    tracep->declBit(c+90,"exmem_reg_wen_i", false,-1);
    tracep->declBus(c+91,"exmem_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+121,"exmem_alu_result_i", false,-1, 31,0);
    tracep->declBus(c+38,"exmem_wb_sel_i", false,-1, 1,0);
    tracep->declBus(c+40,"exmem_pc4_i", false,-1, 15,0);
    tracep->declBit(c+42,"exmem_inst_valid_o", false,-1);
    tracep->declBit(c+94,"exmem_reg_wen_o", false,-1);
    tracep->declBus(c+95,"exmem_reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+96,"exmem_alu_result_o", false,-1, 31,0);
    tracep->declBus(c+43,"exmem_wb_sel_o", false,-1, 1,0);
    tracep->declBus(c+44,"exmem_pc4_o", false,-1, 15,0);
    tracep->declBus(c+39,"exmem_pc_i", false,-1, 15,0);
    tracep->declBus(c+45,"exmem_pc_o", false,-1, 15,0);
    tracep->declBit(c+167,"memwb_reg_wen_i", false,-1);
    tracep->declBus(c+168,"memwb_reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+122,"memwb_reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+46,"trace_pc", false,-1, 15,0);
    tracep->declBit(c+97,"regfile_wen_i", false,-1);
    tracep->declBus(c+98,"regfile_wdata_i", false,-1, 31,0);
    tracep->declBus(c+99,"regfile_waddr_i", false,-1, 4,0);
    tracep->declBus(c+169,"regfile_raddr1_i", false,-1, 4,0);
    tracep->declBus(c+170,"regfile_raddr2_i", false,-1, 4,0);
    tracep->declBus(c+160,"regfile_data1_o", false,-1, 31,0);
    tracep->declBus(c+161,"regfile_data2_o", false,-1, 31,0);
    tracep->declBus(c+171,"alu_num1_i", false,-1, 31,0);
    tracep->declBus(c+172,"alu_num2_i", false,-1, 31,0);
    tracep->declBus(c+173,"alu_sel_i", false,-1, 1,0);
    tracep->declBus(c+174,"alu_op_i", false,-1, 5,0);
    tracep->declBit(c+123,"bubble_id_op1_sel_i", false,-1);
    tracep->declBus(c+100,"bubble_id_raddr1_i", false,-1, 4,0);
    tracep->declBit(c+124,"bubble_id_op2_sel_i", false,-1);
    tracep->declBus(c+101,"bubble_id_raddr2_i", false,-1, 4,0);
    tracep->declBit(c+125,"bubble_pc_pause_o", false,-1);
    tracep->declBit(c+126,"bubble_ifid_pause_o", false,-1);
    tracep->declBit(c+127,"bubble_idex_pause_o", false,-1);
    tracep->declBit(c+23,"bubble_exmem_pause_o", false,-1);
    tracep->declBit(c+24,"bubble_memwb_pause_o", false,-1);
    tracep->declBit(c+41,"idex_inst_valid_o", false,-1);
    tracep->pushNamePrefix("u_bubble ");
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+90,"ex_wen_i", false,-1);
    tracep->declBus(c+38,"ex_wb_sel_i", false,-1, 1,0);
    tracep->declBus(c+91,"ex_reg_waddr_i", false,-1, 4,0);
    tracep->declBit(c+123,"id_op1_sel_i", false,-1);
    tracep->declBus(c+100,"id_raddr1_i", false,-1, 4,0);
    tracep->declBit(c+124,"id_op2_sel_i", false,-1);
    tracep->declBus(c+101,"id_raddr2_i", false,-1, 4,0);
    tracep->declBit(c+125,"pc_pause_o", false,-1);
    tracep->declBit(c+126,"ifid_pause_o", false,-1);
    tracep->declBit(c+127,"idex_pause_o", false,-1);
    tracep->declBit(c+23,"exmem_pause_o", false,-1);
    tracep->declBit(c+24,"memwb_pause_o", false,-1);
    tracep->declBit(c+128,"lu_pause", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ex ");
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+41,"inst_valid_i", false,-1);
    tracep->declBus(c+34,"op1_i", false,-1, 31,0);
    tracep->declBus(c+35,"op2_i", false,-1, 31,0);
    tracep->declBus(c+36,"alu_sel_i", false,-1, 1,0);
    tracep->declBus(c+37,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+90,"reg_wen_i", false,-1);
    tracep->declBus(c+91,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+38,"wb_sel_i", false,-1, 1,0);
    tracep->declBus(c+39,"pc_i", false,-1, 15,0);
    tracep->declBus(c+40,"pc4_i", false,-1, 15,0);
    tracep->declBit(c+92,"mem_wen_i", false,-1);
    tracep->declBus(c+93,"mem_wdata_i", false,-1, 31,0);
    tracep->declBit(c+41,"inst_valid_o", false,-1);
    tracep->declBit(c+92,"mem_wen_o", false,-1);
    tracep->declBus(c+93,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+90,"reg_wen_o", false,-1);
    tracep->declBus(c+91,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+121,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+38,"wb_sel_o", false,-1, 1,0);
    tracep->declBus(c+39,"pc_o", false,-1, 15,0);
    tracep->declBus(c+40,"pc4_o", false,-1, 15,0);
    tracep->declBus(c+120,"data_forward_o", false,-1, 31,0);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+34,"num1_i", false,-1, 31,0);
    tracep->declBus(c+35,"num2_i", false,-1, 31,0);
    tracep->declBus(c+36,"sel", false,-1, 1,0);
    tracep->declBus(c+37,"op", false,-1, 3,0);
    tracep->declBus(c+121,"result_o", false,-1, 31,0);
    tracep->declBus(c+162,"result_arith", false,-1, 31,0);
    tracep->declBus(c+163,"result_shift", false,-1, 31,0);
    tracep->declBus(c+164,"result_logic", false,-1, 31,0);
    tracep->declBus(c+47,"num_add", false,-1, 31,0);
    tracep->declBus(c+48,"num_sub", false,-1, 31,0);
    tracep->declBit(c+49,"num1_eq_num2", false,-1);
    tracep->declBit(c+50,"num1_lt_num2", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ex_mem ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+23,"pause_i", false,-1);
    tracep->declBit(c+41,"inst_valid_i", false,-1);
    tracep->declBit(c+92,"mem_wen_i", false,-1);
    tracep->declBus(c+93,"mem_wdata_i", false,-1, 31,0);
    tracep->declBit(c+90,"reg_wen_i", false,-1);
    tracep->declBus(c+91,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+121,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+38,"wb_sel_i", false,-1, 1,0);
    tracep->declBus(c+39,"pc_i", false,-1, 15,0);
    tracep->declBus(c+40,"pc4_i", false,-1, 15,0);
    tracep->declBit(c+42,"inst_valid_o", false,-1);
    tracep->declBit(c+84,"mem_wen_o", false,-1);
    tracep->declBus(c+85,"mem_wdata_o", false,-1, 31,0);
    tracep->declBit(c+94,"reg_wen_o", false,-1);
    tracep->declBus(c+95,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+96,"alu_result_o", false,-1, 31,0);
    tracep->declBus(c+43,"wb_sel_o", false,-1, 1,0);
    tracep->declBus(c+45,"pc_o", false,-1, 15,0);
    tracep->declBus(c+44,"pc4_o", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_id ");
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+88,"inst_i", false,-1, 31,0);
    tracep->declBus(c+160,"rdata1_i", false,-1, 31,0);
    tracep->declBus(c+161,"rdata2_i", false,-1, 31,0);
    tracep->declBus(c+32,"pc_i", false,-1, 15,0);
    tracep->declBit(c+113,"inst_valid_o", false,-1);
    tracep->declBit(c+112,"pc_sel_o", false,-1);
    tracep->declBus(c+157,"br_addr_o", false,-1, 15,0);
    tracep->declBit(c+117,"reg_wen_o", false,-1);
    tracep->declBus(c+89,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+158,"op1_o", false,-1, 31,0);
    tracep->declBus(c+114,"op2_o", false,-1, 31,0);
    tracep->declBus(c+115,"alu_sel_o", false,-1, 1,0);
    tracep->declBus(c+116,"alu_op_o", false,-1, 3,0);
    tracep->declBit(c+159,"mem_wen_o", false,-1);
    tracep->declBus(c+119,"mem_wdata_o", false,-1, 31,0);
    tracep->declBus(c+118,"wb_sel_o", false,-1, 1,0);
    tracep->declBit(c+90,"ex_wen_i", false,-1);
    tracep->declBus(c+91,"ex_waddr_i", false,-1, 4,0);
    tracep->declBus(c+120,"ex_wdata_i", false,-1, 31,0);
    tracep->declBit(c+94,"mem_wen_i", false,-1);
    tracep->declBus(c+95,"mem_waddr_i", false,-1, 4,0);
    tracep->declBus(c+122,"mem_wdata_i", false,-1, 31,0);
    tracep->declBit(c+123,"op1_sel_o", false,-1);
    tracep->declBus(c+100,"raddr1_o", false,-1, 4,0);
    tracep->declBit(c+124,"op2_sel_o", false,-1);
    tracep->declBus(c+101,"raddr2_o", false,-1, 4,0);
    tracep->declBus(c+129,"ctrl_imm_sel_o", false,-1, 2,0);
    tracep->declBit(c+123,"ctrl_op1_sel_o", false,-1);
    tracep->declBit(c+124,"ctrl_op2_sel_o", false,-1);
    tracep->declBus(c+130,"ctrl_br_sel_o", false,-1, 2,0);
    tracep->declBus(c+131,"immgen_imm_o", false,-1, 31,0);
    tracep->declBit(c+102,"reg1_ex_forward", false,-1);
    tracep->declBit(c+103,"reg1_mem_forward", false,-1);
    tracep->declBit(c+104,"reg2_ex_forward", false,-1);
    tracep->declBit(c+105,"reg2_mem_forward", false,-1);
    tracep->declBus(c+132,"reg1_data", false,-1, 31,0);
    tracep->declBus(c+119,"reg2_data", false,-1, 31,0);
    tracep->declBit(c+106,"ctrl_is_jalr_o", false,-1);
    tracep->pushNamePrefix("u_branch ");
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+130,"sel_i", false,-1, 2,0);
    tracep->declBus(c+132,"data1_i", false,-1, 31,0);
    tracep->declBus(c+119,"data2_i", false,-1, 31,0);
    tracep->declBus(c+32,"pc_i", false,-1, 15,0);
    tracep->declBus(c+133,"imm_i", false,-1, 15,0);
    tracep->declBit(c+106,"is_jalr_i", false,-1);
    tracep->declBus(c+157,"br_addr_o", false,-1, 15,0);
    tracep->declBit(c+112,"pc_sel_o", false,-1);
    tracep->declBus(c+134,"data_sub", false,-1, 31,0);
    tracep->declBit(c+135,"data1_eq_data2", false,-1);
    tracep->declBit(c+136,"data1_lt_data2", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ctrl ");
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+107,"opcode", false,-1, 6,0);
    tracep->declBus(c+108,"func3", false,-1, 2,0);
    tracep->declBus(c+109,"func7", false,-1, 6,0);
    tracep->declBit(c+113,"inst_valid", false,-1);
    tracep->declBus(c+129,"imm_sel", false,-1, 2,0);
    tracep->declBit(c+117,"reg_wen", false,-1);
    tracep->declBit(c+123,"op1_sel", false,-1);
    tracep->declBit(c+124,"op2_sel", false,-1);
    tracep->declBus(c+115,"alu_sel", false,-1, 1,0);
    tracep->declBus(c+116,"alu_op", false,-1, 3,0);
    tracep->declBit(c+159,"mem_wen", false,-1);
    tracep->declBus(c+118,"wb_sel", false,-1, 1,0);
    tracep->declBus(c+130,"br_sel", false,-1, 2,0);
    tracep->declBit(c+106,"is_jalr_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_imm_gen ");
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBus(c+129,"sel_i", false,-1, 2,0);
    tracep->declBus(c+110,"data_i", false,-1, 31,7);
    tracep->declBus(c+131,"imm_o", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_id_ex ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+127,"pause_i", false,-1);
    tracep->declBit(c+113,"inst_valid_i", false,-1);
    tracep->declBus(c+158,"op1_i", false,-1, 31,0);
    tracep->declBus(c+114,"op2_i", false,-1, 31,0);
    tracep->declBus(c+115,"alu_sel_i", false,-1, 1,0);
    tracep->declBus(c+116,"alu_op_i", false,-1, 3,0);
    tracep->declBit(c+117,"reg_wen_i", false,-1);
    tracep->declBus(c+89,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+118,"wb_sel_i", false,-1, 1,0);
    tracep->declBus(c+32,"pc_i", false,-1, 15,0);
    tracep->declBus(c+33,"pc4_i", false,-1, 15,0);
    tracep->declBit(c+159,"mem_wen_i", false,-1);
    tracep->declBus(c+119,"mem_wdata_i", false,-1, 31,0);
    tracep->declBit(c+41,"inst_valid_o", false,-1);
    tracep->declBus(c+34,"op1_o", false,-1, 31,0);
    tracep->declBus(c+35,"op2_o", false,-1, 31,0);
    tracep->declBus(c+36,"alu_sel_o", false,-1, 1,0);
    tracep->declBus(c+37,"alu_op_o", false,-1, 3,0);
    tracep->declBit(c+90,"reg_wen_o", false,-1);
    tracep->declBus(c+91,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+38,"wb_sel_o", false,-1, 1,0);
    tracep->declBus(c+39,"pc_o", false,-1, 15,0);
    tracep->declBus(c+40,"pc4_o", false,-1, 15,0);
    tracep->declBit(c+92,"mem_wen_o", false,-1);
    tracep->declBus(c+93,"mem_wdata_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_if_id ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+126,"pause_i", false,-1);
    tracep->declBus(c+30,"pc_i", false,-1, 15,0);
    tracep->declBus(c+31,"pc4_i", false,-1, 15,0);
    tracep->declBus(c+25,"inst_i", false,-1, 31,0);
    tracep->declBit(c+112,"flush_i", false,-1);
    tracep->declBus(c+32,"pc_o", false,-1, 15,0);
    tracep->declBus(c+33,"pc4_o", false,-1, 15,0);
    tracep->declBus(c+88,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem ");
    tracep->declBus(c+96,"alu_result_i", false,-1, 31,0);
    tracep->declBus(c+43,"wb_sel_i", false,-1, 1,0);
    tracep->declBus(c+44,"pc4_i", false,-1, 15,0);
    tracep->declBus(c+155,"dm_data_i", false,-1, 31,0);
    tracep->declBus(c+122,"reg_wdata_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_mem_wb ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+24,"pause_i", false,-1);
    tracep->declBit(c+42,"inst_valid_i", false,-1);
    tracep->declBit(c+94,"reg_wen_i", false,-1);
    tracep->declBus(c+95,"reg_waddr_i", false,-1, 4,0);
    tracep->declBus(c+122,"reg_wdata_i", false,-1, 31,0);
    tracep->declBus(c+45,"pc_i", false,-1, 15,0);
    tracep->declBit(c+150,"inst_valid_o", false,-1);
    tracep->declBit(c+97,"reg_wen_o", false,-1);
    tracep->declBus(c+99,"reg_waddr_o", false,-1, 4,0);
    tracep->declBus(c+98,"reg_wdata_o", false,-1, 31,0);
    tracep->declBus(c+46,"pc_o", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+111,"rst", false,-1);
    tracep->declBit(c+125,"pause_i", false,-1);
    tracep->declBit(c+112,"sel_i", false,-1);
    tracep->declBus(c+157,"br_addr_i", false,-1, 15,0);
    tracep->declBus(c+31,"pc4_o", false,-1, 15,0);
    tracep->declBus(c+30,"pc_o", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_regfile ");
    tracep->declBit(c+137,"clk", false,-1);
    tracep->declBit(c+97,"wen", false,-1);
    tracep->declBus(c+99,"waddr", false,-1, 4,0);
    tracep->declBus(c+100,"raddr1", false,-1, 4,0);
    tracep->declBus(c+101,"raddr2", false,-1, 4,0);
    tracep->declBus(c+98,"wdata", false,-1, 31,0);
    tracep->declBus(c+160,"data1_o", false,-1, 31,0);
    tracep->declBus(c+161,"data2_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+51+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j),32);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_file),32);
    tracep->fullCData(oldp+4,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0]),7);
    tracep->fullCData(oldp+5,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[1]),7);
    tracep->fullCData(oldp+6,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[2]),7);
    tracep->fullCData(oldp+7,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[3]),7);
    tracep->fullCData(oldp+8,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[4]),7);
    tracep->fullCData(oldp+9,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[5]),7);
    tracep->fullCData(oldp+10,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[6]),7);
    tracep->fullCData(oldp+11,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[7]),7);
    tracep->fullCData(oldp+12,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[8]),7);
    tracep->fullCData(oldp+13,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[9]),7);
    tracep->fullCData(oldp+14,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[10]),7);
    tracep->fullCData(oldp+15,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[11]),7);
    tracep->fullCData(oldp+16,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[12]),7);
    tracep->fullCData(oldp+17,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[13]),7);
    tracep->fullCData(oldp+18,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[14]),7);
    tracep->fullCData(oldp+19,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[15]),7);
    tracep->fullIData(oldp+20,(vlSelf->top__DOT__u_inst_mem__DOT__i),32);
    tracep->fullIData(oldp+21,(vlSelf->top__DOT__u_inst_mem__DOT__j),32);
    tracep->fullIData(oldp+22,(vlSelf->top__DOT__u_inst_mem__DOT__mem_file),32);
    tracep->fullBit(oldp+23,(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o));
    tracep->fullBit(oldp+24,(vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o));
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__u_inst_mem__DOT__mem
                               [(0x3fffU & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o) 
                                            >> 2U))]),32);
    tracep->fullSData(oldp+26,((0x3fffU & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o) 
                                           >> 2U))),14);
    tracep->fullIData(oldp+27,(vlSelf->top__DOT__u_bridge__DOT__led_data),32);
    tracep->fullSData(oldp+28,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__cnt),16);
    tracep->fullSData(oldp+29,((0x3fffU & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o) 
                                           >> 2U))),16);
    tracep->fullSData(oldp+30,(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o),16);
    tracep->fullSData(oldp+31,((0xffffU & ((IData)(4U) 
                                           + (IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o)))),16);
    tracep->fullSData(oldp+32,(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o),16);
    tracep->fullSData(oldp+33,(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc4_o),16);
    tracep->fullIData(oldp+34,(vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o),32);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o),32);
    tracep->fullCData(oldp+36,(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_o),2);
    tracep->fullCData(oldp+37,(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o),4);
    tracep->fullCData(oldp+38,(vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o),2);
    tracep->fullSData(oldp+39,(vlSelf->top__DOT__u_miniRv__DOT__idex_pc_o),16);
    tracep->fullSData(oldp+40,(vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o),16);
    tracep->fullBit(oldp+41,(vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_o));
    tracep->fullBit(oldp+42,(vlSelf->top__DOT__u_miniRv__DOT__exmem_inst_valid_o));
    tracep->fullCData(oldp+43,(vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o),2);
    tracep->fullSData(oldp+44,(vlSelf->top__DOT__u_miniRv__DOT__exmem_pc4_o),16);
    tracep->fullSData(oldp+45,(vlSelf->top__DOT__u_miniRv__DOT__exmem_pc_o),16);
    tracep->fullSData(oldp+46,(vlSelf->top__DOT__u_miniRv__DOT__trace_pc),16);
    tracep->fullIData(oldp+47,((vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                + vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub),32);
    tracep->fullBit(oldp+49,((vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                              == vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)));
    tracep->fullBit(oldp+50,(vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2));
    tracep->fullIData(oldp+51,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[0]),32);
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[1]),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[2]),32);
    tracep->fullIData(oldp+54,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[3]),32);
    tracep->fullIData(oldp+55,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[4]),32);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[5]),32);
    tracep->fullIData(oldp+57,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[6]),32);
    tracep->fullIData(oldp+58,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[7]),32);
    tracep->fullIData(oldp+59,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[8]),32);
    tracep->fullIData(oldp+60,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[9]),32);
    tracep->fullIData(oldp+61,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[10]),32);
    tracep->fullIData(oldp+62,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[11]),32);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[12]),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[13]),32);
    tracep->fullIData(oldp+65,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[14]),32);
    tracep->fullIData(oldp+66,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[15]),32);
    tracep->fullIData(oldp+67,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[16]),32);
    tracep->fullIData(oldp+68,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[17]),32);
    tracep->fullIData(oldp+69,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[18]),32);
    tracep->fullIData(oldp+70,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[19]),32);
    tracep->fullIData(oldp+71,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[20]),32);
    tracep->fullIData(oldp+72,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[21]),32);
    tracep->fullIData(oldp+73,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[22]),32);
    tracep->fullIData(oldp+74,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[23]),32);
    tracep->fullIData(oldp+75,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[24]),32);
    tracep->fullIData(oldp+76,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[25]),32);
    tracep->fullIData(oldp+77,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[26]),32);
    tracep->fullIData(oldp+78,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[27]),32);
    tracep->fullIData(oldp+79,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[28]),32);
    tracep->fullIData(oldp+80,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[29]),32);
    tracep->fullIData(oldp+81,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[30]),32);
    tracep->fullIData(oldp+82,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[31]),32);
    tracep->fullSData(oldp+83,((0xffffU & vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o)),16);
    tracep->fullBit(oldp+84,(vlSelf->top__DOT__bridge_wen_i));
    tracep->fullIData(oldp+85,(vlSelf->top__DOT__bridge_wdata_i),32);
    tracep->fullSData(oldp+86,((0xffffU & (vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                           - (IData)(0x4000U)))),16);
    tracep->fullSData(oldp+87,((0x3fffU & ((vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                            - (IData)(0x4000U)) 
                                           >> 2U))),16);
    tracep->fullIData(oldp+88,(vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o),32);
    tracep->fullCData(oldp+89,((0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                         >> 7U))),5);
    tracep->fullBit(oldp+90,(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o));
    tracep->fullCData(oldp+91,(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o),5);
    tracep->fullBit(oldp+92,(vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wen_o));
    tracep->fullIData(oldp+93,(vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wdata_o),32);
    tracep->fullBit(oldp+94,(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o));
    tracep->fullCData(oldp+95,(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o),5);
    tracep->fullIData(oldp+96,(vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o),32);
    tracep->fullBit(oldp+97,(vlSelf->top__DOT__u_miniRv__DOT__regfile_wen_i));
    tracep->fullIData(oldp+98,(vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i),32);
    tracep->fullCData(oldp+99,(vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i),5);
    tracep->fullCData(oldp+100,((0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+101,((0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                          >> 0x14U))),5);
    tracep->fullBit(oldp+102,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o) 
                               & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o) 
                                  == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                               >> 0xfU))))));
    tracep->fullBit(oldp+103,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o) 
                               & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o) 
                                  == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                               >> 0xfU))))));
    tracep->fullBit(oldp+104,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o) 
                               & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o) 
                                  == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                               >> 0x14U))))));
    tracep->fullBit(oldp+105,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o) 
                               & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o) 
                                  == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                               >> 0x14U))))));
    tracep->fullBit(oldp+106,((IData)((0x67U == (0x707fU 
                                                 & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))));
    tracep->fullCData(oldp+107,((0x7fU & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)),7);
    tracep->fullCData(oldp+108,((7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                       >> 0xcU))),3);
    tracep->fullCData(oldp+109,((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                 >> 0x19U)),7);
    tracep->fullIData(oldp+110,((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                 >> 7U)),25);
    tracep->fullBit(oldp+111,(vlSelf->top__DOT__rst));
    tracep->fullBit(oldp+112,(vlSelf->top__DOT__u_miniRv__DOT__pc_sel_i));
    tracep->fullBit(oldp+113,(vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_i));
    tracep->fullIData(oldp+114,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o)
                                  ? vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o
                                  : vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data)),32);
    tracep->fullCData(oldp+115,(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i),2);
    tracep->fullCData(oldp+116,(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i),4);
    tracep->fullBit(oldp+117,(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_i));
    tracep->fullCData(oldp+118,(vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i),2);
    tracep->fullIData(oldp+119,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data),32);
    tracep->fullIData(oldp+120,(vlSelf->top__DOT__u_miniRv__DOT__ex_data_forward_o),32);
    tracep->fullIData(oldp+121,(vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_i),32);
    tracep->fullIData(oldp+122,(vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wdata_i),32);
    tracep->fullBit(oldp+123,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o));
    tracep->fullBit(oldp+124,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o));
    tracep->fullBit(oldp+125,(vlSelf->top__DOT__u_miniRv__DOT__bubble_pc_pause_o));
    tracep->fullBit(oldp+126,(vlSelf->top__DOT__u_miniRv__DOT__bubble_ifid_pause_o));
    tracep->fullBit(oldp+127,(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o));
    tracep->fullBit(oldp+128,(vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause));
    tracep->fullCData(oldp+129,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o),3);
    tracep->fullCData(oldp+130,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o),3);
    tracep->fullIData(oldp+131,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o),32);
    tracep->fullIData(oldp+132,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data),32);
    tracep->fullSData(oldp+133,((0xffffU & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o)),16);
    tracep->fullIData(oldp+134,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub),32);
    tracep->fullBit(oldp+135,((vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                               == vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data)));
    tracep->fullBit(oldp+136,((1U & (((3U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o)) 
                                      | (5U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o)))
                                      ? ((((vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                            >> 0x1fU) 
                                           & (~ (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data 
                                                 >> 0x1fU))) 
                                          | (((vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                               & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data) 
                                              & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub) 
                                             >> 0x1fU)) 
                                         | (((~ (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                                 >> 0x1fU)) 
                                             & (~ (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data 
                                                   >> 0x1fU))) 
                                            & (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub 
                                               >> 0x1fU)))
                                      : (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                         < vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data)))));
    tracep->fullBit(oldp+137,(vlSelf->clk));
    tracep->fullBit(oldp+138,(vlSelf->rst_n));
    tracep->fullCData(oldp+139,(vlSelf->led_en_o),8);
    tracep->fullBit(oldp+140,(vlSelf->led_ca_o));
    tracep->fullBit(oldp+141,(vlSelf->led_cb_o));
    tracep->fullBit(oldp+142,(vlSelf->led_cc_o));
    tracep->fullBit(oldp+143,(vlSelf->led_cd_o));
    tracep->fullBit(oldp+144,(vlSelf->led_ce_o));
    tracep->fullBit(oldp+145,(vlSelf->led_cf_o));
    tracep->fullBit(oldp+146,(vlSelf->led_cg_o));
    tracep->fullBit(oldp+147,(vlSelf->led_dp_o));
    tracep->fullIData(oldp+148,(vlSelf->light_o),24);
    tracep->fullIData(oldp+149,(vlSelf->switch_i),24);
    tracep->fullBit(oldp+150,(vlSelf->debug_wb_have_inst));
    tracep->fullIData(oldp+151,(vlSelf->debug_wb_pc),32);
    tracep->fullBit(oldp+152,(vlSelf->debug_wb_ena));
    tracep->fullCData(oldp+153,(vlSelf->debug_wb_reg),5);
    tracep->fullIData(oldp+154,(vlSelf->debug_wb_value),32);
    tracep->fullIData(oldp+155,(((0xf070U == (0xffffU 
                                              & vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o))
                                  ? vlSelf->switch_i
                                  : vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem
                                 [(0x3fffU & ((vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                               - (IData)(0x4000U)) 
                                              >> 2U))])),32);
    tracep->fullIData(oldp+156,(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem
                                [(0x3fffU & ((vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                              - (IData)(0x4000U)) 
                                             >> 2U))]),32);
    tracep->fullSData(oldp+157,((0xffffU & ((IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                                             ? (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                                + (0xffffU 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o))
                                             : ((IData)(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o) 
                                                + (0xffffU 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o))))),16);
    tracep->fullIData(oldp+158,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o)
                                  ? vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data
                                  : (IData)(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o))),32);
    tracep->fullBit(oldp+159,(((~ (IData)(vlSelf->top__DOT__rst)) 
                               & (IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))))));
    tracep->fullIData(oldp+160,(((0U == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                  >> 0xfU)))
                                  ? 0U : (((0x1fU & 
                                            (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                             >> 0xfU)) 
                                           == (IData)(vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i))
                                           ? vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i
                                           : vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                             >> 0xfU))]))),32);
    tracep->fullIData(oldp+161,(((0U == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                  >> 0x14U)))
                                  ? 0U : (((0x1fU & 
                                            (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                             >> 0x14U)) 
                                           == (IData)(vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i))
                                           ? vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i
                                           : vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs
                                          [(0x1fU & 
                                            (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                             >> 0x14U))]))),32);
    tracep->fullIData(oldp+162,(((IData)(vlSelf->top__DOT__rst)
                                  ? 0U : ((8U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                           ? ((4U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                               ? ((2U 
                                                   & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2)))
                                               : ((2U 
                                                   & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                    ? (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2)
                                                    : 0U)
                                                   : 0U))
                                           : ((4U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                    ? vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o
                                                    : vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                    ? 
                                                   (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                                    + vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)
                                                    : 0U)))))),32);
    tracep->fullIData(oldp+163,(((IData)(vlSelf->top__DOT__rst)
                                  ? 0U : ((5U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                           ? (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                              << (0x1fU 
                                                  & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o))
                                           : ((6U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                               ? (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                                  >> 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o))
                                               : ((7U 
                                                   == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                   ? 
                                                  VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o, 
                                                                 (0x1fU 
                                                                  & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o))
                                                   : 0U))))),32);
    tracep->fullIData(oldp+164,(((IData)(vlSelf->top__DOT__rst)
                                  ? 0U : ((8U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                           ? (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                              & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)
                                           : ((9U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                               ? (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                                  | vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)
                                               : ((0xaU 
                                                   == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                   ? 
                                                  (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                                   ^ vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)
                                                   : 0U))))),32);
    tracep->fullIData(oldp+165,(0x10U),32);
    tracep->fullSData(oldp+166,(0x4e1fU),16);
    tracep->fullBit(oldp+167,(vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wen_i));
    tracep->fullCData(oldp+168,(vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_waddr_i),5);
    tracep->fullCData(oldp+169,(vlSelf->top__DOT__u_miniRv__DOT__regfile_raddr1_i),5);
    tracep->fullCData(oldp+170,(vlSelf->top__DOT__u_miniRv__DOT__regfile_raddr2_i),5);
    tracep->fullIData(oldp+171,(vlSelf->top__DOT__u_miniRv__DOT__alu_num1_i),32);
    tracep->fullIData(oldp+172,(vlSelf->top__DOT__u_miniRv__DOT__alu_num2_i),32);
    tracep->fullCData(oldp+173,(vlSelf->top__DOT__u_miniRv__DOT__alu_sel_i),2);
    tracep->fullCData(oldp+174,(vlSelf->top__DOT__u_miniRv__DOT__alu_op_i),6);
}
