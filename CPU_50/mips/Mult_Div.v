`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:46:19 12/10/2016 
// Design Name: 
// Module Name:    Mult_Div 
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
module Mult_Div(
    input [31:0] A1,
	 input [31:0] A2,
	 input [2:0] MDOp,
	 input [1:0] MTOp,
	 input Clk,
	 input Reset,
	 input start,
	 output busy,
	 output [31:0] Hi,
	 output [31:0] Lo
	 );
	 
	 reg [2:0] count;
	 reg [31:0] _hi;
	 reg [31:0] _lo;
	 reg [31:0] h;
	 reg [31:0] l;
	 reg _busy;
	 
	 initial begin
		count = 0;
		_busy = 0;
		_hi = 0;
		_lo = 0;
	 end
	 
	 assign Hi = _hi;
	 assign Lo = _lo;
	 assign busy = _busy;
	 
	 always@(posedge Clk) begin
		if(Reset)	begin
			count = 0;
			_busy = 0;
			_hi = 0;
			_lo = 0;
			h = 0;
			l = 0;
		end
		else if(start)begin
			_busy = 1; 
			case(MDOp)
				3'b001:	{h,l} = $signed(A1)*$signed(A2);
				3'b010:	{h,l} = A1*A2;
				3'b011:	begin
							if(A2!=0)begin
								h = $signed(A1)%$signed(A2);
								l = $signed(A1)/$signed(A2);
							end
							end
				3'b100:	begin
							if(A2!=0)begin
								h = A1%A2;
								l = A1/A2;
							end
							end
			endcase
		end
		else begin
			case(MTOp)
				2'b01:	_hi<=A1;
				2'b10:	_lo<=A1;
			endcase
		end
		if(_busy==1)begin
			count = count+1;
			if(count==5)begin
				_busy = 0;
				count = 0;
				_hi = h;
				_lo = l;
			end
		end
	 end

endmodule
