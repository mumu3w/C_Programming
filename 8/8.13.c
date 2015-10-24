/******************************************************************************
  题目: 根据用户输入的英文名和姓先显示姓氏，其后跟一个逗号，然后显示名的首字母，
		最后加一个点。
		
  演示: Enter a first and last name: Lloyd Fosdick
		You enered the name: Fosdick, L.
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/24/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_MAX 20

int main(){
	char str1[ARRAY_MAX], str2[ARRAY_MAX];
	
	printf("Enter a first and last name: ");
	scanf("%s%s", str1, str2);
	
	str1[1] = '.';
	str1[2] = '\0';
	
	printf("You enered the name: %s, %s\n", str2, str1);
	
	return 0;
}
