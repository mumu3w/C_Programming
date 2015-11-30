/******************************************************************************
  题目: 打印n*n的幻方（1，2，...，n^2的方阵排列，且每行、每列和每条对角线上的和
		都相等）。由用户指定n的值。
		
  演示: This program creates a magic square of a specified size.
		The size must be an odd number between 1 and 99.
		Enter size of magic square: 5
		   17   24    1    8   15
		   23    5    7   14   16
			4    6   13   20   22
		   10   12   19   21    3
		   11   18   25    2    9
		----------------------------------------------------------------------
		This program creates a magic square of a specified size.
		The size must be an odd number between 1 and 99.
		Enter size of magic square: 7
		   30   39   48    1   10   19   28
		   38   47    7    9   18   27   29
		   46    6    8   17   26   35   37
			5   14   16   25   34   36   45
		   13   15   24   33   42   44    4
		   21   23   32   41   43    3   12
		   22   31   40   49    2   11   20
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/24/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>


#define	ARRAY_MAX	99

int main(){
	int magic_square[ARRAY_MAX][ARRAY_MAX] = {0}, y, x, i, n;
	
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);
	
	y = 0;
	x = n / 2;
	magic_square[y][x] = 1;
	for(i = 2; i <= n*n; i++){
		if(y-1 < 0 && x+1 != n){
			if(magic_square[n-1][x+1] != 0){
				magic_square[y+1][x] = i;
				y++;
			}else{
				magic_square[n-1][x+1] = i;
				y = n - 1;
				x++;
			}	
		}else if(x+1 == n && y-1 >= 0){
			if(magic_square[y-1][0] != 0){
				magic_square[y+1][x] = i;
				y++;
			}else{
				magic_square[y-1][0] = i;
				y--;
				x = 0;
			}		
		}else if(y-1 < 0 && x+1 == n){
			if(magic_square[n-1][0] != 0){
				magic_square[y+1][x] = i;
				y++;
			}else{
				magic_square[n-1][0] = i;
				y = n - 1;
				x = 0;
			}	
		}else{
			if(magic_square[y-1][x+1] != 0){
				magic_square[y+1][x] = i;
				y++;
			}else{
				magic_square[y-1][x+1] = i;
				y--;
				x++;
			}	
		}
	}
	
	for(y = 0; y < n; y++){
		for(x = 0; x < n; x++){
			printf("%5d", magic_square[y][x]);
		}
		printf("\n");
	}
	
	
	return 0;
}