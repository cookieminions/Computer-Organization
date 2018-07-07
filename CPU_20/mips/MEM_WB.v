`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:19:58 11/23/2016 
// Design Name: 
// Module Name:    MEM_WB 
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
module MEM_WB(
    input [31:0] IR_M,
	 input [31:0] PC4_M,
	 input [31:0] AO_M,
	 input [31:0] DR_M,
	 input Clk,
	 input Reset,
	 output [31:0] IR_W,
	 output [31:0] PC4_W,
	 output [31:0] AO_W,
	 output [31:0] DR_W
	 );
	 
	 reg [31:0] _ir_w;
	 reg [31:0] _pc4_w;
	 reg [31:0] _ao_w;
	 reg [31:0] _dr_w;
	 
	 initial begin
		_ir_w = 0;
		_pc4_w = 32'h00003000;
		_ao_w = 0;
		_dr_w = 0;
	 end
	 
	 assign IR_W = _ir_w;
	 assign PC4_W = _pc4_w;
	 assign AO_W = _ao_w;
	 assign DR_W = _dr_w;
	 
	 always@(posedge Clk)begin
		if(Reset)begin
			_ir_w = 0;
			_pc4_w = 32'h00003000;
			_ao_w = 0;
			_dr_w = 0;
		end
		else begin
			_ir_w <= IR_M;
			_pc4_w <= PC4_M;
			_ao_w <= AO_M;
			_dr_w <= DR_M;
		end
	 end

endmodule
