/******************************************************************************
  题目: 通过对单词中字母的面值求和计算单词的值。
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX	100

int main(){
	char str1[ARRAY_MAX];
	int i, sum = 0;
	
	printf("Enter a word: ");
	scanf("%s", str1);
	
	for(i = 0; str1[i] != '\0'; i++){
		if(toupper(str1[i]) == 'A' || toupper(str1[i]) == 'E' || toupper(str1[i]) == 'I' \
			|| toupper(str1[i]) == 'L' || toupper(str1[i]) == 'N' || toupper(str1[i]) == 'O' \
			|| toupper(str1[i]) == 'R' || toupper(str1[i]) == 'S' || toupper(str1[i]) == 'T' \
			|| toupper(str1[i]) == 'U'){
				
			sum += 1;
			
		}else if(toupper(str1[i]) == 'D' || toupper(str1[i]) == 'G'){
			
			sum += 2;
			
		}else if(toupper(str1[i]) == 'B' || toupper(str1[i]) == 'C' || toupper(str1[i]) == 'M' \
				|| toupper(str1[i]) == 'P'){
					
			sum += 3;
			
		}else if(toupper(str1[i]) == 'F' || toupper(str1[i]) == 'H' || toupper(str1[i]) == 'V' \
				|| toupper(str1[i]) == 'W' || toupper(str1[i]) == 'Y'){
					
			sum += 4;
			
		}else if(toupper(str1[i]) == 'K'){
			
			sum += 5;
			
		}else if(toupper(str1[i]) == 'J' || toupper(str1[i]) == 'X'){
			
			sum += 8;
			
		}else if(toupper(str1[i]) == 'Q' || toupper(str1[i]) == 'Z'){
			
			sum += 10;
			
		}
	}
	
	printf("Scrabble value: %d", sum);
	
	return 0;
}