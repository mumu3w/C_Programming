/******************************************************************************
  题目: 要求用户输入一个两位数，然后显示该数对应的英文单词.
		
  演示: Enter a two-dihit number: 11
		You entered the number eleven
		----------------------------------------------------------------------
		Enter a two-dihit number: 12
		You entered the number twelve
		----------------------------------------------------------------------
		Enter a two-dihit number: 21
		You entered the number twenty-one
		----------------------------------------------------------------------
		Enter a two-dihit number: 99
		You entered the number ninety-nine
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/18/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int number, bit1, bit10;
	
	printf("Enter a two-dihit number: ");
	scanf("%d", &number);
	
	bit10 = number / 10;
	bit1 = number % 10;
	
	printf("You entered the number ");
	if(number < 20){
		switch(number){
			case 10:	printf("ten\n");
						break;
			case 11:	printf("eleven\n");
						break;
			case 12:	printf("twelve\n");
						break;
			case 13:	printf("thirteen\n");
						break;
			case 14:	printf("fourteen\n");
						break;
			case 15:	printf("fifteen\n");
						break;
			case 16:	printf("sixteen\n");
						break;
			case 17:	printf("seveteen\n");
						break;
			case 18:	printf("eighteen\n");
						break;
			case 19:	printf("nineteen\n");
						break;
			default:    printf("error\n");
						break;
		}
	}else{
		switch(bit10){
			case 9:		printf("ninety");
						break;
			case 8:		printf("eighty");
							break;
			case 7:		printf("seventy");
							break;
			case 6:		printf("sixty");
							break;
			case 5:		printf("fifty");
							break;
			case 4:		printf("forty");
							break;
			case 3:		printf("thirty");
							break;
			case 2:		printf("twenty");
						break;
		}
		switch(bit1){
			case 9:		printf("-nine\n");
						break;
			case 8:		printf("-eight\n");
							break;
			case 7:		printf("-seven\n");
							break;
			case 6:		printf("-six\n");
							break;
			case 5:		printf("-five\n");
							break;
			case 4:		printf("-four\n");
							break;
			case 3:		printf("-three\n");
							break;
			case 2:		printf("-two\n");
						break;
			case 1:		printf("-one\n");
						break;
			case 0:	
						break;			
		}
	}
	
	
	return 0;
}

