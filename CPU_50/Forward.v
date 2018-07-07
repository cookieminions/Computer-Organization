`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:44 11/23/2016 
// Design Name: 
// Module Name:    Forward 
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
	module Forward(
	 input [31:0] IR_D,
	 input [31:0] IR_E,
	 input [31:0] IR_M,
	 input [31:0] IR_W,
	 output [2:0] FRSD,
	 output [2:0] FRTD,
	 output [2:0] FRSE,
	 output [2:0] FRTE,
	 output [1:0] FRTM
    );
	 
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
	 wire jalr_E;
	 wire jalr_M;
	 wire jalr_W;
	 wire cal_r_E;
	 wire cal_r_M;
	 wire cal_r_W;
	 wire cal_i_E;
	 wire cal_i_M;
	 wire cal_i_W;
	 wire load_E;
	 wire load_W;
	 wire store_E;
	 wire store_M;
	 wire jal_E;
	 wire jal_M;
	 wire jal_W;
	 
	 
	 assign btype_D = ((IR_D[31:26]==beq)
							|(IR_D[31:26]==bne)
							|(IR_D[31:26]==bgez)
							|(IR_D[31:26]==bgtz)
							|(IR_D[31:26]==blez)
							|(IR_D[31:26]==bltz))?1:0;
	 assign jr_D = ((IR_D[31:26]==6'b000000)&&(IR_D[5:0]==6'b001000))?1:0;
	 
	 assign jalr_D = ((IR_D[31:26]==6'b000000)&&(IR_D[5:0]==6'b001001))?1:0;
	 assign jalr_E = ((IR_E[31:26]==6'b000000)&&(IR_E[5:0]==6'b001001))?1:0;
	 assign jalr_M = ((IR_M[31:26]==6'b000000)&&(IR_M[5:0]==6'b001001))?1:0;
	 assign jalr_W = ((IR_W[31:26]==6'b000000)&&(IR_W[5:0]==6'b001001))?1:0;
	 
	 assign cal_r_E = ((IR_E[31:26]==6'b011100)||((IR_E[31:26]==6'b000000)&&(IR_E[5:0]!=6'b001000)&&(IR_E[5:0]!=6'b001001)))?1:0;
	 assign cal_r_M = ((IR_M[31:26]==6'b011100)||((IR_M[31:26]==6'b000000)&&(IR_M[5:0]!=6'b001000)&&(IR_M[5:0]!=6'b001001)))?1:0;
	 assign cal_r_W = ((IR_W[31:26]==6'b011100)||((IR_W[31:26]==6'b000000)&&(IR_W[5:0]!=6'b001000)&&(IR_W[5:0]!=6'b001001)))?1:0;
	 
	 assign cal_i_E = ((IR_E[31:26]==6'b001101)
							|(IR_E[31:26]==6'b001111)
							|(IR_E[31:26]==6'b001000)
							|(IR_E[31:26]==6'b001001)
							|(IR_E[31:26]==6'b001110)
							|(IR_E[31:26]==6'b001100)
							|(IR_E[31:26]==6'b001010)
							|(IR_E[31:26]==6'b001011))?1:0;						
	 assign cal_i_M = ((IR_M[31:26]==6'b001101)
							|(IR_M[31:26]==6'b001111)
							|(IR_M[31:26]==6'b001000)
							|(IR_M[31:26]==6'b001001)
							|(IR_M[31:26]==6'b001110)
							|(IR_M[31:26]==6'b001100)
							|(IR_M[31:26]==6'b001010)
							|(IR_M[31:26]==6'b001011))?1:0;
	 assign cal_i_W = ((IR_W[31:26]==6'b001101)
							|(IR_W[31:26]==6'b001111)
							|(IR_W[31:26]==6'b001000)
							|(IR_W[31:26]==6'b001001)
							|(IR_W[31:26]==6'b001110)
							|(IR_W[31:26]==6'b001100)
							|(IR_W[31:26]==6'b001010)
							|(IR_W[31:26]==6'b001011))?1:0;
							
	 assign load_E = ((IR_E[31:26]==6'b100011)
							|(IR_E[31:26]==6'b100000)
							|(IR_E[31:26]==6'b100100)
							|(IR_E[31:26]==6'b100001)
							|(IR_E[31:26]==6'b100101))?1:0;
	 assign load_W = ((IR_W[31:26]==6'b100011)
							|(IR_W[31:26]==6'b100000)
							|(IR_W[31:26]==6'b100100)
							|(IR_W[31:26]==6'b100001)
							|(IR_W[31:26]==6'b100101))?1:0;
							
	 assign store_E = ((IR_E[31:26]==6'b101011)
							|(IR_E[31:26]==6'b101000)
							|(IR_E[31:26]==6'b101001))?1:0;
	 assign store_M = ((IR_M[31:26]==6'b101011)
							|(IR_M[31:26]==6'b101000)
							|(IR_M[31:26]==6'b101001))?1:0;
	 
	 assign jal_E = (IR_E[31:26]==6'b000011)?1:0;
	 assign jal_M = (IR_M[31:26]==6'b000011)?1:0;
	 assign jal_W = (IR_W[31:26]==6'b000011)?1:0;
	 
	 assign FRSD = (btype_D|jr_D|jalr_D) & jal_E   & (IR_D[`rs]==5'b11111)  & (IR_D[`rs]!=0)?3'b011:
						(btype_D|jr_D|jalr_D) & jalr_E  & (IR_D[`rs]==IR_E[`rd]) & (IR_D[`rs]!=0)?3'b011:
						(btype_D|jr_D|jalr_D) & cal_r_M & (IR_D[`rs]==IR_M[`rd]) & (IR_D[`rs]!=0)?3'b001:
						(btype_D|jr_D|jalr_D) & cal_i_M & (IR_D[`rs]==IR_M[`rt]) & (IR_D[`rs]!=0)?3'b001:
						(btype_D|jr_D|jalr_D) & jal_M   & (IR_D[`rs]==5'b11111)  & (IR_D[`rs]!=0)?3'b100:
						(btype_D|jr_D|jalr_D) & jalr_M  & (IR_D[`rs]==IR_M[`rd]) & (IR_D[`rs]!=0)?3'b100:
						(btype_D|jr_D|jalr_D) & cal_r_W & (IR_D[`rs]==IR_W[`rd]) & (IR_D[`rs]!=0)?3'b010:
						(btype_D|jr_D|jalr_D) & cal_i_W & (IR_D[`rs]==IR_W[`rt]) & (IR_D[`rs]!=0)?3'b010:
						(btype_D|jr_D|jalr_D) & load_W  & (IR_D[`rs]==IR_W[`rt]) & (IR_D[`rs]!=0)?3'b010:
						(btype_D|jr_D|jalr_D) & jal_W   & (IR_D[`rs]==5'b11111)  & (IR_D[`rs]!=0)?3'b010:
						(btype_D|jr_D|jalr_D) & jalr_W  & (IR_D[`rs]==IR_W[`rd]) & (IR_D[`rs]!=0)?3'b010:
																													  3'b000;
	 assign FRTD = (btype_D) & jal_E   & (IR_D[`rt]==5'b11111)  & (IR_D[`rt]!=0)?3'b011:
						(btype_D) & jalr_E  & (IR_D[`rt]==IR_E[`rd]) & (IR_D[`rt]!=0)?3'b011:
						(btype_D) & cal_r_M & (IR_D[`rt]==IR_M[`rd]) & (IR_D[`rt]!=0)?3'b001:
						(btype_D) & cal_i_M & (IR_D[`rt]==IR_M[`rt]) & (IR_D[`rt]!=0)?3'b001:
						(btype_D) & jal_M   & (IR_D[`rt]==5'b11111)  & (IR_D[`rt]!=0)?3'b100:
						(btype_D) & jalr_M  & (IR_D[`rt]==IR_M[`rd]) & (IR_D[`rt]!=0)?3'b100:
						(btype_D) & cal_r_W & (IR_D[`rt]==IR_W[`rd]) & (IR_D[`rt]!=0)?3'b010:
						(btype_D) & cal_i_W & (IR_D[`rt]==IR_W[`rt]) & (IR_D[`rt]!=0)?3'b010:
						(btype_D) & load_W  & (IR_D[`rt]==IR_W[`rt]) & (IR_D[`rt]!=0)?3'b010:
						(btype_D) & jal_W   & (IR_D[`rt]==5'b11111)  & (IR_D[`rt]!=0)?3'b010:
						(btype_D) & jalr_W  & (IR_D[`rt]==IR_W[`rd]) & (IR_D[`rt]!=0)?3'b010:
																													  3'b000;
	 assign FRSE = (cal_r_E||cal_i_E||store_E||load_E) & cal_r_M & (IR_E[`rs]==IR_M[`rd]) & (IR_E[`rs]!=0)?3'b001:
						(cal_r_E||cal_i_E||store_E||load_E) & cal_i_M & (IR_E[`rs]==IR_M[`rt]) & (IR_E[`rs]!=0)?3'b001:
						(cal_r_E||cal_i_E||store_E||load_E) & jal_M   & (IR_E[`rs]==5'b11111)  & (IR_E[`rs]!=0)?3'b011:
						(cal_r_E||cal_i_E||store_E||load_E) & jalr_M  & (IR_E[`rs]==IR_M[`rd]) & (IR_E[`rs]!=0)?3'b011:
						(cal_r_E||cal_i_E||store_E||load_E) & cal_r_W & (IR_E[`rs]==IR_W[`rd]) & (IR_E[`rs]!=0)?3'b010:
						(cal_r_E||cal_i_E||store_E||load_E) & cal_i_W & (IR_E[`rs]==IR_W[`rt]) & (IR_E[`rs]!=0)?3'b010:
						(cal_r_E||cal_i_E||store_E||load_E) & load_W  & (IR_E[`rs]==IR_W[`rt]) & (IR_E[`rs]!=0)?3'b010:
						(cal_r_E||cal_i_E||store_E||load_E) & jal_W   & (IR_E[`rs]==5'b11111)  & (IR_E[`rs]!=0)?3'b010:
						(cal_r_E||cal_i_E||store_E||load_E) & jalr_W  & (IR_E[`rs]==IR_W[`rd]) & (IR_E[`rs]!=0)?3'b010:
																													  3'b000;	
	 assign FRTE = (cal_r_E||store_E) & cal_r_M & (IR_E[`rt]==IR_M[`rd]) & (IR_E[`rt]!=0)?3'b001:
						(cal_r_E||store_E) & cal_i_M & (IR_E[`rt]==IR_M[`rt]) & (IR_E[`rt]!=0)?3'b001:
						(cal_r_E||store_E) & jal_M   & (IR_E[`rt]==5'b11111)  & (IR_E[`rt]!=0)?3'b011:
						(cal_r_E||store_E) & jalr_M  & (IR_E[`rt]==IR_M[`rd]) & (IR_E[`rt]!=0)?3'b011:
						(cal_r_E||store_E) & cal_r_W & (IR_E[`rt]==IR_W[`rd]) & (IR_E[`rt]!=0)?3'b010:
						(cal_r_E||store_E) & cal_i_W & (IR_E[`rt]==IR_W[`rt]) & (IR_E[`rt]!=0)?3'b010:
						(cal_r_E||store_E) & load_W  & (IR_E[`rt]==IR_W[`rt]) & (IR_E[`rt]!=0)?3'b010:
						(cal_r_E||store_E) & jal_W   & (IR_E[`rt]==5'b11111)  & (IR_E[`rt]!=0)?3'b010:
						(cal_r_E||store_E) & jalr_W  & (IR_E[`rt]==IR_W[`rd]) & (IR_E[`rt]!=0)?3'b010:
																													  3'b000;
	 assign FRTM = (store_M) & cal_r_W & (IR_M[`rt]==IR_W[`rd]) & (IR_M[`rt]!=0)?2'b01:
						(store_M) & cal_i_W & (IR_M[`rt]==IR_W[`rt]) & (IR_M[`rt]!=0)?2'b01:
						(store_M) & load_W  & (IR_M[`rt]==IR_W[`rt]) & (IR_M[`rt]!=0)?2'b01:
						(store_M) & jal_W   & (IR_M[`rt]==5'b11111)  & (IR_M[`rt]!=0)?2'b01:
						(store_M) & jalr_W  & (IR_M[`rt]==IR_W[`rd]) & (IR_M[`rt]!=0)?2'b01:
																													  2'b00; 
	 
	 
endmodule
