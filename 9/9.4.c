/******************************************************************************
  题目: 修改8.16.c，调用两次read_word，再调用equal_array，以两次调用read_word
		提到的两个数组作为参数。如果两个数组中的元素相同，equal_array返回true，
		否则返回false。
		
  演示: Enter first word: smartest
		Enter second word: mattress
		The words are anarams.
		-----------------------------------------------------------------------
		Enter first word: dumbest
		Enter second word: stumble
		The words are not anarams.
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/26/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define	ARRAY_MAX	26

void read_word(int counts[]);
BOOL equal_array(int counts1[], int counts2[]);

int main(){
	int counts1[ARRAY_MAX]={0}, counts2[ARRAY_MAX]={0};
	
	printf("Enter first word: ");
	read_word(counts1);
	
	printf("Enter second word: ");
	read_word(counts2);
	
	if(equal_array(counts1, counts2)){
		printf("The words are anarams.\n");
	}else{
		printf("The words are not anarams.\n");
	}
	
	return 0;
}

void read_word(int counts[]){
	char ch;
	
	while((ch = getchar()) != '\n'){
		if(isalpha(ch)){
			ch = tolower(ch);
			counts[ch - 'a']++;
		}
	}
}

BOOL wqual_array(int counts1[], int counts2[]){
	int i;
	
	for(i = 0; i < ARRAY_MAX; i++){
		if(counts1[i] != counts2[i]){
			return FALSE;
		}
	}
	
	return TRUE;
}