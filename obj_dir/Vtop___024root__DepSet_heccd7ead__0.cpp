// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__u_miniRv__DOT__pc_pc_o;
    SData/*15:0*/ __Vdly__top__DOT__u_miniRv__DOT__ifid_pc_o;
    SData/*15:0*/ __Vdly__top__DOT__u_miniRv__DOT__ifid_pc4_o;
    SData/*15:0*/ __Vdly__top__DOT__u_bridge__DOT__u_led_display__DOT__cnt;
    CData/*7:0*/ __Vdly__led_en_o;
    // Body
    __Vdly__top__DOT__u_bridge__DOT__u_led_display__DOT__cnt 
        = vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__cnt;
    __Vdly__top__DOT__u_miniRv__DOT__ifid_pc4_o = vlSelf->top__DOT__u_miniRv__DOT__ifid_pc4_o;
    __Vdly__top__DOT__u_miniRv__DOT__ifid_pc_o = vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o;
    __Vdly__led_en_o = vlSelf->led_en_o;
    __Vdly__top__DOT__u_miniRv__DOT__pc_pc_o = vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o;
    vlSelf->__Vdly__top__DOT__u_miniRv__DOT__ifid_inst_o 
        = vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o;
    if (vlSelf->top__DOT__rst) {
        vlSelf->light_o = 0U;
        __Vdly__top__DOT__u_bridge__DOT__u_led_display__DOT__cnt = 0U;
        __Vdly__top__DOT__u_miniRv__DOT__ifid_pc4_o = 0U;
        __Vdly__top__DOT__u_miniRv__DOT__ifid_pc_o = 0U;
        __Vdly__led_en_o = 0xfeU;
        vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                  [0U] >> 6U));
        vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                  [0U] >> 5U));
        vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                  [0U] >> 4U));
        vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                  [0U] >> 3U));
        vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                  [0U] >> 2U));
        vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                  [0U] >> 1U));
        vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                            [0U]);
    } else {
        vlSelf->light_o = vlSelf->switch_i;
        __Vdly__top__DOT__u_bridge__DOT__u_led_display__DOT__cnt 
            = ((0x4e1fU == (IData)(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__cnt))
                ? 0U : (0xffffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__cnt))));
        if (vlSelf->top__DOT__u_miniRv__DOT__pc_sel_i) {
            __Vdly__top__DOT__u_miniRv__DOT__ifid_pc4_o = 0U;
            __Vdly__top__DOT__u_miniRv__DOT__ifid_pc_o = 0U;
        } else if (vlSelf->top__DOT__u_miniRv__DOT__bubble_ifid_pause_o) {
            __Vdly__top__DOT__u_miniRv__DOT__ifid_pc4_o 
                = (0xffffU & (IData)(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc4_o));
            __Vdly__top__DOT__u_miniRv__DOT__ifid_pc_o 
                = vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o;
        } else {
            __Vdly__top__DOT__u_miniRv__DOT__ifid_pc4_o 
                = (0xffffU & ((IData)(4U) + (IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o)));
            __Vdly__top__DOT__u_miniRv__DOT__ifid_pc_o 
                = vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o;
        }
        if ((0x4e1fU == (IData)(vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__cnt))) {
            __Vdly__led_en_o = ((0x80U & ((IData)(vlSelf->led_en_o) 
                                          << 7U)) | 
                                (0x7fU & ((IData)(vlSelf->led_en_o) 
                                          >> 1U)));
        }
        if (((((((((0x7fU == (IData)(vlSelf->led_en_o)) 
                   | (0xbfU == (IData)(vlSelf->led_en_o))) 
                  | (0xdfU == (IData)(vlSelf->led_en_o))) 
                 | (0xefU == (IData)(vlSelf->led_en_o))) 
                | (0xf7U == (IData)(vlSelf->led_en_o))) 
               | (0xfbU == (IData)(vlSelf->led_en_o))) 
              | (0xfdU == (IData)(vlSelf->led_en_o))) 
             | (0xfeU == (IData)(vlSelf->led_en_o)))) {
            if ((0x7fU == (IData)(vlSelf->led_en_o))) {
                vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(vlSelf->top__DOT__u_bridge__DOT__led_data 
                                            >> 0x1cU)] 
                                          >> 6U));
                vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(vlSelf->top__DOT__u_bridge__DOT__led_data 
                                            >> 0x1cU)] 
                                          >> 5U));
                vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(vlSelf->top__DOT__u_bridge__DOT__led_data 
                                            >> 0x1cU)] 
                                          >> 4U));
                vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(vlSelf->top__DOT__u_bridge__DOT__led_data 
                                            >> 0x1cU)] 
                                          >> 3U));
                vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(vlSelf->top__DOT__u_bridge__DOT__led_data 
                                            >> 0x1cU)] 
                                          >> 2U));
                vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(vlSelf->top__DOT__u_bridge__DOT__led_data 
                                            >> 0x1cU)] 
                                          >> 1U));
                vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                    [(vlSelf->top__DOT__u_bridge__DOT__led_data 
                                      >> 0x1cU)]);
            } else if ((0xbfU == (IData)(vlSelf->led_en_o))) {
                vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x18U))] 
                                          >> 6U));
                vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x18U))] 
                                          >> 5U));
                vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x18U))] 
                                          >> 4U));
                vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x18U))] 
                                          >> 3U));
                vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x18U))] 
                                          >> 2U));
                vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x18U))] 
                                          >> 1U));
                vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                    [(0xfU & (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                              >> 0x18U))]);
            } else if ((0xdfU == (IData)(vlSelf->led_en_o))) {
                vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x14U))] 
                                          >> 6U));
                vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x14U))] 
                                          >> 5U));
                vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x14U))] 
                                          >> 4U));
                vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x14U))] 
                                          >> 3U));
                vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x14U))] 
                                          >> 2U));
                vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x14U))] 
                                          >> 1U));
                vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                    [(0xfU & (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                              >> 0x14U))]);
            } else if ((0xefU == (IData)(vlSelf->led_en_o))) {
                vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x10U))] 
                                          >> 6U));
                vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x10U))] 
                                          >> 5U));
                vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x10U))] 
                                          >> 4U));
                vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x10U))] 
                                          >> 3U));
                vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x10U))] 
                                          >> 2U));
                vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0x10U))] 
                                          >> 1U));
                vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                    [(0xfU & (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                              >> 0x10U))]);
            } else if ((0xf7U == (IData)(vlSelf->led_en_o))) {
                vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0xcU))] 
                                          >> 6U));
                vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0xcU))] 
                                          >> 5U));
                vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0xcU))] 
                                          >> 4U));
                vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0xcU))] 
                                          >> 3U));
                vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0xcU))] 
                                          >> 2U));
                vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 0xcU))] 
                                          >> 1U));
                vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                    [(0xfU & (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                              >> 0xcU))]);
            } else if ((0xfbU == (IData)(vlSelf->led_en_o))) {
                vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 8U))] 
                                          >> 6U));
                vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 8U))] 
                                          >> 5U));
                vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 8U))] 
                                          >> 4U));
                vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 8U))] 
                                          >> 3U));
                vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 8U))] 
                                          >> 2U));
                vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 8U))] 
                                          >> 1U));
                vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                    [(0xfU & (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                              >> 8U))]);
            } else if ((0xfdU == (IData)(vlSelf->led_en_o))) {
                vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 4U))] 
                                          >> 6U));
                vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 4U))] 
                                          >> 5U));
                vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 4U))] 
                                          >> 4U));
                vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 4U))] 
                                          >> 3U));
                vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 4U))] 
                                          >> 2U));
                vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & 
                                            (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                             >> 4U))] 
                                          >> 1U));
                vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                    [(0xfU & (vlSelf->top__DOT__u_bridge__DOT__led_data 
                                              >> 4U))]);
            } else {
                vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & vlSelf->top__DOT__u_bridge__DOT__led_data)] 
                                          >> 6U));
                vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & vlSelf->top__DOT__u_bridge__DOT__led_data)] 
                                          >> 5U));
                vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & vlSelf->top__DOT__u_bridge__DOT__led_data)] 
                                          >> 4U));
                vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & vlSelf->top__DOT__u_bridge__DOT__led_data)] 
                                          >> 3U));
                vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & vlSelf->top__DOT__u_bridge__DOT__led_data)] 
                                          >> 2U));
                vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                          [(0xfU & vlSelf->top__DOT__u_bridge__DOT__led_data)] 
                                          >> 1U));
                vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                    [(0xfU & vlSelf->top__DOT__u_bridge__DOT__led_data)]);
            }
        } else {
            vlSelf->led_ca_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                      [0U] >> 6U));
            vlSelf->led_cb_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                      [0U] >> 5U));
            vlSelf->led_cc_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                      [0U] >> 4U));
            vlSelf->led_cd_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                      [0U] >> 3U));
            vlSelf->led_ce_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                      [0U] >> 2U));
            vlSelf->led_cf_o = (1U & (vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                      [0U] >> 1U));
            vlSelf->led_cg_o = (1U & vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num
                                [0U]);
        }
    }
    vlSelf->debug_wb_have_inst = ((~ (IData)(vlSelf->top__DOT__rst)) 
                                  & ((~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o)) 
                                     & (IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_inst_valid_o)));
    if (vlSelf->top__DOT__rst) {
        vlSelf->top__DOT__u_miniRv__DOT__trace_pc = 0U;
        __Vdly__top__DOT__u_miniRv__DOT__pc_pc_o = 0U;
        vlSelf->__Vdly__top__DOT__u_miniRv__DOT__ifid_inst_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__exmem_pc4_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o = 0U;
        vlSelf->top__DOT__u_bridge__DOT__led_data = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o = 0U;
    } else {
        vlSelf->top__DOT__u_miniRv__DOT__trace_pc = 
            ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o)
              ? 0U : (IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_pc_o));
        __Vdly__top__DOT__u_miniRv__DOT__pc_pc_o = 
            (0xffffU & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_pc_pause_o)
                         ? (IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o)
                         : ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_sel_i)
                             ? ((IData)((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                                 ? (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                                    + (0xffffU & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o))
                                 : ((IData)(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o) 
                                    + (0xffffU & vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o)))
                             : ((IData)(4U) + (IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o)))));
        vlSelf->__Vdly__top__DOT__u_miniRv__DOT__ifid_inst_o 
            = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_sel_i)
                ? 0U : ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_ifid_pause_o)
                         ? vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o
                         : vlSelf->top__DOT__u_inst_mem__DOT__mem
                        [(0x3fffU & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o) 
                                     >> 2U))]));
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_o 
            = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o)
                ? 0U : (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i));
        if (vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o) {
            vlSelf->top__DOT__u_miniRv__DOT__exmem_pc4_o = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o = 0U;
        } else {
            vlSelf->top__DOT__u_miniRv__DOT__exmem_pc4_o 
                = vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o;
            vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o 
                = vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o;
        }
        vlSelf->top__DOT__u_bridge__DOT__led_data = 
            (((IData)(vlSelf->top__DOT__bridge_wen_i) 
              & (0xf000U == (0xffffU & vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o)))
              ? vlSelf->top__DOT__bridge_wdata_i : vlSelf->top__DOT__u_bridge__DOT__led_data);
        if (vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o) {
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o = 0U;
        } else {
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o 
                = vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i;
            vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o)
                    ? vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data
                    : (IData)(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o));
            vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o 
                = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o)
                    ? vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o
                    : vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data);
        }
    }
    vlSelf->led_en_o = __Vdly__led_en_o;
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__cnt 
        = __Vdly__top__DOT__u_bridge__DOT__u_led_display__DOT__cnt;
    vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o = __Vdly__top__DOT__u_miniRv__DOT__pc_pc_o;
    vlSelf->top__DOT__u_miniRv__DOT__exmem_inst_valid_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & ((~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o)) 
                                                 & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_o)));
    vlSelf->debug_wb_pc = vlSelf->top__DOT__u_miniRv__DOT__trace_pc;
    if (vlSelf->top__DOT__rst) {
        vlSelf->top__DOT__u_miniRv__DOT__exmem_pc_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o = 0U;
    } else {
        vlSelf->top__DOT__u_miniRv__DOT__exmem_pc_o 
            = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o)
                ? 0U : (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_pc_o));
        if (vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o) {
            vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o = 0U;
        } else {
            vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o 
                = vlSelf->top__DOT__u_miniRv__DOT__ifid_pc4_o;
            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o 
                = vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i;
        }
    }
    vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub 
        = ((IData)(1U) + (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                          + (~ vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)));
    vlSelf->top__DOT__u_miniRv__DOT__ifid_pc4_o = __Vdly__top__DOT__u_miniRv__DOT__ifid_pc4_o;
    vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2 
        = (1U & ((0xbU == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                  ? ((((vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                        >> 0x1fU) & (~ (vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o 
                                        >> 0x1fU))) 
                      | (((vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                           & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o) 
                          & vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub) 
                         >> 0x1fU)) | (((~ (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                            >> 0x1fU)) 
                                        & (~ (vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o 
                                              >> 0x1fU))) 
                                       & (vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub 
                                          >> 0x1fU)))
                  : (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                     < vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)));
    vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & ((~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o)) 
                                                 & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_i)));
    vlSelf->top__DOT__u_miniRv__DOT__idex_pc_o = ((IData)(vlSelf->top__DOT__rst)
                                                   ? 0U
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o)
                                                    ? 0U
                                                    : (IData)(vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o)));
    vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o = __Vdly__top__DOT__u_miniRv__DOT__ifid_pc_o;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v1;
    // Body
    if (vlSelf->top__DOT__bridge_wen_i) {
        vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem[(0x3fffU 
                                                           & ((vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                                               - (IData)(0x4000U)) 
                                                              >> 2U))] 
            = vlSelf->top__DOT__bridge_wdata_i;
    }
    __Vdlyvset__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0 = 0U;
    __Vdlyvset__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v1 = 0U;
    if (vlSelf->top__DOT__u_miniRv__DOT__regfile_wen_i) {
        __Vdlyvval__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0 
            = vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i;
        __Vdlyvset__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0 
            = vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i;
    } else {
        __Vdlyvset__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0) {
        vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[__Vdlyvdim0__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0] 
            = __Vdlyvval__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v0;
    }
    if (__Vdlyvset__top__DOT__u_miniRv__DOT__u_regfile__DOT__regs__v1) {
        vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[0U] = 0U;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->top__DOT__bridge_wdata_i = ((IData)(vlSelf->top__DOT__rst)
                                         ? 0U : ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o)
                                                  ? 0U
                                                  : vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wdata_o));
    vlSelf->top__DOT__bridge_wen_i = ((~ (IData)(vlSelf->top__DOT__rst)) 
                                      & ((~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o)) 
                                         & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wen_o)));
    if (vlSelf->top__DOT__rst) {
        vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i = 0U;
    } else {
        vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
            = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o)
                ? 0U : vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_i);
        vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i 
            = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o)
                ? 0U : vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wdata_i);
    }
    vlSelf->top__DOT__u_miniRv__DOT__regfile_wen_i 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & ((~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o)) 
                                                 & (IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o)));
    if (vlSelf->top__DOT__rst) {
        vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wdata_o = 0U;
    } else {
        vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i 
            = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o)
                ? 0U : (IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o));
        vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wdata_o 
            = ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o)
                ? 0U : vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data);
    }
    vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wen_o 
        = (((~ (IData)(vlSelf->top__DOT__rst)) & (~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o))) 
           & (0x2023U == (0x707fU & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)));
    vlSelf->debug_wb_value = vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i;
    vlSelf->debug_wb_ena = vlSelf->top__DOT__u_miniRv__DOT__regfile_wen_i;
    vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & ((~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o)) 
                                                 & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o)));
    vlSelf->debug_wb_reg = vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i;
    vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o 
        = ((IData)(vlSelf->top__DOT__rst) ? 0U : ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o)
                                                   ? 0U
                                                   : (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o)));
    vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & ((~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o)) 
                                                 & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_i)));
    vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o 
        = ((IData)(vlSelf->top__DOT__rst) ? 0U : ((IData)(vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o)
                                                   ? 0U
                                                   : 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                      >> 7U))));
    vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o = vlSelf->__Vdly__top__DOT__u_miniRv__DOT__ifid_inst_o;
}

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h8eae1cbe_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_i 
        = ((1U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_o))
            ? ((IData)(vlSelf->top__DOT__rst) ? 0U : 
               ((8U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                 ? ((4U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                     ? ((2U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                         ? 0U : ((1U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                  ? 0U : (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2)))
                     : ((2U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                         ? ((1U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                             ? (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2)
                             : 0U) : 0U)) : ((4U & (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
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
                                                   : 0U)))))
            : ((3U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_o))
                ? ((IData)(vlSelf->top__DOT__rst) ? 0U
                    : ((8U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                        ? (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                           & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)
                        : ((9U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                            ? (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                               | vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)
                            : ((0xaU == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                ? (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                   ^ vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)
                                : 0U)))) : ((2U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_o))
                                             ? ((IData)(vlSelf->top__DOT__rst)
                                                 ? 0U
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                  ? 
                                                 (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                                  << 
                                                  (0x1fU 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                   ? 
                                                  (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o))
                                                    ? 
                                                   VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o, 
                                                                  (0x1fU 
                                                                   & vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o))
                                                    : 0U))))
                                             : 0U)));
    vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wdata_i 
        = ((2U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o))
            ? vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o
            : ((1U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o))
                ? (IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_pc4_o)
                : ((3U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o))
                    ? ((0xf070U == (0xffffU & vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o))
                        ? vlSelf->switch_i : vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem
                       [(0x3fffU & ((vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o 
                                     - (IData)(0x4000U)) 
                                    >> 2U))]) : 0U)));
    vlSelf->top__DOT__rst = (1U & (~ (IData)(vlSelf->rst_n)));
    if (vlSelf->top__DOT__rst) {
        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
    } else if ((0x40U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
        if ((0x20U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
            if ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            } else if ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                if ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 1U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 1U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                        } else {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                    }
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i 
                    = ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                        ? ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                            ? ((0U == (7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                             >> 0xcU)))
                                ? 1U : 0U) : 0U) : 0U);
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            } else {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        if ((0x4000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 1U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                        } else if ((0x2000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                        } else {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 1U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                        }
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                    }
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                }
            }
        } else {
            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
        }
    } else if ((0x20U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
        if ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
            if ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            } else if ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 2U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 3U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                    }
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((0x40000000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        if ((0x40000000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                            if ((0U == (7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                              >> 0xcU)))) {
                                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 2U;
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 2U;
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                            } else if ((5U == (7U & 
                                               (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                >> 0xcU)))) {
                                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 2U;
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 7U;
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 2U;
                            } else {
                                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 2U;
                        if ((0x4000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                            if ((0x2000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i 
                                    = ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                        ? 8U : 9U);
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 3U;
                            } else if ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 6U;
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 2U;
                            } else {
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0xaU;
                                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 3U;
                            }
                        } else if ((0x2000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i 
                                = ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                    ? 0xcU : 0xbU);
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                        } else if ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 5U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 2U;
                        } else {
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 1U;
                            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                        }
                    }
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                }
            } else {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            }
        } else {
            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
            if ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            } else if ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            } else if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((2U == (7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                      >> 0xcU)))) {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 1U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                    }
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                }
            } else {
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
        if ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
        } else if ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
            if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 2U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 1U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
                }
            } else {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            }
        } else if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
            if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 2U;
                if ((0x4000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((0x2000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i 
                            = ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                ? 8U : 9U);
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 3U;
                    } else if ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i 
                            = ((0x40000000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                ? 7U : 6U);
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 2U;
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0xaU;
                        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 3U;
                    }
                } else if ((0x2000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i 
                        = ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                            ? 0xcU : 0xbU);
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                } else if ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 5U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 2U;
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 1U;
                    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
                }
            } else {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            }
        } else {
            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
        }
    } else if ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
    } else if ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
    } else if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
        if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
            if ((2U == (7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                              >> 0xcU)))) {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 3U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 1U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 1U;
            } else {
                vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
            }
        } else {
            vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
        }
    } else {
        vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = 0U;
    }
    vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_i 
        = (1U & ((~ (IData)(vlSelf->top__DOT__rst)) 
                 & ((0x40U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                     ? (IData)(((0x20U == (0x30U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) 
                                & ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                    ? (IData)((7U == 
                                               (7U 
                                                & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                                    : (IData)((7U == 
                                               (0x7007U 
                                                & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))))))
                     : ((0x20U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                         ? (IData)(((0x10U == (0x18U 
                                               & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) 
                                    & ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                        ? ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                            >> 1U) 
                                           & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                        : ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                            >> 1U) 
                                           & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                              & ((~ 
                                                  (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                   >> 0x1eU)) 
                                                 | ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                     >> 0x1eU) 
                                                    & ((0U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                            >> 0xcU))) 
                                                       | (5U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                              >> 0xcU)))))))))))
                         : ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                             ? ((~ (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                    >> 3U)) & ((4U 
                                                & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                                ? (
                                                   (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                                : (
                                                   (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                             : (IData)((0x2003U == 
                                        (0x700fU & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))))))));
    vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_i 
        = (1U & ((~ (IData)(vlSelf->top__DOT__rst)) 
                 & ((0x40U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                     ? (IData)(((0x20U == (0x30U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) 
                                & ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                    ? (IData)((7U == 
                                               (7U 
                                                & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                                    : ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                        ? (IData)((3U 
                                                   == 
                                                   (0x7003U 
                                                    & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                                        : ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                            >> 1U) 
                                           & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                              & (IData)(
                                                        (0x2000U 
                                                         != 
                                                         (0x6000U 
                                                          & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))))))))
                     : ((0x20U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                         ? ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                             ? ((~ (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                    >> 3U)) & ((4U 
                                                & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                                ? (
                                                   (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                                : (
                                                   (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                    >> 1U) 
                                                   & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                      & ((~ 
                                                          (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                           >> 0x1eU)) 
                                                         | ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                             >> 0x1eU) 
                                                            & ((0U 
                                                                == 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                    >> 0xcU))) 
                                                               | (5U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                      >> 0xcU))))))))))
                             : (IData)((0x2003U == 
                                        (0x700fU & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))))
                         : ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                             ? ((~ (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                    >> 3U)) & ((4U 
                                                & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                                ? (
                                                   (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                                : (
                                                   (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                    >> 1U) 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                             : (IData)((0x2003U == 
                                        (0x700fU & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))))))));
    if (vlSelf->top__DOT__rst) {
        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
    } else if ((0x40U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
        if ((0x20U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
            if ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
            } else if ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                if ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 5U;
                            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 7U;
                        } else {
                            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
                    }
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
                }
            } else if ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        if ((0U == (7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                          >> 0xcU)))) {
                            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 1U;
                            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 7U;
                        } else {
                            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
                    }
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
                }
            } else if ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                if ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                    if ((0x4000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 3U;
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o 
                            = ((0x2000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                ? ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                    ? 6U : 4U) : ((0x1000U 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                                   ? 5U
                                                   : 3U));
                    } else if ((0x2000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)) {
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
                    } else {
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 3U;
                        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o 
                            = ((0x1000U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                ? 2U : 1U);
                    }
                } else {
                    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
                }
            } else {
                vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
                vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
            }
        } else {
            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = 0U;
            vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
        }
    } else {
        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o 
            = ((0x20U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                ? ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                    ? ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                        ? 0U : ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                 ? ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                     ? ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                         ? 4U : 0U)
                                     : 0U) : 0U)) : 
                   ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                     ? 0U : ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                              ? 0U : ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                       ? ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                           ? ((2U == 
                                               (7U 
                                                & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                   >> 0xcU)))
                                               ? 2U
                                               : 0U)
                                           : 0U) : 0U))))
                : ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                    ? ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                        ? 0U : ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                 ? ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                     ? ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                         ? 4U : 0U)
                                     : 0U) : ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                               ? ((1U 
                                                   & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                                   ? 1U
                                                   : 0U)
                                               : 0U)))
                    : ((8U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                        ? 0U : ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                 ? 0U : ((2U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                          ? ((1U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                              ? ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                      >> 0xcU)))
                                                  ? 1U
                                                  : 0U)
                                              : 0U)
                                          : 0U)))));
        vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = 0U;
    }
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o 
        = (1U & (((IData)(vlSelf->top__DOT__rst) | 
                  (0x33U != (0x7fU & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))) 
                 | ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                     >> 0x1eU) & ((~ (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                      >> 0x1eU)) | 
                                  ((0U != (7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                 >> 0xcU))) 
                                   & (5U != (7U & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                   >> 0xcU))))))));
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o 
        = (1U & ((~ (IData)(vlSelf->top__DOT__rst)) 
                 & ((~ (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                        >> 6U)) & ((0x20U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                    ? ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                        ? ((~ (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                               >> 3U)) 
                                           & ((4U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                               ? ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                   >> 1U) 
                                                  & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                               : ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                   >> 1U) 
                                                  & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                     & ((~ 
                                                         (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                          >> 0x1eU)) 
                                                        | ((vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                            >> 0x1eU) 
                                                           & ((0U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                   >> 0xcU))) 
                                                              | (5U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                     >> 0xcU))))))))))
                                        : (IData)((0x2003U 
                                                   == 
                                                   (0x700fU 
                                                    & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))))
                                    : ((0x10U & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)
                                        ? (IData)((3U 
                                                   == 
                                                   (0xfU 
                                                    & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                                        : (IData)((0x2003U 
                                                   == 
                                                   (0x700fU 
                                                    & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o))))))));
    vlSelf->top__DOT__u_miniRv__DOT__ex_data_forward_o 
        = ((1U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o))
            ? (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o)
            : vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_i);
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o 
        = ((IData)(vlSelf->top__DOT__rst) ? 0U : ((4U 
                                                   & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                  >> 0x1fU))) 
                                                      << 0x14U) 
                                                     | ((0xff000U 
                                                         & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o) 
                                                        | ((0x800U 
                                                            & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                               >> 9U)) 
                                                           | (0x7feU 
                                                              & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                 >> 0x14U)))))
                                                     : 
                                                    (0xfffff000U 
                                                     & vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                 >> 7U)))))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                              >> 7U)))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o))
                                                     ? 
                                                    (((- (IData)(
                                                                 (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                        >> 0x14U))
                                                     : 0U))));
    vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause 
        = (((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o) 
            & (3U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o))) 
           & (((IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o) 
               & ((0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                            >> 0xfU)) == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o))) 
              | ((~ (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o)) 
                 & ((0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                              >> 0x14U)) == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o)))));
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
        = ((0U == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                            >> 0xfU))) ? 0U : (((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o) 
                                                & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                       >> 0xfU))))
                                                ? vlSelf->top__DOT__u_miniRv__DOT__ex_data_forward_o
                                                : (
                                                   ((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o) 
                                                    & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                           >> 0xfU))))
                                                    ? vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wdata_i
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                         >> 0xfU)))
                                                     ? 0U
                                                     : 
                                                    (((0x1fU 
                                                       & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                          >> 0xfU)) 
                                                      == (IData)(vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i))
                                                      ? vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i
                                                      : 
                                                     vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                         >> 0xfU))])))));
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data 
        = ((0U == (0x1fU & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                            >> 0x14U))) ? 0U : (((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o) 
                                                 & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                        >> 0x14U))))
                                                 ? vlSelf->top__DOT__u_miniRv__DOT__ex_data_forward_o
                                                 : 
                                                (((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o) 
                                                  & ((IData)(vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                         >> 0x14U))))
                                                  ? vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wdata_i
                                                  : 
                                                 ((0U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                       >> 0x14U)))
                                                   ? 0U
                                                   : 
                                                  (((0x1fU 
                                                     & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i))
                                                    ? vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i
                                                    : 
                                                   vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o 
                                                       >> 0x14U))])))));
    vlSelf->top__DOT__u_miniRv__DOT__bubble_pc_pause_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause));
    vlSelf->top__DOT__u_miniRv__DOT__bubble_ifid_pause_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause));
    vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause));
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub 
        = ((IData)(1U) + (vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                          + (~ vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data)));
    __Vtableidx1 = (((vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data 
                      == vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data) 
                     << 5U) | ((0x10U & ((((3U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o)) 
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
                                              < vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data)) 
                                         << 4U)) | 
                               (((IData)(vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o) 
                                 << 1U) | (IData)(vlSelf->top__DOT__rst))));
    vlSelf->top__DOT__u_miniRv__DOT__pc_sel_i = Vtop__ConstPool__TABLE_h8eae1cbe_0
        [__Vtableidx1];
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__rst) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__rst))))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__top__DOT__rst) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__rst))))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__rst 
        = vlSelf->__VinpClk__TOP__top__DOT__rst;
    vlSelf->__VinpClk__TOP__top__DOT__rst = vlSelf->top__DOT__rst;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__rst ^ vlSelf->__Vchglast__TOP__top__DOT__rst));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__rst ^ vlSelf->__Vchglast__TOP__top__DOT__rst))) VL_DBG_MSGF("        CHANGE: mycpu/top.v:41: top.rst\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__rst = vlSelf->top__DOT__rst;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->switch_i & 0xff000000U))) {
        Verilated::overWidthError("switch_i");}
}
#endif  // VL_DEBUG
