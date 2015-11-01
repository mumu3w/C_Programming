/******************************************************************************
  题目: (练习题14)
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define DAYS	7
#define HOURS	24

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

BOOL search(const int a[], int n, int key);

int main(void){
	int i;
	int temperatures[DAYS][HOURS] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 32}};
	
	for(i = 0; i < DAYS; i++){
		printf("\n%d\n", search(temperatures[i], HOURS, 32));
	}
	
	return 0;
}

BOOL search(const int a[], int n, int key){
	int i;
	BOOL mark = FALSE;

	i = 0;
	while(i < n){
		if(*(a+i) == key){
			mark = TRUE;
		}
		printf(" %d", *(a+i));
		i++;
	}
	
	return mark;
}