/******************************************************************************
  ��Ŀ: Ҫ���û�����һ����λ����Ȼ����ʾ������Ӧ��Ӣ�ĵ���.
		
  ��ʾ: Enter a two-dihit number: 11
		You entered the number eleven
		----------------------------------------------------------------------
		Enter a two-dihit number: 12
		You entered the number twelve
		----------------------------------------------------------------------
		Enter a two-dihit number: 21
		You entered the number twenty-one
		----------------------------------------------------------------------
		Enter a two-dihit number: 99
		You entered the number ninety-nine
		
  ���䣺mumu3w@outlook.com	
  
  ʱ�䣺11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_STR 20

int main(){
	const char *num_10_to_19_str[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
								"sixteen", "seveteen", "eighteen", "nineteen"};
	const char *bit10_str[] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
	const char *bit1_str[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	
	char num_str[MAX_STR];
	
	int number, bit1, bit10;
	
	printf("Enter a two-dihit number: ");
	scanf("%d", &number);
	
	
	
	printf("You entered the number ");
	if(number >= 10 && number < 20){
		bit10 = number % 10;
		strcpy(num_str, num_10_to_19_str[bit10]);
		
	}else{
		bit10 = number / 10;
		bit1 = number % 10;
		
		bit10 -= 2;
		
		strcpy(num_str, bit10_str[bit10]);
		if(bit1 > 0){
			bit1 -= 1;
			strcat(num_str, "-");
			strcat(num_str, bit1_str[bit1]);
		}
		
	}
	printf("%s\n", num_str);
	
	return 0;
}

