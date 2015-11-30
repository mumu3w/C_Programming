/******************************************************************************
   返回一个无符号整数，该整数的数位与n完全相同但顺序相反。

   (C) Nov 19 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>

unsigned reverse_bits(unsigned n);


int main(){
	unsigned int i;
	
	printf("Enter a hexadecimal number: ");
	scanf("%x", &i);
	
	printf("%X\n", reverse_bits(i));
	
	return 0;
}

unsigned reverse_bits(unsigned n){
	int i;
	unsigned m = 0;
	
	for(i = 0; i < sizeof(unsigned)*8; i++){
		m <<= 1;
		
		if(n & 0x1){
			m |= 0x1;
		}
		
		n >>= 1;
	}
	
	return m;
}