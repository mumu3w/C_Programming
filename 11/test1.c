/******************************************************************************
  题目: 
		
  演示: i = 123
		i = 123
		i = 123
		i address = 000000000024FE4C
		i address = 000000000024FE4C
		i address = 000000000024FE4C
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/29/2015 
  
******************************************************************************/

#include <stdio.h>

int main(void){
	int i, *p_to_i;
	i = 123;
	p_to_i = &i;
	
	printf("i = %d\n", i);
	printf("i = %d\n", *&i);
	printf("i = %d\n", *p_to_i);
	printf("i address = %p\n", &i);
	printf("i address = %p\n", p_to_i);
	printf("i address = %p\n", *&p_to_i);
	
	
	return 0;
}