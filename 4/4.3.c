/******************************************************************************
  ��Ŀ: Ҫ���û�¼��һ����λ����Ȼ����λ�������ӡ�������.
		
  ��ʾ: Enter a three-digit number: 123
		The reversal is: 321
		-----------------------------------------------------------------------
		Enter a three-digit number: 456
		The reversal is: 654
		
  ���䣺mumu3w@outlook.com	
  
  ʱ�䣺10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int digits_1, digits_10, digits_100;
	
	printf("Enter a three-digit number: ");
	scanf("%1u%1u%1u", &digits_100, &digits_10, &digits_1);
	printf("The reversal is: %u%u%u", digits_1, digits_10, digits_100);
	
	return 0;
}