`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:41:50 11/27/2016 
// Design Name: 
// Module Name:    IFU 
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
module IFU(
    input [31:0] nextPC,
	 input Clk,
	 input Reset,
	 input PC_En,
	 output [31:0] Instr,
	 output [31:0] PC4
	 );
	 
	 reg [31:0] PC;
	 initial begin
		PC = 32'h00003000;
	 end
	 
	 always @(posedge Clk)begin
		if(Reset)begin
			PC = 32'h00003000;
		end
		else if(PC_En) begin
			PC <= nextPC;
		end
	 end
	 
	 assign PC4 = PC + 4;
	 
	 IM im(.Addr(PC[11:2]),.Instr(Instr));
	

endmodule
