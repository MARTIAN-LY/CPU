// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*0:0*/, 64> Vtop__ConstPool__TABLE_h8eae1cbe_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    // Body
    vlSelf->debug_wb_pc = vlSelf->top__DOT__u_miniRv__DOT__trace_pc;
    vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub 
        = ((IData)(1U) + (vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o 
                          + (~ vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o)));
    vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o = 0U;
    vlSelf->debug_wb_ena = vlSelf->top__DOT__u_miniRv__DOT__regfile_wen_i;
    vlSelf->debug_wb_reg = vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i;
    vlSelf->debug_wb_value = vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i;
    vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o = 0U;
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
    vlSelf->top__DOT__u_miniRv__DOT__bubble_pc_pause_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause));
    vlSelf->top__DOT__u_miniRv__DOT__bubble_ifid_pause_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause));
    vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o 
        = ((~ (IData)(vlSelf->top__DOT__rst)) & (IData)(vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause));
    vlSelf->top__DOT__u_miniRv__DOT__ex_data_forward_o 
        = ((1U == (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o))
            ? (IData)(vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o)
            : vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_i);
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

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__top__DOT__rst 
        = vlSelf->__VinpClk__TOP__top__DOT__rst;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->led_en_o = VL_RAND_RESET_I(8);
    vlSelf->led_ca_o = VL_RAND_RESET_I(1);
    vlSelf->led_cb_o = VL_RAND_RESET_I(1);
    vlSelf->led_cc_o = VL_RAND_RESET_I(1);
    vlSelf->led_cd_o = VL_RAND_RESET_I(1);
    vlSelf->led_ce_o = VL_RAND_RESET_I(1);
    vlSelf->led_cf_o = VL_RAND_RESET_I(1);
    vlSelf->led_cg_o = VL_RAND_RESET_I(1);
    vlSelf->led_dp_o = VL_RAND_RESET_I(1);
    vlSelf->light_o = VL_RAND_RESET_I(24);
    vlSelf->switch_i = VL_RAND_RESET_I(24);
    vlSelf->debug_wb_have_inst = VL_RAND_RESET_I(1);
    vlSelf->debug_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->debug_wb_ena = VL_RAND_RESET_I(1);
    vlSelf->debug_wb_reg = VL_RAND_RESET_I(5);
    vlSelf->debug_wb_value = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__bridge_wen_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__bridge_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__pc_sel_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__pc_pc_o = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_miniRv__DOT__ifid_pc_o = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_miniRv__DOT__ifid_pc4_o = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_miniRv__DOT__ifid_inst_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_i = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_i = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_i = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_miniRv__DOT__idex_op1_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__idex_op2_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_sel_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_miniRv__DOT__idex_alu_op_o = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_miniRv__DOT__idex_reg_wen_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__idex_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_miniRv__DOT__idex_wb_sel_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_miniRv__DOT__idex_pc_o = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_miniRv__DOT__idex_pc4_o = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wen_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__idex_mem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__ex_data_forward_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__exmem_inst_valid_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_wen_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__exmem_reg_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_miniRv__DOT__exmem_alu_result_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__exmem_wb_sel_o = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_miniRv__DOT__exmem_pc4_o = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_miniRv__DOT__exmem_pc_o = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wen_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_waddr_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_miniRv__DOT__memwb_reg_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__trace_pc = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_miniRv__DOT__regfile_wen_i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__regfile_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__regfile_waddr_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_miniRv__DOT__regfile_raddr1_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_miniRv__DOT__regfile_raddr2_i = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_miniRv__DOT__alu_num1_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__alu_num2_i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__alu_sel_i = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_miniRv__DOT__alu_op_i = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_miniRv__DOT__bubble_pc_pause_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__bubble_ifid_pause_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__bubble_idex_pause_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__bubble_exmem_pause_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__bubble_memwb_pause_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__idex_inst_valid_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_miniRv__DOT__u_regfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_inst_mem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_inst_mem__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_inst_mem__DOT__mem_file = 0;
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->top__DOT__u_inst_mem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->top__DOT__u_inst_mem__DOT__mem_rd[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__u_bridge__DOT__led_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_file = 0;
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<1048576; ++__Vi0) {
        vlSelf->top__DOT__u_bridge__DOT__u_dram__DOT__mem_rd[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__led_num[__Vi0] = VL_RAND_RESET_I(7);
    }
    vlSelf->top__DOT__u_bridge__DOT__u_led_display__DOT__cnt = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__top__DOT__u_miniRv__DOT__ifid_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__VinpClk__TOP__top__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__top__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
