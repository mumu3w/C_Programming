/******************************************************************************
  Topic: 对逆波兰表达式求值.
  
  
  Demo: >2
		Enter an RPN expression: 1 2 3 * + =
		Value of expression: 7
		Enter an RPN expression: 5 8 * 4 9 - / =
		Value of expression: -8
		Enter an RPN expression: q
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "stackADT2.h"

void m_add(Stack s);	
void m_sub(Stack s);	
void m_mul(Stack s);	
void m_div(Stack s);	
void m_equ(Stack s);	



int main(void){
	char ch = '\0';
	int num;
	Stack s1;
	
	s1 = create(50);
	
	while(1){
		printf("Enter an RPN expression: ");
		do{
			scanf(" %c", &ch);
			num = ch - '0';
			switch(ch){
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':	push(s1, num);	break;
				case '+':	m_add(s1);		break;
				case '-':	m_sub(s1);    break;
				case '*':	m_mul(s1);    break;
				case '/':	m_div(s1);    break;
				case '=':	m_equ(s1);    break;
				default:	exit(0);
			}
		}while(ch != '=');
	}

	return 0;
}

/*
	加法
*/
void m_add(Stack s){
	int num;
	num = pop(s) + pop(s);
	push(s, num);
}

/*
	减法
*/
void m_sub(Stack s){
	int num, num1, num2;
	num1 = pop(s);
	num2 = pop(s);
	num = num2 - num1;
	push(s, num);
}

/*
	乘法
*/
void m_mul(Stack s){
	int num;
	num = pop(s) * pop(s);
	push(s, num);
}

/*
	除法
*/
void m_div(Stack s){
	int num, num1, num2;
	num1 = pop(s);
	if(num1 == 0){
		printf("Zero error\n");
		exit(1);
	}
	num2 = pop(s);
	num = num2 / num1;
	push(s, num);
}

/*
	显示值并清空stack.
*/
void m_equ(Stack s){
	printf("Value of expression: %d\n", pop(s));
	make_empty(s);
}