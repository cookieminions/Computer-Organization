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
    //input [5:0] opcode,
    //input [5:0] funct,
    output [1:0] RegDst,
    output ALUSrc,
    output [1:0] MemtoReg,
    output RegWrite,
    output MemWrite,
    output MemRead,
    output [1:0] ExtOp,
    output [2:0] Branch,
	 output [2:0] J_Sel,
	 output [1:0] PCSel,
    output [4:0] ALUCtr,
	 output [3:0] BE,
	 output [2:0] Op,
	 output [2:0] MDOp,
	 output [1:0] MTOp,
	 output start
    );
	 
	 wire [5:0] opcode;
	 wire [5:0] funct;
	 assign opcode = Instr[31:26];
	 assign funct = Instr[5:0];
	 
	 reg [2:0] _ALUOp;
	 reg _ALUSrc,_RegWrite,_MemWrite,_MemRead;
	 reg [2:0] _Branch;
	 reg [1:0] _ExtOp;
	 reg [1:0] _RegDst;
	 reg [1:0] _MemtoReg;
	 reg [2:0] _J_Sel;
	 reg [1:0] _PCSel;
	 reg [4:0] _ALUCtr;
	 reg [3:0] _BE;
	 reg [2:0] _Op;
	 reg [2:0] _MDOp;
	 reg [1:0] _MTOp;
	 reg _start;
	 
	 always @(opcode or Instr)begin
		case(opcode)
			6'b000000:	begin		//R
							_RegDst = 2'b01;		
							_ALUSrc = 0;
							//_MemtoReg = 2'b00;
							_Branch = 3'b000;
							_MemRead = 0;
							_MemWrite = 0;
							//_PCSel = 2'b00;
							_ALUOp = 3'b100;
							end
			6'b001000:	begin		//addi
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b001001:	begin		//addiu
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b001101:	begin		//ori
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b10;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b011;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b001100:	begin		//andi
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b10; //和ori一样无符号扩展
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b010;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b001110: 	begin		//xori
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b10;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b101;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b001010:	begin		//slti
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b110;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b001011:	begin		//sltiu
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b111;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b100011:	begin		//lw
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b01;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 1;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							_Op = 3'b000;
							end
			6'b100000:	begin		//lb
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b01;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 1;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							_Op = 3'b001;
							end
			6'b100100:	begin		//lbu
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b01;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 1;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							_Op = 3'b010;
							end
			6'b100001:	begin		//lh
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b01;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 1;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							_Op = 3'b011;
							end
			6'b100101:	begin		//lhu
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b01;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 1;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							_Op = 3'b100;
							end
			6'b101011:	begin		//sw	
							_ALUSrc = 1;
							_RegWrite = 0;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 1;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							_BE = 4'b1111;
							end
			6'b101000:	begin		//sb
							_ALUSrc = 1;
							_RegWrite = 0;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 1;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							case(Instr[1:0])
								2'b00:	_BE = 4'b0001;
								2'b01:	_BE = 4'b0010;
								2'b10:	_BE = 4'b0100;
								2'b11:	_BE = 4'b1000;
							endcase
							end
			6'b101001:	begin		//sh
							_ALUSrc = 1;
							_RegWrite = 0;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 1;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							if(Instr[1]==0)	_BE = 4'b0011;
							else if(Instr[1]==1)		_BE = 4'b1100;
							end
			6'b001111:	begin		//lui
							_RegDst = 2'b00;		
							_ALUSrc = 1;
							_MemtoReg = 2'b00;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b000;
							_ExtOp = 2'b01;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b00;
							_ALUOp = 3'b000;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b000100:	begin		//beq	
							_ALUSrc = 0;
							_RegWrite = 0;
							_Branch = 3'b001;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b000101:	begin		//bne
							_ALUSrc = 0;
							_RegWrite = 0;
							_Branch = 3'b010;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b000001:	begin		//bgez	bltz
							_ALUSrc = 0;
							_RegWrite = 0;
							if(Instr[20:16]==5'b00001)	_Branch = 3'b011;	//bgez
							else if(Instr[20:16]==5'b00000)	_Branch = 3'b100;	//bltz
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b000111:	begin		//bgtz
							_ALUSrc = 0;
							_RegWrite = 0;
							_Branch = 3'b101;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b000110:	begin		//blez
							_ALUSrc = 0;
							_RegWrite = 0;
							_Branch = 3'b110;
							_J_Sel = 3'b000;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b000011: 	begin		//jal
							_RegDst = 2'b10;
							_ALUSrc = 0;
							_MemtoReg = 2'b10;
							_RegWrite = 1;
							_Branch = 3'b000;
							_J_Sel = 3'b010;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			6'b000010: 	begin		//J
							_ALUSrc = 0;
							_RegWrite = 0;
							_Branch = 3'b000;
							_J_Sel = 3'b001;
							_ExtOp = 2'b00;
							_MemRead = 0;
							_MemWrite = 0;
							_PCSel = 2'b01;
							_ALUOp = 3'b001;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
							end
			
			default:	  _RegWrite = 0;
		endcase
	 end
	 
	 always@(funct or _ALUOp or Instr)begin
		case(_ALUOp)
			3'b000:	_ALUCtr = 5'b00000;
			3'b001:	_ALUCtr = 5'b00001;
			3'b010:	_ALUCtr = 5'b00010;
			3'b011:	_ALUCtr = 5'b00011;
			3'b101:	_ALUCtr = 5'b00100;
			3'b110:	_ALUCtr = 5'b01100;
			3'b111:	_ALUCtr = 5'b01101;
			3'b100:	begin
						if(funct==6'b100000)	begin		//add
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b100001)	begin		//addu
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b100010)	begin		//sub
							_ALUCtr = 5'b00001;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b100011)	begin		//subu
							_ALUCtr = 5'b00001;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b100110)	begin		//xor
							_ALUCtr = 5'b00100;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b100101)	begin		//or
							_ALUCtr = 5'b00011;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b100100)	begin		//and
							_ALUCtr = 5'b00010;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b100111)	begin		//nor
							_ALUCtr = 5'b00111;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b001000)	begin		//jr
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b011;
							_RegWrite = 0;
							_PCSel = 2'b10;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b001001)	begin		//jalr
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b100;
							_RegWrite = 1;
							_PCSel = 2'b10;
							_MemtoReg = 2'b10;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b000000)	begin		//sll nop
							_ALUCtr = 5'b00101;
							if(Instr!=0)	_RegWrite = 1;
							else	_RegWrite = 0;
							_J_Sel = 3'b000;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b000010)	begin		//srl
							_ALUCtr = 5'b00110;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b000011)	begin		//sra
							_ALUCtr = 5'b01000;
							_J_Sel = 2'b00;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b000111)	begin		//srav
							_ALUCtr = 5'b01001;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b000110)	begin		//srlv
							_ALUCtr = 5'b01010;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b000100)	begin		//sllv
							_ALUCtr = 5'b01011;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b101010)	begin		//slt
							_ALUCtr = 5'b01100;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b101011)	begin		//sltu
							_ALUCtr = 5'b01101;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b011000)	begin		//mult
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b000;
							_RegWrite = 0;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b001;
							_MTOp = 2'b00;
							_start = 1;
						end
						else if(funct==6'b011001)	begin		//multu
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b000;
							_RegWrite = 0;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b010;
							_MTOp = 2'b00;
							_start = 1;
						end
						else if(funct==6'b011010)	begin		//div
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b000;
							_RegWrite = 0;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b011;
							_MTOp = 2'b00;
							_start = 1;
						end
						else if(funct==6'b011011)	begin		//divu
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b000;
							_RegWrite = 0;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b100;
							_MTOp = 2'b00;
							_start = 1;
						end
						else if(funct==6'b010000)	begin		//mfhi
							_ALUCtr = 5'b01110;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b010010)	begin		//mflo
							_ALUCtr = 5'b01111;
							_J_Sel = 3'b000;
							_RegWrite = 1;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b00;
							_start = 0;
						end
						else if(funct==6'b010001)	begin		//mthi
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b000;
							_RegWrite = 0;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b01;
							_start = 0;
						end
						else if(funct==6'b010011)	begin		//mtlo
							_ALUCtr = 5'b00000;
							_J_Sel = 3'b000;
							_RegWrite = 0;
							_PCSel = 2'b00;
							_MemtoReg = 2'b00;
							_MDOp = 3'b000;
							_MTOp = 2'b10;
							_start = 0;
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
	 assign BE = _BE;
	 assign Op = _Op;
	 assign MDOp = _MDOp;
	 assign MTOp = _MTOp;
	 assign start = _start;

endmodule
