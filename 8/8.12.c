/******************************************************************************
  题目: 通过对单词中字母的面值求和计算单词的值。
		
  演示: Enter a word: pitfall
		Scrabble value: 12
		-----------------------------------------------------------------------
		Enter a word: word
		Scrabble value: 8
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/24/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX	26

int main(){             /* {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p, q,r,s,t,u,v,w,x,y, z} */
	int value[ARRAY_MAX] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	char str1[ARRAY_MAX];
	int i, sum = 0;
	
	printf("Enter a word: ");
	scanf("%s", str1);
	
	for(i = 0; str1[i] != '\0'; i++){
		sum += value[toupper(str1[i])-'A'];
	}
	
	printf("Scrabble value: %d", sum);
	
	return 0;
}