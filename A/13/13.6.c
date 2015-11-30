/******************************************************************************
  题目: 核对行星的名字。
		
  演示: planet Jupiter venus Earth fred
		Jupiter is planet 5
		venus is planet 2
		Earth is planet 3
		fred is not a planet
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANTES 9

int name_cmp(const char *str1, const char *str2);

int main(int argc, char *argv[]){
	char *planets[] = {"mercury", "venus", "earth", "mars", "jupiter", "saturn", "uranus", "neptune", "pluto"};
	int i, j;
	
	for(i = 1; i < argc; i++){
		for(j = 0; j < NUM_PLANTES; j++){
			if(name_cmp(argv[i], planets[j]) == 0){
				printf("%s is planet %d\n", argv[i], j+1);
				break;
			}
		}
		if(j == NUM_PLANTES){
			printf("%s is not a planet\n", argv[i]);
		}
	}
	
	return 0;
}

int name_cmp(const char *str1, const char *str2){
	
	while((char)toupper(*str1) == (char)toupper(*str2)){
		if(*str1 == '\0'){
			return 0;
		}
		str1++;
		str2++;
	}
	
	return toupper(*str1) - toupper(*str2);
}