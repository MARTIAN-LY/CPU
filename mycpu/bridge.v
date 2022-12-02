`include "defines.vh"

module bridge (
    input  wire                 clk,
    input  wire                 rst,
    input  wire                 wen_i,
    input  wire[15:0]           addr_i,
    input  wire[`WordBus]       wdata_i,
    output wire[`WordBus]       data_o,

    // 数码管 
    output wire[7:0]            led_en_o,
    output wire                 led_ca_o,
    output wire                 led_cb_o,
    output wire                 led_cc_o,
    output wire                 led_cd_o,
    output wire                 led_ce_o,
    output wire                 led_cf_o,
    output wire                 led_cg_o,
    output wire                 led_dp_o,

    // led 灯
    output reg[23:0]            light_o,

    // 拨码开关
    input  wire[23:0]           switch_i
);


wire[15:0]      tmp_addr = addr_i - 16'h4000;
wire[`WordBus]  dram_data_o;

data_mem u_dram(
    .clk(clk),
    .a(tmp_addr[15:2]),
    .d(wdata_i),

    .we(wen_i),
    .spo(dram_data_o)
);

// 给 CPU 的数据来自 dram 或者 拨码开关
assign data_o = (addr_i == 16'hf070) ? {8'b0,switch_i} : dram_data_o;

// led 灯
always @(posedge clk or posedge rst) begin
    if(rst) begin
        light_o <= 24'b0;
    end else begin
        light_o <= switch_i;
    end
end

// 数码管
reg[`WordBus] led_data;

always @(posedge clk or posedge rst) begin
    if(rst) begin
        led_data <= 32'b0;
    end else if(wen_i && addr_i == 16'hf000) begin
        led_data <= wdata_i;
    end else begin
        led_data <= led_data;
    end
end

led_display u_led_display(
    .clk(clk),
    .rst(rst),
    .number(led_data),
    .led_en(led_en_o),
    .led_ca(led_ca_o),
    .led_cb(led_cb_o),
    .led_cc(led_cc_o),
    .led_cd(led_cd_o),
    .led_ce(led_ce_o),
    .led_cf(led_cf_o),
    .led_cg(led_cg_o),
    .led_dp(led_dp_o) 
);


endmodule //bridge