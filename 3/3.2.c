/******************************************************************************
  题目: 对用户录入的产品信息进行格式化.
  
  演示：Enter item number: 583
		Enter unit price: 13.5
		Enter purchase date (mm/dd/yyyy): 10/24/2010
		Item            Unit            Purchase
						Price           Date
		583             $  13.50        10/24/2010
		----------------------------------------------------------------------
		Enter item number: 584
		Enter unit price: 14
		Enter purchase date (mm/dd/yyyy): 1/2/2015
		Item            Unit            Purchase
						Price           Date
		584             $  14.00        01/02/2015
		
  邮箱：mumu3w@outlook.com
  
  时间：10/17/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int num, mm, dd, yy;
	float price;
	
	printf("Enter item number: ");
	scanf("%u", &num);
	
	printf("Enter unit price: ");
	scanf("%f", &price);
	
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%u/%u/%u", &mm, &dd, &yy);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("    \t\tPrice\t\tDate\n");
	
	printf("%u\t\t$%7.2f\t%2.2u/%2.2u/%u\n", num, price, mm, dd, yy);
	
	
	return 0;
}