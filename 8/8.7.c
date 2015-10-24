/******************************************************************************
  题目: 读取一个5*5的整数数组，然后显示出每行的和与每列的和。
		
  演示: Enter row 1: 8 3 9 0 10
		Enter row 2: 3 5 17 1 1
		Enter row 3: 2 8 6 23 1
		Enter row 4: 15 7 3 2 9
		Enter row 5: 6 14 2 6 0
		
		Row totals:     30    27    40    36    28
		Column totals:     34    37    37    32    21
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/23/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define	ROW	5
#define COLMUN	5

int main(){
	int n[COLMUN][ROW], i, j, sum;
	
	for(i = 0; i < COLMUN; i++){
		printf("Enter row %d: ", i+1);
		for(j = 0; j < ROW; j++){
			scanf("%d", &n[i][j]);
		}
	}
	
	printf("\nRow totals: ");
	for(i = 0; i < COLMUN; i++){
		sum = 0;
		for(j = 0; j < ROW; j++){
			sum += n[i][j];
		}
		printf("%6d", sum);
	}
	
	printf("\nColumn totals: ");
	for(j = 0; j < ROW; j++){
		sum = 0;
		for(i = 0; i < COLMUN; i++){
			sum += n[i][j];
		}
		printf("%6d", sum);
	}
	
	return 0;
}