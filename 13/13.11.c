/******************************************************************************
  题目: 计算句子的平均词长。
		
  演示: Enter a sentence: it was deja vu all over again.
		Average word length: 3.4
		number = 24   i = 7
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX 100

double compute_average_word_length(const char *sentence);
int read_line(char str1[], int n);

int main(){
	char sentence[ARRAY_MAX+1];
	
	printf("Enter a sentence: ");
	read_line(sentence, ARRAY_MAX);
	
	printf("Average word length: %.1f\n", compute_average_word_length(sentence));
	
	return 0;
}

double compute_average_word_length(const char *sentence){
	int status = 0, i = 0, number = 0;
	
	while(*sentence){
		if(*sentence == ' ' && status == 1){
			i++;
			status = 0;
		}else{
			number++;
			status = 1;
		}
		
		sentence++;
	}
	
	if(*--sentence != ' '){
		i++;
	}
	
	return (double)number / i;
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