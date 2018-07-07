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
	 input [31:0] Hi,
	 input [31:0] Lo,
    input [4:0] ALUCtr,
	 input [31:0] Instr,
    output [31:0] ALUResult
    );
	 
	 reg [31:0] out;
	 
	 integer i;
	 integer temp;
	 
	 always@(A1 or A2 or ALUCtr or Instr or Hi or Lo)begin
		case(ALUCtr)
			5'b00000:	out = A1+A2;
			5'b00001:	out = A1-A2;
			5'b00010:	out = A1&A2;
			5'b00011:	out = A1|A2;
			5'b00100:	out = A1^A2;			
			5'b00101:	begin
							out = (A2<<Instr[10:6]);
							end
			5'b00110:	begin
							out = (A2>>Instr[10:6]);
							end
			5'b00111:	out = ~(A1|A2);
			5'b01000:	begin	//sra
							out = {{{32{A2[31]}},A2}>>Instr[10:6]};
							//out = ($signed(A2)>>>Instr[10:6]);
							end
			5'b01001:	begin	//srav
							out = {{{32{A2[31]}},A2}>>A1[4:0]};
							//out = ($signed(A2)>>>A1[4:0]);
							end
			5'b01010:	begin	//srlv
							out = (A2>>A1[4:0]);
							end
			5'b01011:	begin	//sllv
							out = (A2<<A1[4:0]);
							end
			5'b01100:	begin
							if(A1[31]>A2[31])	out = 1;
							else if(A1[31]==A2[31])	out = (A1[30:0]<A2[30:0])?1:0;
							else out = 0;
							end
			5'b01101:	begin
							out = (A1<A2)?1:0;
							end
			5'b01110:	begin
							out = Hi;
							end
			5'b01111:	begin
							out = Lo;
							end
			default:	out = 0;
		endcase
	 end
	 
	 assign ALUResult = out;

endmodule