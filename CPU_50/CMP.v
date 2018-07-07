`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:29:34 11/23/2016 
// Design Name: 
// Module Name:    CMP 
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
module CMP(
    input [31:0] A1,
	 input [31:0] A2,
	 output equal,
	 output bgez,
	 output bgtz,
	 output blez,
	 output bltz
	 );
	 
	 assign equal = (A1==A2)?1:0;
	 assign bgez = (A1[31]==0)?1:0;
	 assign bgtz = ((A1[31]==0)&&(A1!=0))?1:0;
	 assign blez = ((A1[31]==1)||(A1==0))?1:0;
	 assign bltz = (A1[31]==1)?1:0;

endmodule
