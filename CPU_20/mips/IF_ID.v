`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:49:00 11/23/2016 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
	 input [31:0] IM,
	 input [31:0] ADD4,
	 input Clk,
	 input Reset,
	 input IR_D_En,
	 output [31:0] IR_D,
	 output [31:0] PC4_D
    );
	 
	 reg [31:0] _ir_d;
	 reg [31:0] _pc4_d;
	 
	 initial begin
		_ir_d = 0;
		_pc4_d = 32'h00003000;
	 end
	 
	 assign IR_D = _ir_d;
	 assign PC4_D = _pc4_d;
	 
	 always@(posedge Clk)begin
		if(Reset)begin
			_ir_d = 0;
			_pc4_d = 32'h00003000;
		end
		else if(IR_D_En)begin
			_ir_d <= IM;
			_pc4_d <= ADD4;
		end
	 end

endmodule
