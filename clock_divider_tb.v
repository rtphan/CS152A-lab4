`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:21:45 02/28/2019
// Design Name:   clock_divider
// Module Name:   /home/ise/CS152A-lab4/clock_divider_tb.v
// Project Name:  CS152A_lab4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: clock_divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module clock_divider_tb;

	// Inputs
	reg pse;
	reg clk;
	reg rst;

	// Outputs
	wire o_dac_lrck;
	wire o_dac_mclk;
	wire o_ss_mclk;
	wire o_ss_1hz;
	wire o_ss_bclk;

	// Instantiate the Unit Under Test (UUT)
	clock_divider uut (
		.o_dac_lrck(o_dac_lrck), 
		.o_dac_mclk(o_dac_mclk), 
		.o_ss_mclk(o_ss_mclk), 
		.o_ss_1hz(o_ss_1hz), 
		.o_ss_bclk(o_ss_bclk), 
		.pse(pse), 
		.clk(clk), 
		.rst(rst)
	);

	initial begin
		// Initialize Inputs
		pse = 0;
		clk = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		
		#2000000 $finish;
	end
	
	always #5 clk = ~clk;
      
endmodule

