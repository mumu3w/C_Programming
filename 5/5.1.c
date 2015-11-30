/******************************************************************************
  题目: 确定一个数的的位数；假设输入的数最多不超过4位.
		
  演示: Enter a number: 0
		The number 0 has 1 digits
		----------------------------------------------------------------------
		Enter a number: 10
		The number 10 has 2 digits
		----------------------------------------------------------------------
		Enter a number: 100
		The number 100 has 3 digits
		----------------------------------------------------------------------
		Enter a number: 1000
		The number 1000 has 4 digits
		----------------------------------------------------------------------
		Enter a number: 10000
		error.
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int number;
	
	printf("Enter a number: ");
	scanf("%u", &number);
	
	if(number>=0 && number <=9){
		printf("The number %d has 1 digits\n", number);
	}else if(number>=10 && number <=99){
		printf("The number %d has 2 digits\n", number);
	}else if(number>=100 && number <=999){
		printf("The number %d has 3 digits\n", number);
	}else if(number>=1000 && number <=9999){
		printf("The number %d has 4 digits\n", number);
	}else{
		printf("error.\n");
	}
	
	return 0;
}