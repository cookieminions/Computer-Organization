`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:53:42 11/23/2016 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
    input [31:0] IR_D,
	 input [31:0] PC4_D,
	 input [31:0] RD1,
	 input [31:0] RD2,
	 input [31:0] EXT,
	 input bge,
	 input Clk,
	 input Reset,
	 input IR_E_Clr,
	 output bge_E,
	 output [31:0] IR_E,
	 output [31:0] PC4_E,
	 output [31:0] RS_E,
	 output [31:0] RT_E,
	 output [31:0] EXT_E
	 );
	 
	 reg [31:0] _ir_e;
	 reg [31:0] _pc4_e;
	 reg [31:0] _rs_e;
	 reg [31:0] _rt_e;
	 reg [31:0] _ext_e;
	 reg _bge;
	 
	 initial begin
		_ir_e = 0;
		_pc4_e = 32'h00003000;
		_rs_e = 0;
		_rt_e = 0;
		_ext_e = 0;
		_bge = 0;
	 end
	 
	 assign IR_E = _ir_e;
	 assign PC4_E = _pc4_e;
	 assign RS_E = _rs_e;
	 assign RT_E = _rt_e;
	 assign EXT_E = _ext_e;
	 assign bge_E = _bge;
	 
	 always@(posedge Clk)begin
		if(Reset)begin
			_ir_e = 0;
			_pc4_e = 32'h00003000;
			_rs_e = 0;
			_rt_e = 0;
			_ext_e = 0;
			_bge = 0;
		end
		else begin
			if(IR_E_Clr)begin
				_ir_e = 0;
			end
			else	begin
				_ir_e <= IR_D;
			end
			_pc4_e <= PC4_D;
			_rs_e <= RD1;
			_rt_e <= RD2;
			_ext_e <= EXT;
			_bge <= bge;
		end
	 end


endmodule
