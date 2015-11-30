/******************************************************************************
  题目: 修改5.5.c，用函数计算所得税的金额。在输入需纳税的所得后，函数返回税金。
		
  演示: Enter a income: 749
		Should pay taxes and fees: 7.49
		-----------------------------------------------------------------------
		Enter a income: 750
		Should pay taxes and fees: 7.52
		-----------------------------------------------------------------------
		Enter a income: 6999
		Should pay taxes and fees: 230.00
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/26/2015 
  
******************************************************************************/

#include <stdio.h>

float taxes(float income);

int main(){
	float income, expense;
	
	printf("Enter a income: ");
	scanf("%f", &income);
	expense = taxes(income);
	
	printf("Should pay taxes and fees: %.2f", expense);
	
	return 0;
}


float taxes(float income){
	float expense;
	
	if(income < 750.00f){
		expense = 0.01f * income;
	}else if(income <= 2250.00f){
		expense = 7.50 + 0.02f * (income - 749.00f);
	}else if(income <= 3750.00f){
		expense = 37.50f + 0.03f * (income - 2249.00f);
	}else if(income <= 5250.00f){
		expense = 82.50f + 0.04f * (income - 3749.00f);
	}else if(income <= 7000.00f){
		expense = 142.50f + 0.05f * (income - 5249.00f);
	}else{
		expense = 230.00f + 0.06f * (income - 6999.00f);
	}
	
	return expense;
}