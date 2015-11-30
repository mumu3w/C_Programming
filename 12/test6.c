/******************************************************************************
  题目: (练习题13)
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>

#define	MAX_ARRAY	10


int main(void){
	int i;
	double ident[MAX_ARRAY][MAX_ARRAY];
	double *p;
	
	p = &ident[0][0];
	for(i = MAX_ARRAY + 1; p <= &ident[MAX_ARRAY - 1][MAX_ARRAY - 1]; i++){
		if(i != MAX_ARRAY + 1){
			*p++ = 0.0;
		}else{
			*p++ = 1.0;
			i = 0;
		}
	}
	
	p = &ident[0][0];
	i = 1;
	while(p <= &ident[MAX_ARRAY - 1][MAX_ARRAY - 1]){
		printf(" %.2f", *p++);
		if(i % MAX_ARRAY == 0){
			printf("\n");
		}
		i++;
	}
	
	return 0;
}