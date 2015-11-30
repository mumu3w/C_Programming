/******************************************************************************
  题目: 测试两个单词是否为变位词（相同字母的重新排列）
		
  演示: Enter first word: smartest
		Enter second word: mattress
		The words are anarams.
		----------------------------------------------------------------------
		Enter first word: dumbest
		Enter second word: stumble
		The words are not anarams.
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/05/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define FALSE	0
#define TRUE	1
typedef	int BOOL;

#define	ARRAY_MAX	26
#define STR_MAX	80


BOOL are_anagrams(const char *word1, const char *word2);
int read_line(char str1[], int n);

int main(){
	char word1[STR_MAX+1], word2[STR_MAX+1];
	
	printf("Enter first word: ");
	read_line(word1, STR_MAX);
	
	printf("Enter second word: ");
	read_line(word2, STR_MAX);
	
	if(are_anagrams(word1, word2)){
		printf("The words are anarams.\n");
	}else{
		printf("The words are not anarams.\n");
	}
	
	return 0;
}

BOOL are_anagrams(const char *word1, const char *word2){
	int mark[ARRAY_MAX] = {0}, i = 0, sum = 0;
	
	while(*word1){
		if(isalpha(*word1)){
			mark[tolower(*word1) - 'a']++;
		}
		word1++;
	}
	
	while(*word2){
		if(isalpha(*word2)){
			mark[tolower(*word2) - 'a']--;
		}
		word2++;
	}
	
	for(i = 0; i < ARRAY_MAX; i++){
		if(mark[i] < 0){
			sum = 1;
			break;
		}
		sum += mark[i];
	}
	
	if(sum == 0){
		return TRUE;
	}else{
		return FALSE;
	}
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