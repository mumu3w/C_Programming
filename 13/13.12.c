/******************************************************************************
  题目: 颠倒句子中单词的顺序.
		
  演示: Enter a sentence: you can cage aswallow can't you?
		Reversal of sentence: you can't aswallow cage can you?
		----------------------------------------------------------------------
		Enter a sentence: go ahead make my day!
		Reversal of sentence: day my make ahead go!
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>

#define	WORDS	30
#define WORD_LEN 2015

int main(void){
	char word[WORDS][WORD_LEN+1] = {"\0"};
	int i, j;
	char ch;
	
	printf("Enter a sentence: ");
	for(i = 0; i < WORDS; i++){
		for(j = 0; j < WORD_LEN;){
			ch = getchar();
			if(ch == ' ' && j != 0){
				if(i != 0){
					word[i][j] = ch;
				}
				break;
			}else if(ch == '?' || ch == '.' || ch == '!'){
				word[i][j] = ' ';
				goto jump_loop;
			}else{
				word[i][j] = ch;
				j++;
			}
		}
	}
	
	jump_loop:
	printf("Reversal of sentence: ");
	for(; i >=0; i--){
		printf("%s", word[i]);
	}
	printf("%c\n", ch);
	
	return 0;
}