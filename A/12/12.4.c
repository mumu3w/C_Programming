/******************************************************************************
  题目: 检测消息是否是回文.
		
  演示: Enter a message: He lived as a devil, eh?
		Palindrome
		-----------------------------------------------------------------------
		Enter a message: Madam, I am Adam.
		Not a palindrome
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define	MAX_ARRAY	50

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

BOOL palindrome(char str[], int n);

int main(void){
	int i;
	char ch, str1[MAX_ARRAY];
	char *p, *q;
	
	printf("Enter a message: ");
	i = 0;
	while((ch = getchar()) != '\n' && i < MAX_ARRAY){
		*(str1 + i) = ch;
		i++;
	}
	
	if(palindrome(str1, i) == TRUE){
		printf("Palindrome\n");
	}else{
		printf("Not a palindrome\n");
	}
	
	return 0;
}

BOOL palindrome(char str[], int n){
	char *p, *q;
	
	p = &str[n - 1];
	q = &str[0];
	
	do{
		while(toupper(*p) < 'A' || toupper(*p) > 'Z'){
			p--;
		}
		
		while(toupper(*q) < 'A' || toupper(*q) > 'Z'){
			q++;
		}
		
		if(toupper(*p) != toupper(*q)){
			return FALSE;
		}
		
		p--;
		q++;
	}while(p >= &str[0] && q <= &str[n - 1]);
	
	return TRUE;
}