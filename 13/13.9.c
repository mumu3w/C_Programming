/******************************************************************************
  题目: 统计句子中的元音字母（a e i o u）的个数。
		
  演示: Enter a sentence: and that's the way it is.
		Your sentence contains 6 vowels.
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX 100

int compute_vowel_count(const char *sentence);
int read_line(char str1[], int n);

int main(void){
	char sentence[ARRAY_MAX+1];
	
	printf("Enter a sentence: ");
	read_line(sentence, ARRAY_MAX);

	printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));
	
	return 0;
}

int compute_vowel_count(const char *sentence){
	int i = 0;
	const char *vowel = "AEIOU";
	const char *vowel_tmp;
	
	while(*sentence){
		vowel_tmp = vowel;
		while(*vowel_tmp){
			if(toupper(*sentence) == *vowel_tmp){
				i++;
				break;
			}
			
			vowel_tmp++;
		}
		
		sentence++;
	}

	return i;
}

int read_line(char str1[], int n){
	int ch, i = 0;
	
	while((ch = getchar()) != '\n'){
		if(i < n){
			str1[i++] = ch;
		}
	}
	
	str1[i] = '\0';
	
	return i;
}