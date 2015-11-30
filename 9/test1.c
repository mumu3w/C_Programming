/******************************************************************************
  题目: 
		
  演示: 00:
		01: P
		02: PO
		03: PP
		04: POO
		05: POP
		06: PPO
		07: PPP
		08: POOO
		09: POOP
		10: POPO
		11: POPP
		12: PPOO
		13: PPOP
		14: PPPO
		15: PPPP
		16: POOOO
		17: POOOP
		18: POOPO
		19: POOPP
		20: POPOO
		21: POPOP
		22: POPPO
		23: POPPP
		24: PPOOO
		25: PPOOP
		26: PPOPO
		27: PPOPP
		28: PPPOO
		29: PPPOP
		30: PPPPO
		31: PPPPP
		32: POOOOO
		33: POOOOP
		34: POOOPO
		35: POOOPP
		36: POOPOO
		37: POOPOP
		38: POOPPO
		39: POOPPP
		40: POPOOO
		41: POPOOP
		42: POPOPO
		43: POPOPP
		44: POPPOO
		45: POPPOP
		46: POPPPO
		47: POPPPP
		48: PPOOOO
		49: PPOOOP
		50: PPOOPO
		51: PPOOPP
		52: PPOPOO
		53: PPOPOP
		54: PPOPPO
		55: PPOPPP
		56: PPPOOO
		57: PPPOOP
		58: PPPOPO
		59: PPPOPP
		60: PPPPOO
		61: PPPPOP
		62: PPPPPO
		63: PPPPPP
		64: POOOOOO
		65: POOOOOP
		66: POOOOPO
		67: POOOOPP
		68: POOOPOO
		69: POOOPOP
		70: POOOPPO
		71: POOOPPP
		72: POOPOOO
		73: POOPOOP
		74: POOPOPO
		75: POOPOPP
		76: POOPPOO
		77: POOPPOP
		78: POOPPPO
		79: POOPPPP
		80: POPOOOO
		81: POPOOOP
		82: POPOOPO
		83: POPOOPP
		84: POPOPOO
		85: POPOPOP
		86: POPOPPO
		87: POPOPPP
		88: POPPOOO
		89: POPPOOP
		90: POPPOPO
		91: POPPOPP
		92: POPPPOO
		93: POPPPOP
		94: POPPPPO
		95: POPPPPP
		96: PPOOOOO
		97: PPOOOOP
		98: PPOOOPO
		99: PPOOOPP
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/25/2015 
  
******************************************************************************/

#include <stdio.h>

void pb(int n);

int main(void){
	int i, n = 100;
	for(i = 0; i < n; i++){
		printf("%.2d: ", i);
		pb(i);
		putchar('\n');
	}
	return 0;
}

void pb(int n){
	if(n != 0){
		pb(n / 2);
		putchar('O' + n % 2);
	}
}