/******************************************************************************
  题目: 对逆波兰表达式求值。
		
  演示: Enter an RPN expression: 5 8 * 4 9 - / =
		Value of expression: -8
		Enter an RPN expression: 1 2 3 * + =
		Value of expression: 7
		Enter an RPN expression: q
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/08/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void m_add(void);	
void m_sub(void);	
void m_mul(void);	
void m_div(void);	
void m_equ(void);	


int main(void){
	char ch = '\0';
	int num;
	
	make_empty();
	
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
				case '9':	push(num);	break;
				case '+':	m_add();	break;
				case '-':	m_sub();    break;
				case '*':	m_mul();    break;
				case '/':	m_div();    break;
				case '=':	m_equ();    break;
				default:	exit(0);
			}
		}while(ch != '=');
	}

	return 0;
}

/*
	加法
*/
void m_add(void){
	int num;
	num = pop() + pop();
	push(num);
}

/*
	减法
*/
void m_sub(void){
	int num, num1, num2;
	num1 = pop();
	num2 = pop();
	num = num2 - num1;
	push(num);
}

/*
	乘法
*/
void m_mul(void){
	int num;
	num = pop() * pop();
	push(num);
}

/*
	除法
*/
void m_div(void){
	int num, num1, num2;
	num1 = pop();
	if(num1 == 0){
		printf("Zero error\n");
		exit(1);
	}
	num2 = pop();
	num = num2 / num1;
	push(num);
}

/*
	显示值并清空stack.
*/
void m_equ(void){
	printf("Value of expression: %d\n", pop());
	make_empty();
}