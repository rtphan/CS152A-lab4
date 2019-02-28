`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:36:26 02/14/2019 
// Design Name: 
// Module Name:    clock 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module clock_divider(
	// outputs
	o_dac_lrck,		// 32000 hz
	o_dac_mclk,		// 8192000 hz (32000 * 256)
	o_ss_mclk,
	o_ss_1hz,
	o_ss_bclk,
	// inputs
	pse,
	clk,
    rst
);

localparam MCLK_FREQ = 100000000;
localparam DAC_LRCK_FREQ = 32000;
localparam DAC_MCLK_FREQ = 256 * DAC_LRCK_FREQ;
localparam SS_MCLK_FREQ = 700;
localparam SS_1HZ_FREQ = 1;
localparam SS_BCLK_FREQ = 4;

output wire o_dac_lrck;
output wire o_dac_mclk;
output wire o_ss_mclk;
output wire o_ss_1hz;
output wire o_ss_bclk;

input pse;
input clk;
input rst;

reg dac_lrck = 1'b0;
reg dac_mclk = 1'b0;
reg ss_mclk = 1'b0;
reg ss_1hz = 1'b0;
reg ss_bclk = 1'b0;

reg [30:0] dac_lrck_ctr = 6'b000000;
reg [30:0] dac_mclk_ctr = 6'b000000;
reg [30:0] ss_mclk_ctr = 6'b000000;
reg [30:0] ss_1hz_ctr = 6'b000000;
reg [30:0] ss_bclk_ctr = 6'b000000;

reg [1:0] step_rst = 2'b00;
reg [1:0] step_pse = 2'b00;

always @(posedge clk) begin
   step_rst <= {rst, step_rst[1]};
	step_pse <= {pse, step_pse[1]};
    
	if (dac_lrck_ctr == MCLK_FREQ / (2 * DAC_LRCK_FREQ)  - 1) begin
		dac_lrck <= ~dac_lrck;
		dac_lrck_ctr <= 0;
	end
	else begin
		dac_lrck_ctr <= dac_lrck_ctr + 1;
	end

	if (dac_mclk_ctr == MCLK_FREQ / (2 * DAC_MCLK_FREQ) - 1) begin
		dac_mclk <= ~dac_mclk;
		dac_mclk_ctr <= 0;
	end
	else begin
		dac_mclk_ctr <= dac_mclk_ctr + 1;
	end
	
	if (ss_mclk_ctr == MCLK_FREQ / (2 * SS_MCLK_FREQ) - 1) begin
		ss_mclk <= ~ss_mclk;
		ss_mclk_ctr <= 0;
	end
	else begin
		ss_mclk_ctr <= ss_mclk_ctr + 1;
	end
	
	if (ss_1hz_ctr == MCLK_FREQ / (2 * SS_1HZ_FREQ) - 1) begin
		ss_1hz <= ~ss_1hz;
		ss_1hz_ctr <= 0;
	end
	else begin
		ss_1hz_ctr <= ss_1hz_ctr + 1;
	end

	if (ss_bclk_ctr == MCLK_FREQ / (2 * SS_BCLK_FREQ) - 1) begin
		ss_bclk <= ~ss_bclk;
		ss_bclk_ctr <= 0;
	end
	else begin
		ss_bclk_ctr <= ss_bclk_ctr + 1;
	end
end

assign o_dac_lrck = dac_lrck;
assign o_dac_mclk = dac_mclk;
assign o_ss_mclk = ss_mclk;
assign o_ss_1hz = ss_1hz;
assign o_ss_bclk = ss_bclk;

endmodule
