/******************************************************************************
  题目: 找出最大单词和最小单词。当用户输入4个字母的单词时，程序停止读入。
		
  演示: Enter word: dog
		Enter word: zebra
		Enter word: rabbit
		Enter word: catfish
		Enter word: walrus
		Enter word: cat
		Enter word: fish
		
		Smallest word: cat
		Largest word: zebra
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <string.h>

#define WORD_LEN	20

void read_line(char str1[], int n);

int main(void){
	char smallest_word[WORD_LEN + 1];
	char largest_word[WORD_LEN + 1];
	char current_word[WORD_LEN + 1];
	
	printf("Enter word: ");
	read_line(current_word, WORD_LEN);
	strcpy(smallest_word, current_word);
	strcpy(largest_word, current_word);
	
	while(strlen(current_word) != 4){
		printf("Enter word: ");
		read_line(current_word, WORD_LEN);
		if(strcmp(current_word, smallest_word) < 0){
			strcpy(smallest_word, current_word);
		}else if(strcmp(current_word, largest_word) > 0){
			strcpy(largest_word, current_word);
		}
	}
	
	printf("\nSmallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
	
	return 0;
}

void read_line(char str1[], int n){
	int ch, i = 0;
	
	while((ch = getchar()) != '\n'){
		if(i < n){
			str1[i++] = ch;
		}
	}
	
	str1[i] = '\0';
}