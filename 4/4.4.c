/******************************************************************************
  ��Ŀ: �����û���������������˽�����ʾ����.
		
  ��ʾ: Enter a number between 0 and 32767: 1953
		In octalm your number is: 03641
		In octalm your number is: 03641
		-----------------------------------------------------------------------
		Enter a number between 0 and 32767: 12
		In octalm your number is: 00014
		In octalm your number is: 00014
		
  ���䣺mumu3w@outlook.com	
  
  ʱ�䣺10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int bit1, bit2, bit3, bit4, bit5, number, tmp;
	
	printf("Enter a number between 0 and 32767: ");
	scanf("%u", &number);
	tmp = number;
	bit5 = tmp % 8;
	tmp /= 8;
	bit4 = tmp % 8;
	tmp /= 8;
	bit3 = tmp % 8;
	tmp /= 8;
	bit2 = tmp % 8;
	tmp /= 8;
	bit1 = tmp % 8;
	printf("In octalm your number is: %u%u%u%u%u\n", bit1, bit2, bit3, bit4, bit5);
	printf("In octalm your number is: %.5o", number);
	
	return 0;
}