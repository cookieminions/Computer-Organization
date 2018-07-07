`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:56:28 12/07/2016 
// Design Name: 
// Module Name:    Load_Ext 
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
module Load_Ext(
    input [31:0] Din,
	 input [31:0] Addr,
	 input [2:0] Op,
	 output [31:0] Dout
	 );
	 
	 reg [31:0] out;
	 assign Dout = out;
	 
	 always@(Din or Addr or Op) begin
		case(Op)
			3'b000:	begin	//lw
						out = Din;
						end
			3'b001:	begin	//lb
						case(Addr[1:0])
							2'b00:	begin
										out = {{24{Din[7]}},Din[7:0]};
										end
							2'b01:	begin
										out = {{24{Din[15]}},Din[15:8]};
										end
							2'b10:	begin
										out = {{24{Din[23]}},Din[23:16]};
										end
							2'b11:	begin
										out = {{24{Din[31]}},Din[31:24]};
										end
						endcase
						end
			3'b010:	begin	//lbu
						case(Addr[1:0])
							2'b00:	begin
										out = {{24{1'b0}},Din[7:0]};
										end
							2'b01:	begin
										out = {{24{1'b0}},Din[15:8]};
										end
							2'b10:	begin
										out = {{24{1'b0}},Din[23:16]};
										end
							2'b11:	begin
										out = {{24{1'b0}},Din[31:24]};
										end
						endcase
						end
			3'b011:	begin	//lh
						case(Addr[1:0])
							2'b00:	begin
										out = {{16{Din[15]}},Din[15:0]};
										end
							2'b10:	begin
										out = {{16{Din[31]}},Din[31:16]};
										end
						endcase
						end
			3'b100:	begin	//lhu
						case(Addr[1:0])
							2'b00:	begin
										out = {{16{1'b0}},Din[15:0]};
										end
							2'b10:	begin
										out = {{16{1'b0}},Din[31:16]};
										end
						endcase
						end
		endcase
	 end


endmodule
