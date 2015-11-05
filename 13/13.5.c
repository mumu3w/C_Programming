/******************************************************************************
  题目: 命令行参数求和。
		
  演示: sum 8 24 62
		Total: 94
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int i, sum = 0;
	for(i = 1; i < argc; i++){
		sum += atoi(argv[i]);
	}
	
	printf("Total: %d\n", sum);
	
	return 0;
}