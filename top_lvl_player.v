`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:06:30 02/28/2019 
// Design Name: 
// Module Name:    top_lvl_player 
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
module top_lvl_player(
    //inputs
    clk, btnP, btnS,
    //outputs
    seg, an, dac_mclk, dac_lrclk, dac_sclk, dac_din
    );

    input               btnP; //pause button
    input               btnS; //stop button
    
    output reg [7:0] seg; //seven segment display
    output reg [3:0] an;  //anode count for each digit
    output wire dac_mclk;
    output wire dac_lrclk;
    output wire dac_sclk;
    output wire dac_din;

    input               clk; //master clock

    wire clk_blink, clk_1hz, clk_master; //blink clock, 1hz clock, and display clock
    wire curr_pause = 0;
    wire pause_state, stop_state;

    wire	[3:0] min1_cnt;
    wire	[3:0] min0_cnt;
    wire	[3:0] sec1_cnt;
    wire	[3:0] sec0_cnt;
    
    wire	[7:0] min1_seven_seg;
    wire	[7:0] min0_seven_seg;
    wire	[7:0] sec1_seven_seg;
    wire	[7:0] sec0_seven_seg;
    
    wire 	[7:0] blank_seg;

    reg		[2:0] cnt = 2'b00;

    // Debouncers for the buttons
    debouncer btnP_ (
        .i_btn(btnP),
        .clk(clk),
        .o_btn(pause_state)
    );
    
    debouncer btnS_ (
        .i_btn(btnS),
        .clk(clk),
        .o_btn(stop_state)
    );

    //Clock handler
    clock_divider clock_ (
        .clk(clk),
        .pse(pause_state)
        .rst(stop_state),
        .o_dac_lrck(dac_lrclk),
        .o_dac_mclk(dac_mclk),
        .o_ss_mclk(clk_master),
        .o_ss_1hz(clk_1hz),
        .o_ss_bclk(clk_blink)
	);

    // Clock counter
    counter counter_ (
        .i_clk(clk),
        .i_clk_ctr(clk_1hz),
        .stop(stop_state), 
        .pause(pause_state), 
        .min1(min1_cnt), 
        .min0(min0_cnt), 
        .sec1(sec1_cnt), 
        .sec0(sec0_cnt),
        .currpause(curr_pause)
    );

    //Seven segment displays
    seven_segment min1 (
        .digit(min1_cnt),
        .seven_seg(min1_seven_seg)
    );
    
    seven_segment min0 (
        .digit(min0_cnt),
        .seven_seg(min0_seven_seg)
    );
    
    seven_segment sec1 (
        .digit(sec1_cnt),
        .seven_seg(sec1_seven_seg)
    );
    
    seven_segment sec0 (
        .digit(sec0_cnt),
        .seven_seg(sec0_seven_seg)
    );
    
    seven_segment blank (
        .digit(4'b1111),
        .seven_seg(blank_seg)
    );
    
    always @ (posedge clk_master) begin
        if (curr_pause) begin
            case (cnt)
                0: begin
                    an <= 4'b0111;
                    if (clk_blink)
                        seg <= min1_seven_seg;
                    else
                        seg <= blank_seg;
                end
                1: begin
                    an <= 4'b1011;
                    if (clk_blink)
                        seg <= min0_seven_seg;
                    else
                        seg <= blank_seg;
                end
                2: begin
                    an <= 4'b1101;
                    if (clk_blink)
                        seg <= sec1_seven_seg;
                    else
                        seg <= blank_seg;
                default: begin
                    an <= 4'b1110;
                    if (clk_blink)
                        seg <= sec0_seven_seg;
                    else
                        seg <= blank_seg;
                end
            endcase
            cnt <= cnt + 1;
        end
        else begin
            case (cnt)
                0:	begin
                    an <= 4'b0111;
                    seg <= min1_seven_seg;                        
                end
                1:	begin
                    an <= 4'b1011;
                    seg <= min0_seven_seg;                       
                end
                2:	begin
                    an <= 4'b1101;
                    seg <= sec1_seven_seg;                       
                end
                default:	begin
                    an <= 4'b1110;
                    seg <= sec0_seven_seg;                       
                end
                endcase
            cnt <= cnt + 1;
        end
    end

endmodule
