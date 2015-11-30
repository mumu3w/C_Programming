/******************************************************************************
  题目: 用户输入利率和要投资的年数。投资总价值每年计算一次，表格将显示出在输入
		利率和紧随其后的4个更高的利率下投资的总价值。要求每月整合一次利息。
		
  演示: Enter interest rate: 6
		Enter number of years: 5
		
		Years     6%     7%     8%     9%    10%
		  1     106.17 107.23 108.30 109.38 110.47
		  2     112.72 114.98 117.29 119.64 122.04
		  3     119.67 123.29 127.02 130.86 134.82
		  4     127.05 132.21 137.57 143.14 148.94
		  5     134.89 141.76 148.98 156.57 164.53
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/23/2015 
  
******************************************************************************/

#include <stdio.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE	100.00

int main(){
	int i, mm, num_years, year;
	double value[5], low_rate, mm_low_rate, tmp;
	
	printf("Enter interest rate: ");
	scanf("%lf", &low_rate);

	printf("Enter number of years: ");
	scanf("%d", &num_years);
	
	printf("\nYears");
	for(i = 0; i < NUM_RATES; i++){
		printf("%6.0f%%", low_rate+i);
		value[i] = INITIAL_BALANCE;
	}
	printf("\n");
	
	for(year = 1; year <= num_years; year++){
		printf("%3d    ", year);
		for(i = 0; i < NUM_RATES; i++){
			mm_low_rate = (low_rate + i) / 12.00 / 100.0;
			tmp = value[i];
			for(mm = 0; mm < 12; mm++){
				tmp += tmp * mm_low_rate;
			}
			value[i] = tmp;
			printf("%7.2f", value[i]);
		}
		printf("\n");
	}
	
	return 0;
}