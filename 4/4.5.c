/******************************************************************************
  ��Ŀ: ����UPC��ʹ�û�����һ������11λ���֣���������¼��1λ����¼��5λ�������
		¼��5λ.
		
  ��ʾ: Enter the first 11 digits of a UPC: 01380015173
		Check digit: 5
		-----------------------------------------------------------------------
		Enter the first 11 digits of a UPC: 05150024128
		Check digit: 8
		
  ���䣺mumu3w@outlook.com	
  
  ʱ�䣺10/17/2015 
  
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