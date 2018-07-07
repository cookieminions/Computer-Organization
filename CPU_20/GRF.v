`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:06 11/23/2016 
// Design Name: 
// Module Name:    GRF 
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
module GRF(
    input Clk,
    input Reset,
    input [4:0] rs,
    input [4:0] rt,
    input [4:0] wr,
    input RegWrite,
    input [31:0] WData,
    output [31:0] RData1,
    output [31:0] RData2
    );
	 
	 reg [31:0] _reg[31:0];
	 integer i;
	 
	 initial begin
		for(i=0;i<32;i=i+1)begin
			_reg[i] = 0;
		end
	 end
	 
	 always@(posedge Clk)begin
		if(Reset)begin
			for(i=0;i<32;i=i+1)begin
				_reg[i] = 0;
			end
		end
		else if(RegWrite)begin
			$display("$%d <= %h", wr, WData);
			_reg[wr] <= wr==0?0:WData;
		end
	 end
	 
	 assign RData1 = ((RegWrite==1)&(rs==wr)&(wr!=0))?WData:_reg[rs];
	 assign RData2 = ((RegWrite==1)&(rt==wr)&(wr!=0))?WData:_reg[rt];

endmodule