/******************************************************************************
  题目: 逆序打印消息.
		
  演示: Enter a message: Don't get mad, get even.
		Reversal is: .neve teg ,dam teg t'noD
		-----------------------------------------------------------------------
		Enter a message: abcdefghijklmnopqrstuvwxyz01234
		Reversal is: 3210zyxwvutsrqponmlkjihgfedcba
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/05/2015 
  
******************************************************************************/

#include <stdio.h>

#define	MAX_ARRAY	80

void reverse(char *message);
int read_line(char str1[], int n);

int main(void){
	char message[MAX_ARRAY+1];
	
	printf("Enter a message: ");
	read_line(message, MAX_ARRAY);
	reverse(message);
	
	printf("Reversal is: %s", message);

	return 0;
}

void reverse(char *message){
	char swap;
	char *start = message, *end;
	while(*message){
		message++;
	}
	end = --message;
	
	while(start < end){
		swap = *end;
		*end = *start;
		*start = swap;
		
		end--;
		start++;
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