`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:29:54 02/14/2019 
// Design Name: 
// Module Name:    counter 
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
module counter(i_clk, i_clk_ctr, stop, pause, min1, min0, sec1, sec0, currpause);
    input i_clk;
    input i_clk_ctr;
    input stop;
    input pause;

    output wire [3:0] min1;
    output wire [3:0] min0;
    output wire [3:0] sec1;
    output wire [3:0] sec0;
		
    output wire currpause;
    reg savedpause = 0;
    //reg savedstop = 0;
    reg thresholdpause = 0;

    reg [5:0] tempsecs = 0;
    reg [5:0] tempmins = 0;
	
    reg [1:0] step_pause = 2'b00;
    always @ (posedge i_clk) begin
        step_stop <= {stop, step_stop[1]};
        step_pause <= {pause, step_pause[1]};
        if (step_pause[1] && ~step_pause[0])
            savedpause <= ~savedpause;
        else if (step_stop[1] && ~step_stop[0]) begin
           tempsecs <= 0;
           tempmins <= 0;
           savedpause <= 1;
        end
        else
            savedpause <= savedpause;
    end
    
    reg [1:0] step_stop = 2'b00;
    reg [1:0] step_ctr = 2'b00;
    
    always @ (posedge i_clk) begin
        step_ctr <= {i_clk_ctr, step_ctr[1]};
        //else begin
            if (!savedpause && !thresholdpause) begin
                if (step_ctr[1] && ~step_ctr[0]) begin     
                    // Normal Increment
                    if (tempmins == 59 && tempsecs == 59)
                            thresholdpause <= 1;
                    else if (tempsecs == 59) begin
                            tempmins <= tempmins + 1;
                            tempsecs <= 0;
                    end
                    else
                        tempsecs <= tempsecs + 1;
                end
            end
        //end
    end
    
    assign currpause = savedpause | thresholdpause;
    assign min1 = tempmins / 10;
    assign min0 = tempmins % 10;
    assign sec1 = tempsecs / 10;
    assign sec0 = tempsecs % 10;

endmodule