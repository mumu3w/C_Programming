/******************************************************************************
   用联合提供数据的多个视角。

   (C) Nov 19 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;

union{
	struct{
		UINT32 eax, ebx, ecx, edx;
	}dword;
	struct{
		UINT16 ax, ha, bx, hb, cx, hc, dx, hd;
	}word;
	struct{
		UINT8 al, ah;
		UINT16 ha;
		UINT8 bl, bh;
		UINT16 hb;
		UINT8 cl, ch;
		UINT16 hc;
		UINT8 dl, dh;
		UINT16 hd;
	}byte;
}regs;


int main(){
	
	regs.dword.eax = 0xFFFFCCCC;
	regs.byte.ah = 0x12;
	regs.byte.al = 0x34;
	
	regs.dword.edx = 0xAAAABBBB;
	regs.byte.dh = 0x34;
	regs.byte.dl = 0x56;
	
	printf("AX: %hx\n", regs.word.ax);
	printf("EAX: %x\n", regs.dword.eax);
	
	printf("DX: %hx\n", regs.word.dx);
	printf("EDX: %x\n", regs.dword.edx);
	
	return 0;
}