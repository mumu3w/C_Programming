/******************************************************************************
  ��Ŀ: ���û�������ĸ��������ҳ����ֵ��Сֵ.
		
  ��ʾ: Enter four integers: 21 43 10 35
		Largest: 43
		Smallest: 10
		----------------------------------------------------------------------
		Enter four integers: 59 43 21 41
		Largest: 59
		Smallest: 21
		
  ���䣺mumu3w@outlook.com	
  
  ʱ�䣺10/18/2015 
  
******************************************************************************/

#include <stdio.h>

#define ARRAY_MAX 4

int main(){
	int num[ARRAY_MAX], i, max, min;
	
	printf("Enter four integers: ");
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%d", &num[i]);
	}
	
	max = num[0];
	min = num[1];
	/* max */
	if(max < num[1]){
		max = num[1];
		min = num[0];
	}
	if(max < num[2]){
		max = num[2];
	}
	if(max < num[3]){
		max = num[3];
	}
	/* min */
	if(min > num[2]){
		min = num[2];
	}
	if(min > num[3]){
		min = num[3];
	}
	
	printf("Largest: %d\nSmallest: %d\n", max, min);
	
	return 0;
}