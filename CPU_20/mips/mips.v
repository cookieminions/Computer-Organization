`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:02:54 11/23/2016 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk,
	 input reset
	 );
	 wire [31:0] nPC;
	 wire [31:0] PC4;
	 wire [31:0] Instr;
	 
	 wire [31:0] IR_D;
	 wire [31:0] PC4_D;
	 
	 wire Zero;
	 wire [31:0] IR_E;
	 wire [31:0] PC4_E;
	 wire [31:0] RS_E;
	 wire [31:0] RT_E;
	 wire [31:0] EXT_E;
	 
	 wire [31:0] IR_M;
	 wire [31:0] PC4_M;
	 wire [31:0] RT_M;
	 wire [31:0] AO_M;
	 
	 wire [31:0] IR_W;
	 wire [31:0] PC4_W;
	 wire [31:0] AO_W;
	 wire [31:0] DR_W;
	 
	 wire [31:0] M1Out;
	 wire [31:0] M2Out;
	 wire	[4:0] M3Out;
	 wire [31:0] M4Out;
	
	 wire [31:0] MFRSDout;
	 wire [31:0] MFRTDout;
	 wire [31:0] MFRSEout;
	 wire [31:0] MFRTEout;
	 wire [31:0] MFRTMout;
	 
	 wire [31:0] RData1;
	 wire [31:0] RData2;
	 wire [31:0] Imm32;
	 
	 wire [31:0] ALUResult;
	 wire [31:0] MemData;
	 
	 wire [3:0] ALUCtr;
	 wire [1:0] ExtOp;
	 wire [1:0] MemtoReg;
	 wire [1:0] RegDst;
	 wire [1:0] J_Sel;
	 wire [1:0] PCSel;
	 wire [1:0] Branch;
	 wire ALUSrc,RegWrite,MemWrite,MemRead;
	 
	 wire [2:0] FRSD;
	 wire [2:0] FRTD;
	 wire [2:0] FRSE;
	 wire [2:0] FRTE;
	 wire [1:0] FRTM;
	 wire stall;
	 wire PC_En;
	 wire IR_D_En;
	 wire IR_E_Clr;
	 
	 assign PC_En = !stall;
	 assign IR_D_En = !stall;
	 assign IR_E_Clr = stall;
	 
	 
	 Conflict_Manager conflict_manager(
			.IR_D(IR_D),
			.IR_E(IR_E),
			.IR_M(IR_M),
			.IR_W(IR_W),
			.FRSD(FRSD),
			.FRTD(FRTD),
			.FRSE(FRSE),
			.FRTE(FRTE),
			.FRTM(FRTM),
			.stall(stall)
			);
	 Mux3 MFRSD(
			.A1(RData1),
			.A2(AO_M),
			.A3(M4Out),
			.A4(PC4_E+4),
			.A5(PC4_M+4),
			.Sel(FRSD),
			.Out(MFRSDout)
			);		
	 Mux3 MFRTD(
			.A1(RData2),
			.A2(AO_M),
			.A3(M4Out),
			.A4(PC4_E+4),
			.A5(PC4_M+4),
			.Sel(FRTD),
			.Out(MFRTDout)
			);
	 Mux3 MFRSE(
			.A1(RS_E),
			.A2(AO_M),
			.A3(M4Out),
			.A4(PC4_M+4),
			.Sel(FRSE),
			.Out(MFRSEout)
			);
	 Mux3 MFRTE(
			.A1(RT_E),
			.A2(AO_M),
			.A3(M4Out),
			.A4(PC4_M+4),
			.Sel(FRTE),
			.Out(MFRTEout)
			);
	 Mux2 MFRTM(
			.A1(RT_M),
			.A2(M4Out),
			//.A3(),
			.Sel(FRTM),
			.Out(MFRTMout)
			);
	 
	 //IF
	 IFU ifu(
			.nextPC(M1Out),
			.Clk(clk),
			.Reset(reset),
			.PC_En(PC_En),
			.PC4(PC4),
			.Instr(Instr)
			);
	 //IF_ID
	 IF_ID if_id(
			.IM(Instr),
			.ADD4(PC4),
			.Clk(clk),
			.Reset(reset),
			.IR_D_En(IR_D_En),
			.IR_D(IR_D),
			.PC4_D(PC4_D)
			);
	 //ID
	 GRF grf(
			.Clk(clk),
			.Reset(reset),
			.rs(IR_D[25:21]),
			.rt(IR_D[20:16]),
			.wr(M3Out),
			.RegWrite(RegWrite),
			.WData(M4Out),
			.RData1(RData1),
			.RData2(RData2)
			);
	 EXT ext(
			.Imm16(IR_D[15:0]),
			.ExtOp(ExtOp),
			.Imm32(Imm32)
			);
	 CMP cmp(
			.A1(MFRSDout),
			.A2(MFRTDout),
			.equal(Zero)
			);
	 NPC npc(
			.PC4(PC4_D),
			.Instr(IR_D),
			.J_Sel(J_Sel),
			.Branch(Branch),
			.Zero(Zero),
			.nPC(nPC)
			);
	 Controller controller_D(
			.Instr(IR_D),
			//.opcode(IR_D[31:26]),
			//.funct(IR_D[5:0]),
			.ExtOp(ExtOp),
			.Branch(Branch),
			.J_Sel(J_Sel),
			.PCSel(PCSel)
			);
	 //ID_EX
	 ID_EX id_ex(
			.IR_D(IR_D),
			.PC4_D(PC4_D),
			.RD1(RData1),
			.RD2(RData2),
			.EXT(Imm32),
			.Clk(clk),
			.Reset(reset),
			.IR_E_Clr(IR_E_Clr),
			.IR_E(IR_E),
			.PC4_E(PC4_E),
			.RS_E(RS_E),
			.RT_E(RT_E),
			.EXT_E(EXT_E)
			);
	 //EX
	 ALU alu(
			.A1(MFRSEout),
			.A2(M2Out),
			.ALUCtr(ALUCtr),
			.Instr(IR_E),
			.ALUResult(ALUResult)
			);
	 Controller controller_E(
			.Instr(IR_E),
			//.opcode(IR_E[31:26]),
			//.funct(IR_E[5:0]),
			.ALUSrc(ALUSrc),
			.ALUCtr(ALUCtr)
			);
	 //EX_MEM
	 EX_MEM ex_mem(
			.IR_E(IR_E),
			.PC4_E(PC4_E),
			.AO(ALUResult),
			.RT_E(MFRTEout),
			.Clk(clk),
			.Reset(reset),
			.IR_M(IR_M),
			.PC4_M(PC4_M),
			.AO_M(AO_M),
			.RT_M(RT_M)
			);
	 //MEM
	 DM dm(
			.Clk(clk),
			.Reset(reset),
			.MemWrite(MemWrite),
			.MemRead(MemRead),
			.Addr(AO_M),
			.Din(MFRTMout),
			.Dout(MemData)
			);
	 Controller controller_M(
			.Instr(IR_M),
			//.opcode(IR_M[31:26]),
			//.funct(IR_M[5:0]),
			.MemWrite(MemWrite),
			.MemRead(MemRead)
			);
	 //MEM_WB
	 MEM_WB mem_wb(
			.IR_M(IR_M),
			.PC4_M(PC4_M),
			.AO_M(AO_M),
			.DR_M(MemData),
			.Clk(clk),
			.Reset(reset),
			.IR_W(IR_W),
			.PC4_W(PC4_W),
			.AO_W(AO_W),
			.DR_W(DR_W)
			);
	 //WB
	 Controller controller_W(
			.Instr(IR_W),
			//.opcode(IR_W[31:26]),
			//.funct(IR_W[5:0]),
			.RegDst(RegDst),
			.MemtoReg(MemtoReg),
			.RegWrite(RegWrite)
			);
			
	 Mux2 M1(
			.A1(PC4),
			.A2(nPC),
			.A3(MFRSDout),
			.Sel(PCSel),
			.Out(M1Out)
			);
	 Mux1 M2(
			.A1(MFRTEout),
			.A2(EXT_E),
			.Sel(ALUSrc),
			.Out(M2Out)
			);
	 Mux2 #(5) M3(
			.A1(IR_W[20:16]),
			.A2(IR_W[15:11]),
			.A3(5'b11111),
			.Sel(RegDst),
			.Out(M3Out)
			);
	 Mux2 M4(
			.A1(AO_W),
			.A2(DR_W),
			.A3(PC4_W+4),
			.Sel(MemtoReg),
			.Out(M4Out)
			);
	 
	 

endmodule
