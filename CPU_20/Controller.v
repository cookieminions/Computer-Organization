`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:02:30 11/23/2016 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
	 input [31:0] Instr,
	 input movz,
	 input bge,
    //input [5:0] opcode,
    //input [5:0] funct,
    output [1:0] RegDst,
    output ALUSrc,
    output [1:0] MemtoReg,
    output RegWrite,
    output MemWrite,
    output MemRead,
    output [1:0] ExtOp,
    output [1:0] Branch,
	 output [1:0] J_Sel,
	 output [1:0] PCSel,
    output [3:0] ALUCtr
    );
	 
	 wire [5:0] opcode;
	 wire [5:0] funct;
	 assign opcode = Instr[31:26];
	 assign funct = Instr[5:0];
	 
	 reg [2:0] _ALUOp;
	 reg _ALUSrc,_RegWrite,_MemWrite,_MemRead;
	 reg [1:0] _Branch;
	 reg [1:0] _ExtOp;
	 reg [1:0] _RegDst;
	 reg [1:0] _MemtoReg;
	 reg [1:0] _J_Sel;
	 reg [1:0] _PCSel;
	 reg [3:0] _ALUCtr;
	 
	 always @(opcode or bge)begin
		case(opcode)
			6'b000000:	begin		//R
							_RegDst = 2'b01;		
							_ALUSrc = 0;
							_MemtoReg = 2'b00;
							_Branch = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							//_PCSel = 2'b00;
							_ALUOp = 3'b010;
							end
			6'b001000:	begin		//addi
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 2'b00;
							_J_Sel = 2'b00;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							end
			6'b001001:	begin		//addiu
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 2'b00;
							_J_Sel = 2'b00;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							end
			6'b001101:	begin		//ori
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 2'b00;
							_J_Sel = 2'b00;
							_ExtOp = 2'b10;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b011;
							end
			6'b100011:	begin		//lw
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b01;
							_RegWrite = 1;
							_Branch = 2'b00;
							_J_Sel = 2'b00;
							_ExtOp = 2'b00;
							_MemRead = 1;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							end
			6'b101011:	begin		//sw	
							_ALUSrc = 1;
							_RegWrite = 0;
							_Branch = 2'b00;
							_J_Sel = 2'b00;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 1;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							end
			6'b001111:	begin		//lui
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 2'b00;
							_J_Sel = 2'b00;
							_ExtOp = 2'b01;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							end
			6'b000100:	begin		//beq	
							_ALUSrc = 0;
							_RegWrite = 0;
							_Branch = 2'b01;
							_J_Sel = 2'b00;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							end
			6'b000101:	begin		//bne
							_ALUSrc = 0;
							_RegWrite = 0;
							_Branch = 2'b10;
							_J_Sel = 2'b00;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							end
			6'b000001:	begin		//bgezal
							_RegDst = 2'b10;
							_ALUSrc = 0;
							_MemtoReg = 2'b10;
							if(bge)	_RegWrite = 1;
							else _RegWrite = 0;
							_Branch = 2'b11;
							_J_Sel = 2'b00;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							end
			6'b000011: 	begin		//jal
							_RegDst = 2'b10;
							_ALUSrc = 0;
							_MemtoReg = 2'b10;
							_RegWrite = 1;
							_Branch = 2'b00;
							_J_Sel = 2'b10;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							end
			6'b000010: 	begin		//J
							_ALUSrc = 0;
							_RegWrite = 0;
							_Branch = 2'b00;
							_J_Sel = 2'b01;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							end
			
			default:	  _RegWrite = 0;
		endcase
	 end
	 
	 always@(funct or _ALUOp or Instr or movz)begin
		case(_ALUOp)
			3'b000:	_ALUCtr = 4'b0000;
			3'b001:	_ALUCtr = 4'b0001;
			3'b011:	_ALUCtr = 4'b0011;
			3'b010:	begin
						if(funct==6'b100000)	begin		//add
							_ALUCtr = 4'b0000;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else if(funct==6'b100001)	begin		//addu
							_ALUCtr = 4'b0000;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else if(funct==6'b100010)	begin		//sub
							_ALUCtr = 4'b0001;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else if(funct==6'b100011)	begin		//subu
							_ALUCtr = 4'b0001;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else if(funct==6'b100110)	begin		//xor
							_ALUCtr = 4'b0100;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else if(funct==6'b100101)	begin		//or
							_ALUCtr = 4'b0011;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else if(funct==6'b100100)	begin		//and
							_ALUCtr = 4'b0010;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else if(funct==6'b001000)	begin		//jr
							_ALUCtr = 4'b0000;
							_J_Sel = 2'b11;
							_RegWrite = 0;
							_PCSel = 2'b10;
						end
						else if(funct==6'b000000)	begin		//sll nop
							_ALUCtr = 4'b0101;
							if(Instr!=0)	_RegWrite = 1;
							else	_RegWrite = 0;
							_J_Sel = 2'b00;
							_PCSel = 2'b00;
						end
						else if(funct==6'b000010)	begin		//srl
							_ALUCtr = 4'b0110;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else if(funct==6'b001010)	begin		//movz
							_ALUCtr = 4'b0111;
							_J_Sel = 2'b00;
							if(movz) begin
								_RegWrite = 1;
							end
							else begin
								_RegWrite = 0;
							end
							_PCSel = 2'b00;
						end
						else if(funct==6'b000010)	begin		//rotr
							_ALUCtr = 4'b1000;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
						end
						else _RegWrite = 0;
						end
		endcase
	 end
	 
	 assign RegDst = _RegDst;		
	 assign ALUSrc = _ALUSrc;
	 assign MemtoReg = _MemtoReg;
	 assign RegWrite = _RegWrite;
	 assign Branch = _Branch;
	 assign MemRead = _MemRead;
	 assign MemWrite = _MemWrite;
	 assign ExtOp = _ExtOp;
	 assign J_Sel = _J_Sel;
	 assign PCSel = _PCSel;
	 assign ALUCtr = _ALUCtr;

endmodule
