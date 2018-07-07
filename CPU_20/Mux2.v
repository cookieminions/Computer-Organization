`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:44:15 11/23/2016 
// Design Name: 
// Module Name:    Mux2 
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
module Mux2
	#(parameter width = 32)
	(input [width-1:0] A1,
	 input [width-1:0] A2,
	 input [width-1:0] A3,
	 input [1:0] Sel,
	 output [width-1:0] Out
    );
	 
	 reg [width-1:0] _out;

	 assign Out = _out;
	 
	 always @(A1 or A2 or A3 or Sel)begin
		case(Sel)
			2'b00:	_out = A1;
			2'b01:	_out = A2;
			2'b10:	_out = A3;
		endcase
	 end

endmodule
