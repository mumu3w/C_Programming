/******************************************************************************
   对用户输入的一系列单次排序.

   (C) Nov 17 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS	50
#define WORD_LEN	20

int read_line(char str1[], int n);

int main(void){
	char *words[MAX_WORDS];
	char word[WORD_LEN+1];
	char *temp;
	int i, j, min, num_words = 0;
	
	for(;;){
		if(num_words == MAX_WORDS){
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter word: ");
		read_line(word, WORD_LEN);
		if(strlen(word) == 0){
			break;
		}
		
		words[num_words] = malloc(strlen(word) + 1);
		strcpy(words[num_words], word);
		
		num_words++;
	}
	
	for(i = 1; i < num_words; i++){
		min = i-1;
		for(j = i; j < num_words; j++){
			if(strcmp(words[j], words[min]) < 0){
				min = j;
			}
		}
		temp = words[i-1];
		words[i-1] = words[min];
		words[min] = temp;
	}
	
	printf("\nIn sorted order:");
	for(i = 0; i < num_words; i++){
		printf(" %s", words[i]);
	}
	
	return 0;
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