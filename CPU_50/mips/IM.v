`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:59:09 11/23/2016 
// Design Name: 
// Module Name:    IM 
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
module IM(
    input [11:2] Addr,
    output [31:0] Instr
    );
	 
	 reg [31:0] _im[2047:0];
	 assign Instr = _im[Addr];
	 
	 initial begin
		$readmemh("code.txt",_im);
	 end

endmodule