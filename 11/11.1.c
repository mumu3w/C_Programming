/******************************************************************************
  题目: 要求用户输入一个美金数量，然后显示出如何用最少的20美元、10美元、5美元和
		1美元来支付。
		
  演示: Enter a dollar amount: 93
		$20 bills: 4
		$10 bills: 1
		 $5 bills: 0
		 $1 bills: 3
		-----------------------------------------------------------------------
		Enter a dollar amount: 82
		$20 bills: 4
		$10 bills: 0
		 $5 bills: 0
		 $1 bills: 2
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/30/2015 
  
******************************************************************************/

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void){
	int dollars, twenties, tens, fives, ones;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &dollars);
	pay_amount(dollars, &twenties, &tens, &fives, &ones);
	
	printf("$20 bills: %d\n", twenties);
	printf("$10 bills: %d\n", tens);
	printf(" $5 bills: %d\n", fives);
	printf(" $1 bills: %d\n", ones);
	
	return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones){
	*twenties = dollars / 20;
	*tens = (dollars - *twenties *20) / 10;
	*fives = (dollars - *twenties * 20 - *tens * 10) / 5;
	*ones = dollars % 10;
}