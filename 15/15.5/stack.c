#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


#define STACK_SIZE	100

int contents[STACK_SIZE];
int top = 0;


void make_empty(void){
	top = 0;
}

BOOL is_empty(void){
	return top == 0;
}

BOOL is_full(void){
	return top == STACK_SIZE;
}

void push(int i){
	if(is_full()){
		stack_overflow();
	}else{
		contents[top++] = i;
	}
}

int pop(void){
	if(is_empty()){
		stack_underflow();
	}else{
		return contents[--top];
	}
}

void stack_overflow(){
	printf("Expression is too complex\n");
	exit(0);
}

void stack_underflow(){
	printf("Not enough operands in expression\n");
	exit(0);
}