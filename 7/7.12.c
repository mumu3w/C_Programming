/******************************************************************************
  题目: 对表达式求值。表达式按从左到右求值（所有运算符优先级一样）。
		
  演示: Enter an expression: 1+2.5*3
		Value of expression: 10.5
		----------------------------------------------------------------------
		Enter an expression: 1+1*2-4/1
		Value of expression: 0.0
		----------------------------------------------------------------------
		Enter an expression: 5-4+6*4/3
		Value of expression: 9.3
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX 100

int main(){
	float sum, number1, number2;
	char ch;
	
	printf("Enter an expression: ");
	scanf("%f", &number1);
	while((ch = getchar()) != '\n'){
		scanf("%f", &number2);
		
		if(ch == '+'){
			sum = number1 + number2;
		}else if(ch == '-'){
			sum = number1 - number2;
		}else if(ch == '*'){
			sum = number1 * number2;
		}else if(ch == '/'){
			sum = number1 / number2;
		}
		
		number1 = sum;
	}
	
	printf("Value of expression: %.1f\n", sum);
	
	return 0;
}