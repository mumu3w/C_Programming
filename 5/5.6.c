/******************************************************************************
  题目: 检测UPC的有效性；在用户录入UPC后，程序显示VALID或NOTVALID.
		
  演示: Enter the first 12 digits of a UPC: 013800151735
		VALID
		----------------------------------------------------------------------
		Enter the first 12 digits of a UPC: 013800151734
		NOTVALID
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

#define ARRAY_MAX 12

int main(){
	unsigned int i, first_sum, second_sum, total, check, upc[ARRAY_MAX];
	
	printf("Enter the first 12 digits of a UPC: ");
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%1u", &upc[i]);
	}
	
	first_sum = upc[0] + upc[2] + upc[4] + upc[6] + upc[8] + upc[10];
	second_sum = upc[1] + upc[3] + upc[5] + upc[7] + upc[9];
	total = 3 * first_sum + second_sum;
	check = 9 - (total - 1) % 10;
	
	if(check == upc[ARRAY_MAX - 1]){
		printf("VALID\n");
	}else{
		printf("NOTVALID\n");
	}
	
	return 0;
}