/******************************************************************************
  题目: 颠倒句子中单词的顺序.
		
  演示: Enter a sentence: you can cage aswallow can't you?
		Reversal of sentence: you can't aswallow cage can you?
		----------------------------------------------------------------------
		Enter a sentence: go ahead make my day!
		Reversal of sentence: day my make ahead go!
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>

#define	ARRAY_MAX	100

int main(){
	int i, i_tmp, str_len;
	char str1[ARRAY_MAX], ch;
	
	printf("Enter a sentence: ");
	for(i = 0,str_len = 0; 1; i++,str_len++){
		ch = getchar();
		if(ch == '?' || ch == '.'  || ch == '!'){
			*(str1 + i) = '\0';
			break;
		}else{
			*(str1 + i) = ch;
		}
	}

	printf("Reversal of sentence: ");
	for(i = str_len; i >= 0; i--){
		if(i == 0){
			i_tmp = i;
			while(1){
				if(*(str1 + i_tmp) == ' '){
					break;
				}
				putchar(*(str1 + i_tmp));
				i_tmp++;
			}
		}else if(*(str1 + i) == ' '){
			i_tmp = i;
			while(1){
				i_tmp++;
				if(*(str1 + i_tmp) == ' ' || *(str1 + i_tmp) == '\0'){
					putchar(' ');
					break;
				}
				putchar(*(str1 + i_tmp));
			}
		}
	}
	printf("%c\n", ch);
	
	return 0;
}