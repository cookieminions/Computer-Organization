`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:13:14 11/23/2016 
// Design Name: 
// Module Name:    EX_MEM 
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
module EX_MEM(
    input [31:0] IR_E,
	 input [31:0] PC4_E,
	 input [31:0] AO,
	 input [31:0] RT_E,
	 input Clk,
	 input Reset,
	 output [31:0] IR_M,
	 output [31:0] PC4_M,
	 output [31:0] AO_M,
	 output [31:0] RT_M
	 );
	 
	 reg [31:0] _ir_m;
	 reg [31:0] _pc4_m;
	 reg [31:0] _ao_m;
	 reg [31:0] _rt_m;
	 
	 initial begin
		_ir_m = 0;
		_pc4_m = 32'h00003000;
		_ao_m = 0;
		_rt_m = 0;
	 end
	 
	 assign IR_M = _ir_m;
	 assign PC4_M = _pc4_m;
	 assign AO_M = _ao_m;
	 assign RT_M = _rt_m;
	 
	 always@(posedge Clk)begin
		if(Reset)begin
			_ir_m = 0;
			_pc4_m = 32'h00003000;
			_ao_m = 0;
			_rt_m = 0;
		end
		else begin
			_ir_m <= IR_E;
			_pc4_m <= PC4_E;
			_ao_m <= AO;
			_rt_m <= RT_E;
		end
	 end


endmodule
