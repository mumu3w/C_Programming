/******************************************************************************
  题目: 逆序输出命令行参数。
		
  演示: reverse void and null
		null and void
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>

int main(int argc, char *argv[]){
	int i;
	for(i = argc - 1; i > 0; i--){
		printf("%s ", argv[i]);
	}
	
	printf("\n");
	
	return 0;
}