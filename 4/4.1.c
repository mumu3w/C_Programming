/******************************************************************************
  ��Ŀ: Ҫ���û�¼��һ����λ����Ȼ����λ�������ӡ�������.
		
  ��ʾ: Enter a two-digit number: 28
		The reversal is: 82
		-----------------------------------------------------------------------
		Enter a two-digit number: 96
		The reversal is: 69
		
  ���䣺mumu3w@outlook.com	
  
  ʱ�䣺10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int number, digits_1, digits_10;
	
	printf("Enter a two-digit number: ");
	scanf("%u", &number);
	digits_10 = number / 10;
	digits_1 = number % 10;
	printf("The reversal is: %u%u", digits_1, digits_10);
	
	return 0;
}