/******************************************************************************
  题目: 每计算24次平方值后暂停。
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int i, n;
	
	printf("This program prints table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	getchar();
	
	for(i = 1; i <= n; i++){
		printf("%10d%20d\n", i, i * i);
		if(i % 24 == 0){
			printf("Press Enter to continue...");
			while(getchar() != '\n'){
				;
			}
		}
		
	}
	
	return 0;
}