/******************************************************************************
  题目: 
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/23/2015 
  
******************************************************************************/

#include <stdio.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define	ARRAY_MAX	10

int main(){
	int a[ARRAY_MAX], i;
	
	printf("Enter %d number: ", (int)(sizeof(a) / sizeof(a[0])));
	for(i = 0; i < (int)(sizeof(a) / sizeof(a[0])); i++){
		scanf("%d", &a[i]);
	}
	
	printf("In reverse order:");
	for(i = (int)(sizeof(a) / sizeof(a[0])) - 1; i >= 0; i--){
		printf(" %d", a[i]);
	}
	printf("\n");
	
	return 0;
}