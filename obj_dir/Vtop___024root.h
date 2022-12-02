// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ top__DOT__rst;
        VL_IN8(rst_n,0,0);
        VL_OUT8(led_en_o,7,0);
        VL_OUT8(led_ca_o,0,0);
        VL_OUT8(led_cb_o,0,0);
        VL_OUT8(led_cc_o,0,0);
        VL_OUT8(led_cd_o,0,0);
        VL_OUT8(led_ce_o,0,0);
        VL_OUT8(led_cf_o,0,0);
        VL_OUT8(led_cg_o,0,0);
        VL_OUT8(led_dp_o,0,0);
        VL_OUT8(debug_wb_have_inst,0,0);
        VL_OUT8(debug_wb_ena,0,0);
        VL_OUT8(debug_wb_reg,4,0);
        CData/*0:0*/ top__DOT__bridge_wen_i;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__pc_sel_i;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__idex_inst_valid_i;
        CData/*1:0*/ top__DOT__u_miniRv__DOT__idex_alu_sel_i;
        CData/*3:0*/ top__DOT__u_miniRv__DOT__idex_alu_op_i;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__idex_reg_wen_i;
        CData/*1:0*/ top__DOT__u_miniRv__DOT__idex_wb_sel_i;
        CData/*1:0*/ top__DOT__u_miniRv__DOT__idex_alu_sel_o;
        CData/*3:0*/ top__DOT__u_miniRv__DOT__idex_alu_op_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__idex_reg_wen_o;
        CData/*4:0*/ top__DOT__u_miniRv__DOT__idex_reg_waddr_o;
        CData/*1:0*/ top__DOT__u_miniRv__DOT__idex_wb_sel_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__idex_mem_wen_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__exmem_inst_valid_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__exmem_reg_wen_o;
        CData/*4:0*/ top__DOT__u_miniRv__DOT__exmem_reg_waddr_o;
        CData/*1:0*/ top__DOT__u_miniRv__DOT__exmem_wb_sel_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__memwb_reg_wen_i;
        CData/*4:0*/ top__DOT__u_miniRv__DOT__memwb_reg_waddr_i;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__regfile_wen_i;
        CData/*4:0*/ top__DOT__u_miniRv__DOT__regfile_waddr_i;
        CData/*4:0*/ top__DOT__u_miniRv__DOT__regfile_raddr1_i;
        CData/*4:0*/ top__DOT__u_miniRv__DOT__regfile_raddr2_i;
        CData/*1:0*/ top__DOT__u_miniRv__DOT__alu_sel_i;
        CData/*5:0*/ top__DOT__u_miniRv__DOT__alu_op_i;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__bubble_pc_pause_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__bubble_ifid_pause_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__bubble_idex_pause_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__bubble_exmem_pause_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__bubble_memwb_pause_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__idex_inst_valid_o;
        CData/*2:0*/ top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_imm_sel_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op1_sel_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_op2_sel_o;
        CData/*2:0*/ top__DOT__u_miniRv__DOT__u_id__DOT__ctrl_br_sel_o;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num1_lt_num2;
        CData/*0:0*/ top__DOT__u_miniRv__DOT__u_bubble__DOT__lu_pause;
        CData/*0:0*/ __VinpClk__TOP__top__DOT__rst;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__top__DOT__rst;
        CData/*0:0*/ __Vchglast__TOP__top__DOT__rst;
        SData/*15:0*/ top__DOT__u_miniRv__DOT__pc_pc_o;
        SData/*15:0*/ top__DOT__u_miniRv__DOT__ifid_pc_o;
        SData/*15:0*/ top__DOT__u_miniRv__DOT__ifid_pc4_o;
        SData/*15:0*/ top__DOT__u_miniRv__DOT__idex_pc_o;
        SData/*15:0*/ top__DOT__u_miniRv__DOT__idex_pc4_o;
        SData/*15:0*/ top__DOT__u_miniRv__DOT__exmem_pc4_o;
        SData/*15:0*/ top__DOT__u_miniRv__DOT__exmem_pc_o;
        SData/*15:0*/ top__DOT__u_miniRv__DOT__trace_pc;
    };
    struct {
        SData/*15:0*/ top__DOT__u_bridge__DOT__u_led_display__DOT__cnt;
        VL_OUT(light_o,23,0);
        VL_IN(switch_i,23,0);
        VL_OUT(debug_wb_pc,31,0);
        VL_OUT(debug_wb_value,31,0);
        IData/*31:0*/ top__DOT__bridge_wdata_i;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__ifid_inst_o;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__idex_op1_o;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__idex_op2_o;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__idex_mem_wdata_o;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__ex_data_forward_o;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__exmem_alu_result_i;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__exmem_alu_result_o;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__memwb_reg_wdata_i;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__regfile_wdata_i;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__alu_num1_i;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__alu_num2_i;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__u_id__DOT__immgen_imm_o;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__u_id__DOT__reg1_data;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__u_id__DOT__reg2_data;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__u_id__DOT__u_branch__DOT__data_sub;
        IData/*31:0*/ top__DOT__u_miniRv__DOT__u_ex__DOT__u_alu__DOT__num_sub;
        IData/*31:0*/ top__DOT__u_inst_mem__DOT__i;
        IData/*31:0*/ top__DOT__u_inst_mem__DOT__j;
        IData/*31:0*/ top__DOT__u_inst_mem__DOT__mem_file;
        IData/*31:0*/ top__DOT__u_bridge__DOT__led_data;
        IData/*31:0*/ top__DOT__u_bridge__DOT__u_dram__DOT__i;
        IData/*31:0*/ top__DOT__u_bridge__DOT__u_dram__DOT__j;
        IData/*31:0*/ top__DOT__u_bridge__DOT__u_dram__DOT__mem_file;
        IData/*31:0*/ __Vdly__top__DOT__u_miniRv__DOT__ifid_inst_o;
        VlUnpacked<IData/*31:0*/, 32> top__DOT__u_miniRv__DOT__u_regfile__DOT__regs;
        VlUnpacked<IData/*31:0*/, 1048576> top__DOT__u_inst_mem__DOT__mem;
        VlUnpacked<IData/*31:0*/, 1048576> top__DOT__u_inst_mem__DOT__mem_rd;
        VlUnpacked<IData/*31:0*/, 1048576> top__DOT__u_bridge__DOT__u_dram__DOT__mem;
        VlUnpacked<IData/*31:0*/, 1048576> top__DOT__u_bridge__DOT__u_dram__DOT__mem_rd;
        VlUnpacked<CData/*6:0*/, 16> top__DOT__u_bridge__DOT__u_led_display__DOT__led_num;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
