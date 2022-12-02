// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j),32);
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_file),32);
        tracep->chgCData(oldp+3,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0]),7);
        tracep->chgCData(oldp+4,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[1]),7);
        tracep->chgCData(oldp+5,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[2]),7);
        tracep->chgCData(oldp+6,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[3]),7);
        tracep->chgCData(oldp+7,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[4]),7);
        tracep->chgCData(oldp+8,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[5]),7);
        tracep->chgCData(oldp+9,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[6]),7);
        tracep->chgCData(oldp+10,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[7]),7);
        tracep->chgCData(oldp+11,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[8]),7);
        tracep->chgCData(oldp+12,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[9]),7);
        tracep->chgCData(oldp+13,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[10]),7);
        tracep->chgCData(oldp+14,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[11]),7);
        tracep->chgCData(oldp+15,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[12]),7);
        tracep->chgCData(oldp+16,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[13]),7);
        tracep->chgCData(oldp+17,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[14]),7);
        tracep->chgCData(oldp+18,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[15]),7);
        tracep->chgIData(oldp+19,(vlSelf->top__DOT__u_inst_mem__DOT__i),32);
        tracep->chgIData(oldp+20,(vlSelf->top__DOT__u_inst_mem__DOT__j),32);
        tracep->chgIData(oldp+21,(vlSelf->top__DOT__u_inst_mem__DOT__mem_file),32);
        tracep->chgBit(oldp+22,(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o));
        tracep->chgBit(oldp+23,(vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__u_inst_mem__DOT__mem
                                  [(0x3fffU & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o) 
                                               >> 2U))]),32);
        tracep->chgSData(oldp+25,((0x3fffU & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o) 
                                              >> 2U))),14);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__u_bridge__DOT__led_data),32);
        tracep->chgSData(oldp+27,(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__cnt),16);
        tracep->chgSData(oldp+28,((0x3fffU & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o) 
                                              >> 2U))),16);
        tracep->chgSData(oldp+29,(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o),16);
        tracep->chgSData(oldp+30,((0xffffU & ((IData)(4U) 
                                              + (IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o)))),16);
        tracep->chgSData(oldp+31,(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o),16);
        tracep->chgSData(oldp+32,(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc4_o),16);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o),32);
        tracep->chgCData(oldp+35,(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_o),2);
        tracep->chgCData(oldp+36,(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o),4);
        tracep->chgCData(oldp+37,(vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o),2);
        tracep->chgSData(oldp+38,(vlSelf->top__DOT__u_miniRv__DOT__idex_pc_o),16);
        tracep->chgSData(oldp+39,(vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o),16);
        tracep->chgBit(oldp+40,(vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_o));
        tracep->chgBit(oldp+41,(vlSelf->top__DOT__u_miniRv__DOT__exmem_inst_valid_o));
        tracep->chgCData(oldp+42,(vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o),2);
        tracep->chgSData(oldp+43,(vlSelf->top__DOT__u_miniRv__DOT__exmem_pc4_o),16);
        tracep->chgSData(oldp+44,(vlSelf->top__DOT__u_miniRv__DOT__exmem_pc_o),16);
        tracep->chgSData(oldp+45,(vlSelf->top__DOT__u_miniRv__DOT__trace_pc),16);
        tracep->chgIData(oldp+46,((vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                   + vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)),32);
        tracep->chgIData(oldp+47,(vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub),32);
        tracep->chgBit(oldp+48,((vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                 == vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)));
        tracep->chgBit(oldp+49,(vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+50,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[0]),32);
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[1]),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[2]),32);
        tracep->chgIData(oldp+53,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[3]),32);
        tracep->chgIData(oldp+54,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[4]),32);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[5]),32);
        tracep->chgIData(oldp+56,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[6]),32);
        tracep->chgIData(oldp+57,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[7]),32);
        tracep->chgIData(oldp+58,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[8]),32);
        tracep->chgIData(oldp+59,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[9]),32);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[10]),32);
        tracep->chgIData(oldp+61,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[11]),32);
        tracep->chgIData(oldp+62,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[12]),32);
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[13]),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[14]),32);
        tracep->chgIData(oldp+65,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[15]),32);
        tracep->chgIData(oldp+66,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[16]),32);
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[17]),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[18]),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[19]),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[20]),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[21]),32);
        tracep->chgIData(oldp+72,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[22]),32);
        tracep->chgIData(oldp+73,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[23]),32);
        tracep->chgIData(oldp+74,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[24]),32);
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[25]),32);
        tracep->chgIData(oldp+76,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[26]),32);
        tracep->chgIData(oldp+77,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[27]),32);
        tracep->chgIData(oldp+78,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[28]),32);
        tracep->chgIData(oldp+79,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[29]),32);
        tracep->chgIData(oldp+80,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[30]),32);
        tracep->chgIData(oldp+81,(vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgSData(oldp+82,((0xffffU & vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o)),16);
        tracep->chgBit(oldp+83,(vlSelf->top__DOT__bridge_wen_i));
        tracep->chgIData(oldp+84,(vlSelf->top__DOT__bridge_wdata_i),32);
        tracep->chgSData(oldp+85,((0xffffU & (vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                              - (IData)(0x4000U)))),16);
        tracep->chgSData(oldp+86,((0x3fffU & ((vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                               - (IData)(0x4000U)) 
                                              >> 2U))),16);
        tracep->chgIData(oldp+87,(vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o),32);
        tracep->chgCData(oldp+88,((0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                            >> 7U))),5);
        tracep->chgBit(oldp+89,(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o));
        tracep->chgCData(oldp+90,(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o),5);
        tracep->chgBit(oldp+91,(vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wen_o));
        tracep->chgIData(oldp+92,(vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wdata_o),32);
        tracep->chgBit(oldp+93,(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o));
        tracep->chgCData(oldp+94,(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o),5);
        tracep->chgIData(oldp+95,(vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o),32);
        tracep->chgBit(oldp+96,(vlSelf->top__DOT__u_miniRv__DOT__regfile_wen_i));
        tracep->chgIData(oldp+97,(vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i),32);
        tracep->chgCData(oldp+98,(vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i),5);
        tracep->chgCData(oldp+99,((0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+100,((0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                             >> 0x14U))),5);
        tracep->chgBit(oldp+101,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o) 
                                  & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o) 
                                     == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                  >> 0xfU))))));
        tracep->chgBit(oldp+102,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o) 
                                  & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o) 
                                     == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                  >> 0xfU))))));
        tracep->chgBit(oldp+103,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o) 
                                  & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o) 
                                     == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                  >> 0x14U))))));
        tracep->chgBit(oldp+104,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o) 
                                  & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o) 
                                     == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                  >> 0x14U))))));
        tracep->chgBit(oldp+105,((IData)((0x67U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))));
        tracep->chgCData(oldp+106,((0x7fU & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)),7);
        tracep->chgCData(oldp+107,((7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                          >> 0xcU))),3);
        tracep->chgCData(oldp+108,((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                    >> 0x19U)),7);
        tracep->chgIData(oldp+109,((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                    >> 7U)),25);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        tracep->chgBit(oldp+110,(vlSelf->top__DOT__rst));
        tracep->chgBit(oldp+111,(vlSelf->top__DOT__u_miniRv__DOT__pc_sel_i));
        tracep->chgBit(oldp+112,(vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_i));
        tracep->chgIData(oldp+113,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o)
                                     ? vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o
                                     : vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data)),32);
        tracep->chgCData(oldp+114,(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i),2);
        tracep->chgCData(oldp+115,(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i),4);
        tracep->chgBit(oldp+116,(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_i));
        tracep->chgCData(oldp+117,(vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i),2);
        tracep->chgIData(oldp+118,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data),32);
        tracep->chgIData(oldp+119,(vlSelf->top__DOT__u_miniRv__DOT__ex_data_forward_o),32);
        tracep->chgIData(oldp+120,(vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_i),32);
        tracep->chgIData(oldp+121,(vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wdata_i),32);
        tracep->chgBit(oldp+122,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o));
        tracep->chgBit(oldp+123,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o));
        tracep->chgBit(oldp+124,(vlSelf->top__DOT__u_miniRv__DOT__bubble_pc_pause_o));
        tracep->chgBit(oldp+125,(vlSelf->top__DOT__u_miniRv__DOT__bubble_ifid_pause_o));
        tracep->chgBit(oldp+126,(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o));
        tracep->chgBit(oldp+127,(vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause));
        tracep->chgCData(oldp+128,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o),3);
        tracep->chgCData(oldp+129,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o),3);
        tracep->chgIData(oldp+130,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o),32);
        tracep->chgIData(oldp+131,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data),32);
        tracep->chgSData(oldp+132,((0xffffU & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o)),16);
        tracep->chgIData(oldp+133,(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub),32);
        tracep->chgBit(oldp+134,((vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                  == vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data)));
        tracep->chgBit(oldp+135,((1U & (((3U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o)) 
                                         | (5U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o)))
                                         ? ((((vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                               >> 0x1fU) 
                                              & (~ 
                                                 (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data 
                                                  >> 0x1fU))) 
                                             | (((vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                                  & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data) 
                                                 & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub) 
                                                >> 0x1fU)) 
                                            | (((~ 
                                                 (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                                  >> 0x1fU)) 
                                                & (~ 
                                                   (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data 
                                                    >> 0x1fU))) 
                                               & (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub 
                                                  >> 0x1fU)))
                                         : (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                            < vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data)))));
    }
    tracep->chgBit(oldp+136,(vlSelf->clk));
    tracep->chgBit(oldp+137,(vlSelf->rst_n));
    tracep->chgCData(oldp+138,(vlSelf->led_en_o),8);
    tracep->chgBit(oldp+139,(vlSelf->led_ca_o));
    tracep->chgBit(oldp+140,(vlSelf->led_cb_o));
    tracep->chgBit(oldp+141,(vlSelf->led_cc_o));
    tracep->chgBit(oldp+142,(vlSelf->led_cd_o));
    tracep->chgBit(oldp+143,(vlSelf->led_ce_o));
    tracep->chgBit(oldp+144,(vlSelf->led_cf_o));
    tracep->chgBit(oldp+145,(vlSelf->led_cg_o));
    tracep->chgBit(oldp+146,(vlSelf->led_dp_o));
    tracep->chgIData(oldp+147,(vlSelf->light_o),24);
    tracep->chgIData(oldp+148,(vlSelf->switch_i),24);
    tracep->chgBit(oldp+149,(vlSelf->debug_wb_have_inst));
    tracep->chgIData(oldp+150,(vlSelf->debug_wb_pc),32);
    tracep->chgBit(oldp+151,(vlSelf->debug_wb_ena));
    tracep->chgCData(oldp+152,(vlSelf->debug_wb_reg),5);
    tracep->chgIData(oldp+153,(vlSelf->debug_wb_value),32);
    tracep->chgIData(oldp+154,(((0xf070U == (0xffffU 
                                             & vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o))
                                 ? vlSelf->switch_i
                                 : vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem
                                [(0x3fffU & ((vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                              - (IData)(0x4000U)) 
                                             >> 2U))])),32);
    tracep->chgIData(oldp+155,(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem
                               [(0x3fffU & ((vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                             - (IData)(0x4000U)) 
                                            >> 2U))]),32);
    tracep->chgSData(oldp+156,((0xffffU & ((IData)(
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
    tracep->chgIData(oldp+157,(((IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o)
                                 ? vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data
                                 : (IData)(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o))),32);
    tracep->chgBit(oldp+158,(((~ (IData)(vlSelf->top__DOT__rst)) 
                              & (IData)((0x2023U == 
                                         (0x707fU & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))))));
    tracep->chgIData(oldp+159,(((0U == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
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
    tracep->chgIData(oldp+160,(((0U == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
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
    tracep->chgIData(oldp+161,(((IData)(vlSelf->top__DOT__rst)
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
                                              ? 0U : 
                                             ((2U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                               ? ((1U 
                                                   & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                   ? vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o
                                                   : vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub)
                                               : ((1U 
                                                   & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                   ? 
                                                  (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                                   + vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)
                                                   : 0U)))))),32);
    tracep->chgIData(oldp+162,(((IData)(vlSelf->top__DOT__rst)
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
    tracep->chgIData(oldp+163,(((IData)(vlSelf->top__DOT__rst)
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
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
