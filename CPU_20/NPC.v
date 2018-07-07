`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:11:04 11/23/2016 
// Design Name: 
// Module Name:    NPC 
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
module NPC(
	 input [31:0] PC4,
	 input [31:0] Instr, 
	 input [1:0] J_Sel,
	 input [1:0] Branch,
	 input Zero,
	 input bge,
	 output [31:0] nPC
    );
	 
	 wire [15:0] Imm16;
	 wire [25:0] index;
	 wire [31:0] PC;
	 reg [31:0] _npc;
	 
	 assign nPC = _npc;
	 assign Imm16 = Instr[15:0];
	 assign index = Instr[25:0];
	 assign PC = PC4 - 4;
	 
	 always@(Instr or J_Sel or Branch or Zero or bge)begin
		if(Branch==2'b01)	begin
			if(Zero)begin
				_npc = PC4 + {{14{Imm16[15]}},{Imm16},{2{1'b0}}};
			end
			else	begin
				_npc = PC4 + 4;
			end
		end
		else if(Branch==2'b10) begin
			if(!Zero)begin
				_npc = PC4 + {{14{Imm16[15]}},{Imm16},{2{1'b0}}};
			end
			else	begin
				_npc = PC4 + 4;
			end
		end
		if(Branch==2'b11)	begin
			if(bge)begin
				_npc = PC4 + {{14{Imm16[15]}},{Imm16},{2{1'b0}}};
			end
			else	begin
				_npc = PC4 + 4;
			end
		end
		else if((J_Sel==2'b01)||(J_Sel==2'b10))	_npc = {PC[31:28],index,2'b00}; 
	 end


endmodule
