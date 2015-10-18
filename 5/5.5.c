/******************************************************************************
  题目: 要求用户录入需要纳税的收入，然后显示税金.
		
  演示: Enter a income: 749
		Should pay taxes and fees: 7.490000
		----------------------------------------------------------------------
		Enter a income: 750
		Should pay taxes and fees: 7.520000
		----------------------------------------------------------------------		
		Enter a income: 6999
		Should pay taxes and fees: 230.000000
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	float income, expense;
	
	printf("Enter a income: ");
	scanf("%f", &income);
	
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
	
	printf("Should pay taxes and fees: %.2f", expense);
	
	return 0;
}