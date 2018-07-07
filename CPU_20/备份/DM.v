`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:15 11/23/2016 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input Clk,
	 input Reset,
    input MemWrite,
    input MemRead,
	 input [31:0] Addr,
    input [31:0] Din,
    output [31:0] Dout
    );
	 
	 reg [31:0] _dm[1023:0];
	 integer i;
	 
	 assign Dout = _dm[Addr[11:2]];
	 
	 initial begin
		for(i=0;i<1024;i=i+1)begin
			_dm[i] = 0;
		end
	 end
	 
	 always@(posedge Clk)begin
		if(Reset)begin
			for(i=0;i<1024;i=i+1)begin
				_dm[i] = 0;
			end
		end
		else if(MemWrite)begin
			$display("*%h <= %h",Addr,Din);
			_dm[Addr[11:2]] <= Din;
		end
	 end
	 
endmodule
