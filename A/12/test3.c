/******************************************************************************
  题目: (练习题7)
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY 10
#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

BOOL search(const int a[], int n, int key);

int main(void){
	int num[MAX_ARRAY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("%d\n", search(num, MAX_ARRAY, 10));
	
	return 0;
}

BOOL search(const int a[], int n, int key){
	int i;

	i = 0;
	while(i < n){
		if(*(a+i) == key){
			return TRUE;
		}
		i++;
	}
	
	return FALSE;
}