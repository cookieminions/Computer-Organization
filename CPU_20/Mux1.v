`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:10:15 11/23/2016 
// Design Name: 
// Module Name:    Mux1 
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
module Mux1
	#(parameter width = 32)
	(input [width-1:0] A1,
	 input [width-1:0] A2,
	 input Sel,
	 output [width-1:0] Out
    );
	 
	 assign Out = Sel==0?A1:A2;


endmodule
