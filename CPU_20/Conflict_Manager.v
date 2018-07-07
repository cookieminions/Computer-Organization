`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:35 11/26/2016 
// Design Name: 
// Module Name:    Conflict_Manager 
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
module Conflict_Manager(
    input [31:0] IR_D,
	 input [31:0] IR_E,
	 input [31:0] IR_M,
	 input [31:0] IR_W,
	 input movz,
	 input movz_M,
	 input movz_W,
	 input bge_E,
	 input bge_M,
	 input bge_W,
	 output [2:0] FRSD,
	 output [2:0] FRTD,
	 output [2:0] FRSE,
	 output [2:0] FRTE,
	 output [1:0] FRTM,
	 output stall
	 );
	 
	 Forward forward(
			.IR_D(IR_D),
			.IR_E(IR_E),
			.IR_M(IR_M),
			.IR_W(IR_W),
			.movz(movz),
			.movz_M(movz_M),
			.movz_W(movz_W),
			.bge_E(bge_E),
			.bge_M(bge_M),
			.bge_W(bge_W),
			.FRSD(FRSD),
			.FRTD(FRTD),
			.FRSE(FRSE),
			.FRTE(FRTE),
			.FRTM(FRTM)
			);
	 Pause pause(
			.IR_D(IR_D),
			.IR_E(IR_E),
			.IR_M(IR_M),
			.movz(movz),
			.stall(stall)
			);


endmodule
