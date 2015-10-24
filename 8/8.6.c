/******************************************************************************
  题目: 编写一个“B1FF”过滤器，它可以读入用户录入的消息并把此消息翻译成B1FF的表
		达风格。
		
  演示: Enter message: Hey dude, C is rilly cool
		In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/23/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define	ARRAY_MAX	100

int main(){
	int i;
	char str1[ARRAY_MAX];
	
	printf("Enter message: ");
	i = 0;
	while(1){
		if((str1[i] = getchar()) == '\n'){
			str1[i] = '\0';
			break;
		}
		i++;
	}
	
	
	for(i = 0; str1[i] != '\0'; i++){
		str1[i] = toupper(str1[i]);
		if(str1[i] == 'A'){
			str1[i] = '4';
		}else if(str1[i] == 'B'){
			str1[i] = '8';
		}else if(str1[i] == 'E'){
			str1[i] = '3';
		}else if(str1[i] == 'I'){
			str1[i] = '1';
		}else if(str1[i] == 'O'){
			str1[i] = '0';
		}else if(str1[i] == 'S'){
			str1[i] = '5';
		}
	}

	printf("In B1FF-speak: %s!!!!!!!!!!", str1);
	
	return 0;
}