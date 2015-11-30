/******************************************************************************
  题目: 通过对单词中字母的面值求和计算单词的值。
		
  演示: Enter a word: pitfall
		Scrabble value: 12
		-----------------------------------------------------------------------
		Enter a word: word
		Scrabble value: 8
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX	100

int compute_scrabble_value(const char *word);

int main(){
	char word[ARRAY_MAX];
	
	printf("Enter a word: ");
	scanf("%s", word);
	printf("Scrabble value: %d", compute_scrabble_value(word));
	
	return 0;
}

int compute_scrabble_value(const char *word){
	int sum = 0;
	int value[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	
	while(*word){
		sum += value[toupper(*word) - 'A'];
		word++;
	}
	
	return sum;
}