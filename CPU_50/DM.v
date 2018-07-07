`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:15 11/23/2016 
// Design Name: 
// Module Name:    DM 
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
module DM(
    input Clk,
	 input Reset,
    input MemWrite,
    input MemRead,
	 input [31:0] Addr,
	 input [3:0] BE,
    input [31:0] Din,
    output [31:0] Dout
    );
	 
	 `define byte0 7:0
	 `define byte1 15:8
	 `define byte2 23:16
	 `define byte3 31:24
	 
	 reg [31:0] _dm[2047:0];
	 integer i;
	 
	 assign Dout = _dm[Addr[12:2]];
	 
	 initial begin
		for(i=0;i<2048;i=i+1)begin
			_dm[i] = 0;
		end
	 end
	 
	 always@(posedge Clk)begin
		if(Reset)begin
			for(i=0;i<2048;i=i+1)begin
				_dm[i] = 0;
			end
		end
		else if(MemWrite)begin
			case(BE)
				4'b0011:	begin	//sh
							$display("*%h <= %h",Addr,Din[15:0]);
							_dm[Addr[12:2]][`byte0] <= Din[7:0];
							_dm[Addr[12:2]][`byte1] <= Din[15:8];
							end
				4'b1100:	begin	//sh
							$display("*%h <= %h",Addr,Din[15:0]);
							_dm[Addr[12:2]][`byte2] <= Din[7:0];
							_dm[Addr[12:2]][`byte3] <= Din[15:8];
							end
				4'b0001:	begin	//sb
							$display("*%h <= %h",Addr,Din[7:0]);
							_dm[Addr[12:2]][`byte0] <= Din[7:0];
							end
				4'b0010:	begin	//sb
							$display("*%h <= %h",Addr,Din[7:0]);
							_dm[Addr[12:2]][`byte1] <= Din[7:0];
							end
				4'b0100:	begin	//sb
							$display("*%h <= %h",Addr,Din[7:0]);
							_dm[Addr[12:2]][`byte2] <= Din[7:0];
							end
				4'b1000: begin	//sb
							$display("*%h <= %h",Addr,Din[7:0]);
							_dm[Addr[12:2]][`byte3] <= Din[7:0];
							end
				4'b1111:	begin	//sw
							$display("*%h <= %h",Addr,Din);
							_dm[Addr[12:2]] <= Din;
							end
			endcase
		end
	 end
	 
endmodule
