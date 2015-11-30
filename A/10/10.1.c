/******************************************************************************
  题目: 要求用户输入一串圆括号或花括号，然后指出它们之间的嵌套是否正确。
		
  演示: Enter parenteses and/or braces: ((){}{()})
		Parenteses/braces are nested properly
		-----------------------------------------------------------------------
		Enter parenteses and/or braces: )
		Stack overflow
		-----------------------------------------------------------------------
		Enter parenteses and/or braces: (((((
		Parenteses/braces are nested failure
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/27/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE	100
#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
BOOL is_empty(void);
BOOL is_full(void);
void push(char c);
char pop(void);
void stack_overflow();
void stack_underflow();


int main(void){
	char tmp, ch;
	
	make_empty();
	
	printf("Enter parenteses and/or braces: ");
	while((ch = getchar()) != '\n'){
		if(ch == ')' || ch == '}'){
			tmp = pop();
			if('(' != tmp && '{' != tmp){
				push(tmp);
			}
		}else{
			push(ch);
		}
	}
	
	if(is_empty()){
		printf("Parenteses/braces are nested properly\n");
	}else{
		printf("Parenteses/braces are nested failure\n");
	}
	
	return 0;
}

void make_empty(void){
	top = 0;
}

BOOL is_empty(void){
	return top == 0;
}

BOOL is_full(void){
	return top == STACK_SIZE;
}

void push(char c){
	if(is_full()){
		stack_overflow();
	}else{
		contents[top++] = c;
	}
}

char pop(void){
	if(is_empty()){
		stack_underflow();
	}else{
		return contents[--top];
	}
}

void stack_overflow(){
	printf("Stack overflow.\n");
	exit(1);
}

void stack_underflow(){
	printf("Stack overflow.\n");
	exit(1);
}