/******************************************************************************
  题目: 提示用户输入每个学生5门测验的成绩，一共有5个学生。然后计算每个学生的总
		分和平均分，以及每门测验的平均分、高分和低分。
		
  演示: Enter No.1 student achievement: 87 82 76 69 81
		Enter No.2 student achievement: 75 68 82 70 66
		Enter No.3 student achievement: 90 88 85 79 80
		Enter No.4 student achievement: 66 67 71 73 61
		Enter No.5 student achievement: 59 49 60 71 62
		
		No.1 student total: 395
		No.1 student average: 79.00
		No.2 student total: 361
		No.2 student average: 72.20
		No.3 student total: 422
		No.3 student average: 84.40
		No.4 student total: 338
		No.4 student average: 67.60
		No.5 student total: 301
		No.5 student average: 60.20
		
		No.1 Course test average: 75.40
		No.1 Course test max = 90   min = 59
		No.2 Course test average: 70.80
		No.2 Course test max = 88   min = 49
		No.3 Course test average: 74.80
		No.3 Course test max = 85   min = 60
		No.4 Course test average: 72.40
		No.4 Course test max = 79   min = 69
		No.5 Course test average: 70.00
		No.5 Course test max = 81   min = 61
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/24/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define	ROW	5
#define COLMUN	5

int main(){
	int n[COLMUN][ROW], i, j, sum, min, max;
	
	for(i = 0; i < COLMUN; i++){
		printf("Enter No.%d student achievement: ", i+1);
		for(j = 0; j < ROW; j++){
			scanf("%d", &n[i][j]);
		}
	}
	printf("\n");
	
	for(i = 0; i < COLMUN; i++){
		sum = 0;
		for(j = 0; j < ROW; j++){
			sum += n[i][j];
		}
		printf("No.%d student total: %d\n", i+1, sum);
		printf("No.%d student average: %.2f\n", i+1, (float)sum / ROW);
	}
	printf("\n");
	
	for(j = 0; j < ROW; j++){
		sum = 0;
		min = n[0][j];
		max = n[0][j];
		for(i = 0; i < COLMUN; i++){
			sum += n[i][j];
			if(n[i][j] > max){
				max = n[i][j];
			}
			
			if(n[i][j] < min){
				min = n[i][j];
			}
		}
		printf("No.%d Course test average: %.2f\n", j+1, (float)sum / COLMUN);
		printf("No.%d Course test max = %d   min = %d\n", j+1, max, min);
	}
	
	return 0;
}