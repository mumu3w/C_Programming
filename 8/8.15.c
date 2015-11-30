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
  
  时间：10/24/2015 
  
******************************************************************************/

#include <stdio.h>


#define	ARRAY_MAX	80

int main(){
	char str1[ARRAY_MAX], ch;
	int n, i = 0;
	
	printf("Enter message to be encrypted: ");
	while((ch = getchar()) != '\n'){
		str1[i] = ch;
		i++;
	}
	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);
	
	printf("Encrypted message: ");
	for(i = 0; str1[i] != '\0'; i++){
		if(str1[i] >= 'a' && str1[i] <= 'z'){
			str1[i] = ((str1[i] - 'a') + n) % 26 + 'a';
		}else if(str1[i] >= 'A' && str1[i] <= 'Z'){
			str1[i] = ((str1[i] - 'A') + n) % 26 + 'A';
		}
		printf("%c", str1[i]);
	}
	printf("\n");
	
	return 0;
}