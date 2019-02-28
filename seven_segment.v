`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:31:30 02/14/2019 
// Design Name: 
// Module Name:    seven_segment 
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
module seven_segment(
		// input
		digit,
		// output
		seven_seg
    );
		
		input wire [3:0] digit;
		output wire [7:0] seven_seg;

		reg [7:0] temp_seg;
		
		always @ (*)
			begin
				case(digit)
					4'd0: temp_seg = 8'b11000000;
					4'd1: temp_seg = 8'b11111001;
					4'd2: temp_seg = 8'b10100100;
					4'd3: temp_seg = 8'b10110000;
					4'd4: temp_seg = 8'b10011001;
					4'd5: temp_seg = 8'b10010010;
					4'd6: temp_seg = 8'b10000010;
					4'd7: temp_seg = 8'b11111000;
					4'd8: temp_seg = 8'b10000000;
					4'd9: temp_seg = 8'b10010000;
					default: temp_seg = 8'b11111111;
				endcase
			end
			assign seven_seg = temp_seg;
endmodule
