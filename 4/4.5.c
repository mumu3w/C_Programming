/******************************************************************************
  题目: 计算UPC，使用户可以一次输入11位数字，而不用先录入1位，再录入5位，最后再
		录入5位.
		
  演示: Enter the first 11 digits of a UPC: 01380015173
		Check digit: 5
		-----------------------------------------------------------------------
		Enter the first 11 digits of a UPC: 05150024128
		Check digit: 8
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

#define ARRAY_MAX 11

int main(){
	unsigned int i, first_sum, second_sum, total, upc[ARRAY_MAX];
	
	printf("Enter the first 11 digits of a UPC: ");
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%1u", &upc[i]);
	}
	
	first_sum = upc[0] + upc[2] + upc[4] + upc[6] + upc[8] + upc[10];
	second_sum = upc[1] + upc[3] + upc[5] + upc[7] + upc[9];
	total = 3 * first_sum + second_sum;
	
	printf("Check digit: %u", 9 - (total - 1) % 10);
	
	return 0;
}