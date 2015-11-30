/******************************************************************************
  题目: 要求用户录入股票数量和每股的价格，计算显示经纪人佣金和竞争对手佣金。
		
  演示: Enter the number of stocks: 12000
		Enter the stock price: 200
		Commission: $2415.00
		Competitor: $273.00
		----------------------------------------------------------------------
		Enter the number of stocks: 50000
		Enter the stock price: 2
		Commission: $265.00
		Competitor: $1033.00
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	float commission, competitor, value, price;
	unsigned int quantity;
	
	printf("Enter the number of stocks: ");
	scanf("%u", &quantity);
	printf("Enter the stock price: ");
	scanf("%f", &price);
	
	value = quantity * price;
	/* Competitor */
	if(quantity < 2000){
		competitor = 33.00f + 0.03f * quantity;
	}else if(quantity >= 2000){
		competitor = 33.00f + 0.02f * quantity;
	}
	/* Commission */
	if(value < 2500.00f){
		commission = 30.00f + 0.017f * value;
	}else if(value < 6250.00f){
		commission = 56.00f + 0.0066f * value;
	}else if(value < 20000.00f){
		commission = 76.00f + 0.0034 * value;
	}else if(value < 50000.00f){
		commission = 100.00f + 0.0022 * value;
	}else if(value < 500000.00f){
		commission = 155.00f + 0.0011 * value;
	}else{
		commission = 255.00f + 0.0009 * value;
	}
	
	if(commission < 39.00f){
		commission = 39.00f;
	}
	
	printf("Commission: $%.2f\n", commission);
	printf("Competitor: $%.2f\n", competitor);
	
	return 0;
}