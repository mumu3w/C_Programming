/******************************************************************************
  题目: 根据用户输入的英文名和姓先显示姓氏，其后跟一个逗号，然后显示名的首字母，
		最后加一个点。
		
  演示: Enter a first and last name: Lloyd Fosdick
		Fosdick, L.
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define ARRAY_MAX 100

int read_line(char str1[], int n);
void reverse_name(char *name);

int main(){
	char name[ARRAY_MAX+1];
	
	printf("Enter a first and last name: ");
	read_line(name, ARRAY_MAX);

	reverse_name(name);
	
	printf("%s\n", name);
	
	return 0;
}

void reverse_name(char *name){
	char str1[ARRAY_MAX] = {'\0'};
	char str2[3] = {'\0'};
	char *name_tmp = name;
	int i;

	while(*name_tmp){
		if(*name_tmp == ' '){
			name_tmp++;
			strcpy(str1, name_tmp);
			break;
		}
		
		name_tmp++;
	}
	
	strcat(str1, ", ");
	str2[0] = *name;
	str2[1] = '.';
	strcat(str1, str2);
	strcpy(name, str1);
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