// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hd22861a6__0;
    VlWide<3>/*95:0*/ __Vtemp_hd22861a6__1;
    // Body
    vlSelf->led_dp_o = 1U;
    vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100000U, vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i)) {
        vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j 
            = vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i;
        while (VL_LTS_III(32, vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j, 
                          ((IData)(0x400U) + vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i))) {
            vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem[(0xfffffU 
                                                               & vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j)] = 0U;
            vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j 
                = ((IData)(1U) + vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j);
        }
        vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i 
            = ((IData)(0x400U) + vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i);
    }
    __Vtemp_hd22861a6__0[0U] = 0x2e62696eU;
    __Vtemp_hd22861a6__0[1U] = 0x696e6974U;
    __Vtemp_hd22861a6__0[2U] = 0x6d656dU;
    vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_file = VL_FOPEN_NN(
                                                                         VL_CVT_PACK_STR_NW(3, __Vtemp_hd22861a6__0)
                                                                         , 
                                                                         std::string("r"));
    if (VL_UNLIKELY((0U == vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_file))) {
        VL_WRITEF("[ERROR] Open file meminit.bin failed, please check whether file exists!\n\n[%0t] %%Error: ram.v:66: Assertion failed in %Ntop.u_bridge.u_dram\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("vsrc/ram.v", 66, "");
    }
    VL_WRITEF("[INFO] Data RAM initialized with meminit.bin\n");
    (void)VL_FREAD_I(32,0,1048576, &(vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_rd)
                     , vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_file
                     , 0, 1048576);vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100000U, vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i)) {
        vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j 
            = vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i;
        while (VL_LTS_III(32, vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j, 
                          ((IData)(0x400U) + vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i))) {
            vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem[(0xfffffU 
                                                               & vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j)] 
                = ((vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_rd
                    [(0xfffffU & vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j)] 
                    << 0x18U) | ((0xff0000U & (vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_rd
                                               [(0xfffffU 
                                                 & vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j)] 
                                               << 8U)) 
                                 | ((0xff00U & (vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_rd
                                                [(0xfffffU 
                                                  & vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j)] 
                                                >> 8U)) 
                                    | (vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_rd
                                       [(0xfffffU & vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j)] 
                                       >> 0x18U))));
            vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j 
                = ((IData)(1U) + vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j);
        }
        vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i 
            = ((IData)(0x400U) + vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i);
    }
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0U] = 1U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[1U] = 0x4fU;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[2U] = 0x12U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[3U] = 6U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[4U] = 0x4cU;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[5U] = 0x24U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[6U] = 0x20U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[7U] = 0xfU;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[8U] = 0U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[9U] = 0xcU;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0xaU] = 8U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0xbU] = 0x60U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0xcU] = 0x72U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0xdU] = 0x42U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0xeU] = 0x30U;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[0xfU] = 0x38U;
    vlSelf->top__DOT__u_inst_mem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100000U, vlSelf->top__DOT__u_inst_mem__DOT__i)) {
        vlSelf->top__DOT__u_inst_mem__DOT__j = vlSelf->top__DOT__u_inst_mem__DOT__i;
        while (VL_LTS_III(32, vlSelf->top__DOT__u_inst_mem__DOT__j, 
                          ((IData)(0x400U) + vlSelf->top__DOT__u_inst_mem__DOT__i))) {
            vlSelf->top__DOT__u_inst_mem__DOT__mem[(0xfffffU 
                                                    & vlSelf->top__DOT__u_inst_mem__DOT__j)] = 0U;
            vlSelf->top__DOT__u_inst_mem__DOT__j = 
                ((IData)(1U) + vlSelf->top__DOT__u_inst_mem__DOT__j);
        }
        vlSelf->top__DOT__u_inst_mem__DOT__i = ((IData)(0x400U) 
                                                + vlSelf->top__DOT__u_inst_mem__DOT__i);
    }
    __Vtemp_hd22861a6__1[0U] = 0x2e62696eU;
    __Vtemp_hd22861a6__1[1U] = 0x696e6974U;
    __Vtemp_hd22861a6__1[2U] = 0x6d656dU;
    vlSelf->top__DOT__u_inst_mem__DOT__mem_file = VL_FOPEN_NN(
                                                              VL_CVT_PACK_STR_NW(3, __Vtemp_hd22861a6__1)
                                                              , 
                                                              std::string("r"));
    if (VL_UNLIKELY((0U == vlSelf->top__DOT__u_inst_mem__DOT__mem_file))) {
        VL_WRITEF("[ERROR] Open file meminit.bin failed, please check whether file exists!\n\n[%0t] %%Error: ram.v:26: Assertion failed in %Ntop.u_inst_mem\n",
                  64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
        VL_STOP_MT("vsrc/ram.v", 26, "");
    }
    VL_WRITEF("[INFO] Instruction ROM initialized with meminit.bin\n");
    (void)VL_FREAD_I(32,0,1048576, &(vlSelf->top__DOT__u_inst_mem__DOT__mem_rd)
                     , vlSelf->top__DOT__u_inst_mem__DOT__mem_file
                     , 0, 1048576);vlSelf->top__DOT__u_inst_mem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100000U, vlSelf->top__DOT__u_inst_mem__DOT__i)) {
        vlSelf->top__DOT__u_inst_mem__DOT__j = vlSelf->top__DOT__u_inst_mem__DOT__i;
        while (VL_LTS_III(32, vlSelf->top__DOT__u_inst_mem__DOT__j, 
                          ((IData)(0x400U) + vlSelf->top__DOT__u_inst_mem__DOT__i))) {
            vlSelf->top__DOT__u_inst_mem__DOT__mem[(0xfffffU 
                                                    & vlSelf->top__DOT__u_inst_mem__DOT__j)] 
                = ((vlSelf->top__DOT__u_inst_mem__DOT__mem_rd
                    [(0xfffffU & vlSelf->top__DOT__u_inst_mem__DOT__j)] 
                    << 0x18U) | ((0xff0000U & (vlSelf->top__DOT__u_inst_mem__DOT__mem_rd
                                               [(0xfffffU 
                                                 & vlSelf->top__DOT__u_inst_mem__DOT__j)] 
                                               << 8U)) 
                                 | ((0xff00U & (vlSelf->top__DOT__u_inst_mem__DOT__mem_rd
                                                [(0xfffffU 
                                                  & vlSelf->top__DOT__u_inst_mem__DOT__j)] 
                                                >> 8U)) 
                                    | (vlSelf->top__DOT__u_inst_mem__DOT__mem_rd
                                       [(0xfffffU & vlSelf->top__DOT__u_inst_mem__DOT__j)] 
                                       >> 0x18U))));
            vlSelf->top__DOT__u_inst_mem__DOT__j = 
                ((IData)(1U) + vlSelf->top__DOT__u_inst_mem__DOT__j);
        }
        vlSelf->top__DOT__u_inst_mem__DOT__i = ((IData)(0x400U) 
                                                + vlSelf->top__DOT__u_inst_mem__DOT__i);
    }
}
