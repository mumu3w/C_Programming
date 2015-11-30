/******************************************************************************
  题目: 要求用户录入股票价格，计算显示经纪人佣金；用户可以输入多笔交易并且程序
		可以计算每次的佣金.
		
  演示: Enter value of trade: 30000
		Commission: $166.00
		----------------------------------------------------------------------
		Enter value of trade: 20000
		Commission: $144.00
		----------------------------------------------------------------------		
		Enter value of trade: 0
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	float commission, value;
	
	for(;;){
		printf("Enter value of trade: ");
		scanf("%f", &value);
		
		if(value <= 0){
			break;
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
		
		printf("Commission: $%.2f\n\n", commission);
	}

	
	return 0;
}