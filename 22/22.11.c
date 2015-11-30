/******************************************************************************
   从命令行读取日期并显示。

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	char *month_str[] = {"January", "February", "March", 
							"April", "May", "June", 
							"July", "August", "September", 
							"October", "November", "December"};
	int month, day, year;
	
	if(2 != argc){
		fprintf(stderr, "usage: %s xx-xx-xxxx(xx/xx/xxxx)\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if(3 == sscanf(argv[1], "%d-%d-%d", &month, &day, &year)){
		fprintf(stdout, "%s %d, %d\n", month_str[month-1], day, year);
	}else if(3 == sscanf(argv[1], "%d/%d/%d", &month, &day, &year)){
		fprintf(stdout, "%s %d, %d\n", month_str[month-1], day, year);
	}else{
		fprintf(stderr, "Date not in the proper form\n");
	}
	
	return 0;
}