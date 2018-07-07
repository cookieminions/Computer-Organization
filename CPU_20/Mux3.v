`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:34:22 11/29/2016 
// Design Name: 
// Module Name:    Mux3 
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
module Mux3
	#(parameter width = 32)
	(input [width-1:0] A1,
	 input [width-1:0] A2,
	 input [width-1:0] A3,
	 input [width-1:0] A4,
	 input [width-1:0] A5,
	 input [2:0] Sel,
	 output [width-1:0] Out
    );
	 
	 reg [width-1:0] _out;

	 assign Out = _out;
	 
	 always @(A1 or A2 or A3 or A4 or A5 or Sel)begin
		case(Sel)
			3'b000:	_out = A1;
			3'b001:	_out = A2;
			3'b010:	_out = A3;
			3'b011:	_out = A4;
			3'b100:	_out = A5;
		endcase
	 end

endmodule
