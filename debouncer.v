`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:26:58 02/21/2019 
// Design Name: 
// Module Name:    debouncer 
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
module debouncer(
		// output
		o_btn,
		// input
		i_btn,
		clk
    );

	output wire o_btn;
	input i_btn, clk;
	
	reg btn = 1'b0;
	reg clk_slow;
	reg [16:0] ctr = 17'b000000000000000000;
	wire [17:0] ctr_inc;
	
	assign ctr_inc = ctr + 1;
	
	always @(posedge clk) begin
		ctr <= ctr_inc[16:0];
		clk_slow <= ctr_inc[17];
		if (clk_slow)
			btn <= i_btn;
	end
	
	assign o_btn = btn;

endmodule
