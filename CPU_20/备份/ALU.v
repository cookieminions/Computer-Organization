`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:31 11/23/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input [31:0] A1,
    input [31:0] A2,
    input [3:0] ALUCtr,
	 input [31:0] Instr,
	 output movz,
    output [31:0] ALUResult
    );
	 
	 reg [31:0] out;
	 
	 integer i;
	 integer temp;
	 
	 assign movz = (A2==0)?1:0;
	 
	 always@(A1 or A2 or ALUCtr or Instr)begin
		case(ALUCtr)
			4'b0000:	out = A1+A2;
			4'b0001:	out = A1-A2;
			4'b0010:	out = A1&A2;
			4'b0011:	out = A1|A2;
			4'b0100:	out = A1^A2;			
			4'b0101:	begin
						out = (A2<<Instr[10:6]);
						end
			4'b0110:	begin
						out = (A2>>Instr[10:6]);
						end
			4'b0111:	begin
						if(A2==0)	out = A1;
						end
			4'b1000:	begin
						
						end
			default:	out = 0;
		endcase
	 end
	 
	 assign ALUResult = out;

endmodule