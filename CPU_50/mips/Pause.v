`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:05:38 11/23/2016 
// Design Name: 
// Module Name:    Pause 
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
module Pause(
	 input [31:0] IR_D,
	 input [31:0] IR_E,
	 input [31:0] IR_M,
	 input busy,
	 input start,
	 output stall
    );
	 
	 wire stall_b;
	 wire stall_cal_r;
	 wire stall_cal_i;
	 wire stall_load;
	 wire stall_store;
	 wire stall_jr;
	 wire stall_jalr;
	 wire stall_md;
	 
	 `define rs 25:21
	 `define rt 20:16
	 `define rd 15:11
	 
	 parameter beq = 6'b000100;
	 parameter bne = 6'b000101;
	 parameter bgtz = 6'b000111;
	 parameter bgez = 6'b000001;
	 parameter bltz = 6'b000001;
	 parameter blez = 6'b000110;
	 
	 wire btype_D;
	 wire jr_D;
	 wire jalr_D;
	 wire cal_r_D;
	 wire cal_r_E;
	 wire cal_i_D;
	 wire cal_i_E;
	 wire load_D;
	 wire load_E;
	 wire load_M;
	 wire store_D;
	 wire md_D;
	 
	 assign btype_D = ((IR_D[31:26]==beq)
							|(IR_D[31:26]==bne)
							|(IR_D[31:26]==bgez)
							|(IR_D[31:26]==bgtz)
							|(IR_D[31:26]==blez)
							|(IR_D[31:26]==bltz))?1:0;
	 assign jr_D = ((IR_D[31:26]==6'b000000)&&(IR_D[5:0]==6'b001000))?1:0;
	 assign jalr_D = ((IR_D[31:26]==6'b000000)&&(IR_D[5:0]==6'b001001))?1:0;
	 
	 assign cal_r_D = ((IR_D[31:26]==6'b000000)&&(IR_D[5:0]!=6'b001000)&&(IR_D[5:0]!=6'b001001))?1:0;
	 assign cal_r_E = ((IR_E[31:26]==6'b000000)&&(IR_E[5:0]!=6'b001000)&&(IR_E[5:0]!=6'b001001))?1:0;
	 
	 assign md_D = ((IR_D[31:26]==6'b000000)&&((IR_D[5:0]==6'b011000)
															|(IR_D[5:0]==6'b011001)
															|(IR_D[5:0]==6'b011010)
															|(IR_D[5:0]==6'b011011)
															|(IR_D[5:0]==6'b010000)
															|(IR_D[5:0]==6'b010010)
															|(IR_D[5:0]==6'b010001)
															|(IR_D[5:0]==6'b010011)))?1:0;
	 
	 assign cal_i_D = ((IR_D[31:26]==6'b001101)
							|(IR_D[31:26]==6'b001111)
							|(IR_D[31:26]==6'b001000)
							|(IR_D[31:26]==6'b001001)
							|(IR_D[31:26]==6'b001110)
							|(IR_D[31:26]==6'b001100)
							|(IR_D[31:26]==6'b001010)
							|(IR_D[31:26]==6'b001011))?1:0;
	 assign cal_i_E = ((IR_E[31:26]==6'b001101)
							|(IR_E[31:26]==6'b001111)
							|(IR_E[31:26]==6'b001000)
							|(IR_E[31:26]==6'b001001)
							|(IR_E[31:26]==6'b001110)
							|(IR_E[31:26]==6'b001100)
							|(IR_E[31:26]==6'b001010)
							|(IR_E[31:26]==6'b001011))?1:0;					
	 
	 assign load_D = ((IR_D[31:26]==6'b100011)
							|(IR_D[31:26]==6'b100000)
							|(IR_D[31:26]==6'b100100)
							|(IR_D[31:26]==6'b100001)
							|(IR_D[31:26]==6'b100101))?1:0;
	 assign load_E = ((IR_E[31:26]==6'b100011)
							|(IR_E[31:26]==6'b100000)
							|(IR_E[31:26]==6'b100100)
							|(IR_E[31:26]==6'b100001)
							|(IR_E[31:26]==6'b100101))?1:0;
	 assign load_M = ((IR_M[31:26]==6'b100011)
							|(IR_M[31:26]==6'b100000)
							|(IR_M[31:26]==6'b100100)
							|(IR_M[31:26]==6'b100001)
							|(IR_M[31:26]==6'b100101))?1:0;
	 
	 assign store_D = ((IR_D[31:26]==6'b101011)
							|(IR_D[31:26]==6'b101000)
							|(IR_D[31:26]==6'b101001))?1:0;
	 
	 assign stall_b = (btype_D) & (
							  (cal_r_E & (((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rd]))|((IR_D[`rt]!=0)&(IR_D[`rt]==IR_E[`rd]))))|
							  (cal_i_E & (((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt]))|((IR_D[`rt]!=0)&(IR_D[`rt]==IR_E[`rt]))))|
							  (load_E  & (((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt]))|((IR_D[`rt]!=0)&(IR_D[`rt]==IR_E[`rt]))))|
							  (load_M  & (((IR_D[`rs]!=0)&(IR_D[`rs]==IR_M[`rt]))|((IR_D[`rt]!=0)&(IR_D[`rt]==IR_M[`rt])))));
	 assign stall_cal_r = cal_r_D & load_E & (((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt]))|((IR_D[`rt]!=0)&(IR_D[`rt]==IR_E[`rt])));
	 assign stall_cal_i = cal_i_D & load_E & (IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt]);
	 assign stall_load = load_D & load_E & (IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt]);
	 assign stall_store = store_D & load_E & (IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt]);
	 assign stall_jr = (jr_D) & (
							  (cal_r_E & ((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rd])))|
							  (cal_i_E & ((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt])))|
							  (load_E  & ((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt])))|
							  (load_M  & ((IR_D[`rs]!=0)&(IR_D[`rs]==IR_M[`rt]))));
	 assign stall_jalr = (jalr_D) & (
							  (cal_r_E & ((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rd])))|
							  (cal_i_E & ((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt])))|
							  (load_E  & ((IR_D[`rs]!=0)&(IR_D[`rs]==IR_E[`rt])))|
							  (load_M  & ((IR_D[`rs]!=0)&(IR_D[`rs]==IR_M[`rt]))));
	 assign stall_md = md_D&&(busy|start);
	 
	 assign stall = stall_b|stall_cal_r|stall_cal_i|stall_load|stall_store|stall_jr|stall_jalr|stall_md;


endmodule
