/******************************************************************************
  题目: 检测消息是否是回文.
		
  演示: Enter a message: He lived as a devil, eh?
		Palindrome
		-----------------------------------------------------------------------
		Enter a message: Madam, I am Adam.
		Not a palindrome
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/05/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define	MAX_ARRAY	50

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

BOOL is_palindrome(const char *message);
int read_line(char str1[], int n);

int main(void){
	char message[MAX_ARRAY+1];
	
	printf("Enter a message: ");
	read_line(message, MAX_ARRAY);
	
	if(is_palindrome(message) == TRUE){
		printf("Palindrome\n");
	}else{
		printf("Not a palindrome\n");
	}
	
	return 0;
}

BOOL is_palindrome(const char *message){
	const char *start = message, *end;
	
	while(*message){
		message++;
	}
	end = --message;
	
	do{
		while(!(isalpha(*end))){
			end--;
		}
		
		while(!(isalpha(*start))){
			start++;
		}
		
		if(toupper(*end) != toupper(*start)){
			return FALSE;
		}
		
		end--;
		start++;
	}while(start <= end);
	
	return TRUE;
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