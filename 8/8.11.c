/******************************************************************************
  题目: 把字母格式的电话号码翻译成数值格式。
		
  演示: Enter phone number: 1-800-COL-LECT
		In number form: 1-800-265-5328
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/24/2015 
  
******************************************************************************/

#include <stdio.h>

#define ARRAY_MAX	15

int main(){
	char str1[ARRAY_MAX];
	int i;
	
	printf("Enter phone number: ");
	scanf("%s", str1);
	
	for(i = 0; str1[i] != '\0'; i++){
		if(str1[i] == 'A' || str1[i] == 'B' || str1[i] == 'C'){
			str1[i] = '2';
		}else if(str1[i] == 'D' || str1[i] == 'E' || str1[i] == 'F'){
			str1[i] = '3';
		}else if(str1[i] == 'G' || str1[i] == 'H' || str1[i] == 'I'){
			str1[i] = '4';
		}else if(str1[i] == 'J' || str1[i] == 'K' || str1[i] == 'L'){
			str1[i] = '5';
		}else if(str1[i] == 'M' || str1[i] == 'N' || str1[i] == 'O'){
			str1[i] = '6';
		}else if(str1[i] == 'P' || str1[i] == 'Q' || str1[i] == 'R' || str1[i] == 'S'){
			str1[i] = '7';
		}else if(str1[i] == 'T' || str1[i] == 'U' || str1[i] == 'V'){
			str1[i] = '8';
		}else if(str1[i] == 'W' || str1[i] == 'X' || str1[i] == 'Y' || str1[i] == 'Z'){
			str1[i] = '9';
		}
	}
	
	printf("In number form: %s", str1);
	
	return 0;
}