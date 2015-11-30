/******************************************************************************
  题目: 用凯撒加密方法对消息进行加密。用户输入待加密的消息和位移计数。该加密方
		法把一条消息的每个字母用字母表中固定距离之后的那个字母来代替。
		
  演示: Enter message to be encrypted: Go ahead, make my day.
		Enter shift amount (1-25): 3
		Encrypted message: Jr dkhdg, pdnh pb gdb.
		----------------------------------------------------------------------
		Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
		Enter shift amount (1-25): 23
		Encrypted message: Go ahead, make my day.
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/05/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define	ARRAY_MAX	80

void encrypt(char *message, int shift);
int read_line(char str1[], int n);

int main(){
	char message[ARRAY_MAX+1], ch;
	int shift;
	
	printf("Enter message to be encrypted: ");
	read_line(message, ARRAY_MAX);
	
	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift);
	
	printf("Encrypted message: ");
	encrypt(message, shift);

	printf("%s\n", message);
	
	return 0;
}

void encrypt(char *message, int shift){
	
	while(*message){
		if(islower(*message)){
			*message = ((*message - 'a') + shift) % 26 + 'a';
		}else if(isupper(*message)){
			*message = ((*message - 'A') + shift) % 26 + 'A';
		}
		message++;
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