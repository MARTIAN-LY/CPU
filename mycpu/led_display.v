module led_display(
input   wire        clk,
input   wire        rst,
input   wire[31:0]  number,
output  reg[7:0]    led_en,
output  reg         led_ca,
output  reg         led_cb,
output  reg         led_cc,
output  reg         led_cd,
output  reg         led_ce,
output  reg         led_cf,
output  reg         led_cg,
output  wire        led_dp 
);

reg[6:0] led_num[15:0];
initial begin
    led_num[0]  = 7'b0000001;
    led_num[1]  = 7'b1001111;
    led_num[2]  = 7'b0010010;
    led_num[3]  = 7'b0000110;
    led_num[4]  = 7'b1001100;
    led_num[5]  = 7'b0100100;
    led_num[6]  = 7'b0100000;
    led_num[7]  = 7'b0001111;
    led_num[8]  = 7'b0000000;
    led_num[9]  = 7'b0001100;
    led_num[10] = 7'b0001000;
    led_num[11] = 7'b1100000;
    led_num[12] = 7'b1110010;
    led_num[13] = 7'b1000010;
    led_num[14] = 7'b0110000;
    led_num[15] = 7'b0111000;
end


//控制数码管的刷新频率
reg     [15:0] cnt;
wire    [15:0] cnt_end = 19999;

always @ (posedge clk or posedge rst)begin
    if(rst)                     cnt <= 0;
    else if(cnt == cnt_end)     cnt <= 0;
    else                        cnt <= cnt + 1;
end

//小数点不亮
assign led_dp = 1;

always @ (posedge clk or posedge rst) begin
        if(rst) begin
            led_en <= 8'b1111_1110;
            {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ 0 ];
        end
        else begin
            if(cnt == cnt_end)
                led_en <= { led_en[0],led_en[7:1] };
            case (led_en)
                8'b0111_1111 :   {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ number[31:28] ];
                8'b1011_1111 :   {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ number[27:24] ];
                8'b1101_1111 :   {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ number[23:20] ];
                8'b1110_1111 :   {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ number[19:16] ];
                8'b1111_0111 :   {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ number[15:12] ];
                8'b1111_1011 :   {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ number[11:8] ];
                8'b1111_1101 :   {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ number[7:4] ];
                8'b1111_1110 :   {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ number[3:0] ];
                default:         {led_ca,led_cb,led_cc,led_cd,led_ce,led_cf,led_cg} <= led_num[ 0 ];
            endcase
        end
end

endmodule