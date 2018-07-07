`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:28:37 11/23/2016 
// Design Name: 
// Module Name:    EXT 
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
module EXT(
    input [15:0] Imm16,
    input [1:0] ExtOp,
    output [31:0] Imm32
    );
	 
	 reg [31:0] result;
	 
	 always@(Imm16 or ExtOp)begin
		case(ExtOp)
			2'b00:	result = {{16{Imm16[15]}},{Imm16}};
			2'b01:	result = {{Imm16},{16{1'b0}}};
			2'b10:	result = {{16{1'b0}},{Imm16}};
			default: result = 0;
		endcase
	 end
	 
	 assign Imm32 = result;

endmodule
