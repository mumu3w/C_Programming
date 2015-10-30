/******************************************************************************
  题目: 
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/29/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define MAX_DIGITS	10

BOOL segments[10][7] = {{1,1,1,1,1,1,0},
						{0,1,1},
						{1,1,0,1,1,0,1},
						{1,1,1,1,0,0,1},
						{0,1,1,0,0,1,1},
						{1,0,1,1,0,1,1},
						{1,0,1,1,1,1,1},
						{1,1,1},
						{1,1,1,1,1,1,1},
						{1,1,1,1,0,1,1}};
						
char digits[3][MAX_DIGITS * 4] = {{0}};

void clear_digits_array(void);
void process_digits(int digit, int position);
void print_digtis_array(void);

int main(void){
	int i;
	char ch;
	
	clear_digits_array();
	
	printf("Enter a number: ");
	i = 0;
/*
	while(i < MAX_DIGITS){
		ch = getchar();
		if(ch >= '0' && ch <= '9'){
			process_digits((int)ch - '0', i);
			i++;
		}
	}
*/
	while((ch = getchar()) != EOF && ch != '\n'){
		if(i < MAX_DIGITS && ch >= '0' && ch <= '9'){
			process_digits(ch - '0', i);
			i++;
		}
	}
	
	print_digtis_array();
	
	return 0;
}

void process_digits(int digit, int position){
	if(segments[digit][0] == TRUE){
		digits[0][position * 4 + 1] = '_';
	}
	if(segments[digit][1] == TRUE){
		digits[1][position * 4 + 2] = '|';
	}
	if(segments[digit][2] == TRUE){
		digits[2][position * 4 + 2] = '|';
	}
	if(segments[digit][3] == TRUE){
		digits[2][position * 4 + 1] = '_';
	}
	if(segments[digit][4] == TRUE){
		digits[2][position * 4 + 0] = '|';
	}
	if(segments[digit][5] == TRUE){
		digits[1][position * 4 + 0] = '|';
	}
	if(segments[digit][6] == TRUE){
		digits[1][position * 4 + 1] = '_';
	}
}

void clear_digits_array(void){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < MAX_DIGITS * 4; j++){
			digits[i][j] = ' ';
		}
	}
}

void print_digtis_array(void){
	int i, j;
	for(i = 0; i < 3; i++){
		for(j = 0; j < MAX_DIGITS * 4; j++){
			printf("%c", digits[i][j]);
		}
		printf("\n");
	}
}