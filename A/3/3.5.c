/******************************************************************************
  题目: 要求用户（按任意次序）输入1到16的所有整数，然后用4*4矩阵将他们显示出啦，
		再计算出每行、每列和每条对角线上的和.
		
  演示: Enter the numbers from 1 to 16 in any order: 16 3 2 13 5 10 11 8 9 6 7 
		12 4 15 14 1
			16     3     2    13
			 5    10    11     8
			 9     6     7    12
			 4    15    14     1
		Row sums: 34 34 34 34
		Column sums: 34 34 34 34
		Diagonal sums: 34 34
		----------------------------------------------------------------------
		Enter the numbers from 1 to 16 in any order: 1 2 3 4 5 6 7 8 9 10 11 12 
		13 14 15 16
			1     2     3     4
			5     6     7     8
			9    10    11    12
		   13    14    15    16
		Row sums: 10 26 42 58
		Column sums: 28 32 36 40
		Diagonal sums: 34 34
		
  邮箱：mumu3w@outlook.com	

  时间：10/17/2015   
  
******************************************************************************/

#include <stdio.h>

#define ARRAY_MAX	16

int main(){
	unsigned int num[ARRAY_MAX];
	size_t i;
	
	printf("Enter the numbers from 1 to 16 in any order: ");
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%u", &num[i]);
	}
	
	for(i = 0; i < ARRAY_MAX; i++){
		printf("%6u", num[i]);
		if((i+1)%4 == 0){
			printf("\n");
		}
	}
	
	printf("Row sums: %u %u %u %u\n", num[0]+num[1]+num[2]+num[3], \
									num[4]+num[5]+num[6]+num[7], \
									num[8]+num[9]+num[10]+num[11], \
									num[12]+num[13]+num[14]+num[15]);
									
	printf("Column sums: %u %u %u %u\n", num[0]+num[4]+num[8]+num[12], \
									num[1]+num[5]+num[9]+num[13], \
									num[2]+num[6]+num[10]+num[14], \
									num[3]+num[7]+num[11]+num[15]);
									
	printf("Diagonal sums: %u %u\n", num[0]+num[5]+num[10]+num[15], \
									num[3]+num[6]+num[9]+num[12]);
	
	return 0;
}