/******************************************************************************
  题目: 计算第一、第二、第三个月还贷后剩余的贷款金额。修改程序，要求用户输入还
		贷的次数并显示每次还贷后剩余的贷款金额。
		
  演示: Enter amount of loan: 20000
		Enter interest rate: 6.0
		Enter monthly payment: 386.66
		Enter repayment number: 3
		Residual load amount: 19713.34
		Residual load amount: 19425.25
		Residual load amount: 19135.71
		----------------------------------------------------------------------
		Enter amount of loan: 50000
		Enter interest rate: 6.0
		Enter monthly payment: 400
		Enter repayment number: 5
		Residual load amount: 49850.00
		Residual load amount: 49699.25
		Residual load amount: 49547.75
		Residual load amount: 49395.48
		Residual load amount: 49242.46
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	float amount, rate, payment;
	int i, n;
	
	printf("Enter amount of loan: ");
	scanf("%f", &amount);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	
	printf("Enter repayment number: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		amount = amount * (1 + rate / 12 / 100) - payment;
		printf("Residual load amount: %.2f\n", amount);
	}
	
	return 0;
}