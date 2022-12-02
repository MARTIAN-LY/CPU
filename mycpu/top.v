`include "defines.vh"

module top (
    input  wire         clk,
    input  wire         rst_n,

    // 数码管
    output wire[7:0]    led_en_o,
    output wire         led_ca_o,
    output wire         led_cb_o,
    output wire         led_cc_o,
    output wire         led_cd_o,
    output wire         led_ce_o,
    output wire         led_cf_o,
    output wire         led_cg_o,
    output wire         led_dp_o,

    // led 灯
    output wire[23:0]   light_o,

    // 拨码开关
    input  wire[23:0]   switch_i,

    output          debug_wb_have_inst,   // WB阶段是否有指令 (对单周期CPU，此flag恒为1)
    output [31:0]   debug_wb_pc,          // WB阶段的PC (若wb_have_inst=0，此项可为任意值)
    output          debug_wb_ena,         // WB阶段的寄存器写使能 (若wb_have_inst=0，此项可为任意值)
    output [4:0]    debug_wb_reg,         // WB阶段写入的寄存器号 (若wb_ena或wb_have_inst=0，此项可为任意值)
    output [31:0]   debug_wb_value        // WB阶段写入寄存器的值 (若wb_ena或wb_have_inst=0，此项可为任意值)
);




wire[`WordBus]      cpu_inst_i;
wire[`WordBus]      cpu_rdata_i;
wire[`MemAddrBus]   im_addr_i;
wire[15:0]          bridge_addr_i;
wire                bridge_wen_i;
wire[`WordBus]      bridge_wdata_i;

wire  rst = ~rst_n;

miniRV u_miniRv(
    .clk(clk),
    .rst(rst),
    .inst_i(cpu_inst_i),
    .mem_rdata_i(cpu_rdata_i),

    .inst_addr_o(im_addr_i),
    .mem_addr_o(bridge_addr_i),
    .mem_wen_o(bridge_wen_i),
    .mem_wdata_o(bridge_wdata_i),


    //trace
    .debug_wb_have_inst(debug_wb_have_inst),
    .debug_wb_pc(debug_wb_pc),
    .debug_wb_reg(debug_wb_reg),
    .debug_wb_value(debug_wb_value),
    .debug_wb_ena(debug_wb_ena)
);

inst_mem u_inst_mem(
    .a(im_addr_i),
    .spo(cpu_inst_i)
);

bridge u_bridge(
    .clk(clk),
    .rst(rst),
    .wen_i(bridge_wen_i),
    .addr_i(bridge_addr_i),
    .wdata_i(bridge_wdata_i),
    .data_o(cpu_rdata_i),

    .led_en_o(led_en_o),
    .led_ca_o(led_ca_o),
    .led_cb_o(led_cb_o),
    .led_cc_o(led_cc_o),
    .led_cd_o(led_cd_o),
    .led_ce_o(led_ce_o),
    .led_cf_o(led_cf_o),
    .led_cg_o(led_cg_o),
    .led_dp_o(led_dp_o),
    .light_o(light_o),
    .switch_i(switch_i)
);

endmodule //top