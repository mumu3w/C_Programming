/******************************************************************************
  ��Ŀ: Ҫ���û�¼��һ������Ȼ����λ�������ӡ�������.
		
  ��ʾ: Enter a number: 123
		The reversal is: 321
		----------------------------------------------------------------------
		Enter a number: 159
		The reversal is: 951
		----------------------------------------------------------------------
		Enter a number: 65535
		The reversal is: 53556
		----------------------------------------------------------------------
		Enter a number: 12345678
		The reversal is: 87654321
		
  ���䣺mumu3w@outlook.com	
  
  ʱ�䣺10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int number, tmp;
	
	printf("Enter a number: ");
	scanf("%u", &number);
	printf("The reversal is: ");
	
	do{
		tmp = number % 10;
		number /= 10;
		printf("%d", tmp);
	}while(number > 0);
	
	return 0;
}