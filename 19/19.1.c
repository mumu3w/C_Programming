/******************************************************************************
  Topic: 要求用户输入一串圆括号或花括号,然后指出它们之间的嵌套是否正确.
  
  
  Demo: >1
		Enter parenteses and/or braces: ((){}{()})
		Parenteses/braces are nested properly
		-----------------------------------------------------------------------
		Enter parenteses and/or braces: )
		Error in pop: stack is empty.
		-----------------------------------------------------------------------
		Enter parenteses and/or braces: (((((
		Parenteses/braces are nested failure
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "stackADT2.h"


int main(void){
	int tmp, ch;
	Stack s1;
	
	s1 = create(50);
	
	printf("Enter parenteses and/or braces: ");
	while((ch = getchar()) != '\n'){
		if(ch == ')' || ch == '}'){
			tmp = pop(s1);
			if('(' != tmp && '{' != tmp){
				push(s1, tmp);
			}
		}else{
			push(s1, ch);
		}
	}
	
	if(is_empty(s1)){
		printf("Parenteses/braces are nested properly\n");
	}else{
		printf("Parenteses/braces are nested failure\n");
	}
	
	destroy(s1);
	return 0;
}