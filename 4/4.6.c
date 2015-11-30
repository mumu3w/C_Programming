/******************************************************************************
  题目: 计算EAN检验位.
		
  演示: Enter the first 12 digits of an EAN: 869148426000
		Check digit: 8
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

#define ARRAY_MAX 12

int main(){
	unsigned int i, first_sum, second_sum, total, upc[ARRAY_MAX];
	
	printf("Enter the first 12 digits of an EAN: ");
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%1u", &upc[i]);
	}
	
	first_sum = upc[1] + upc[3] + upc[5] + upc[7] + upc[9] + upc[11];
	second_sum = upc[0] + upc[2] + upc[4] + upc[6] + upc[8] + upc[10];
	total = 3 * first_sum + second_sum;
	
	printf("Check digit: %u", 9 - (total - 1) % 10);
	
	return 0;
}