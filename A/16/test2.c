/******************************************************************************
   练习题(16.6)
   
   (C) Nov 09 2015  Mumu3w@outlook.com

******************************************************************************/
#include <stdio.h>

typedef struct{
	int hours, minutes, seconds;
}time;


time split_time(long total_seconds);


int main(void){
	time time1;
	
	time1 = split_time(60L);
	printf("hours = %.2d\n", time1.hours);
	printf("minutes = %.2d\n", time1.minutes);
	printf("seconds = %.2d\n", time1.seconds);
	
	return 0;
}

time split_time(long total_seconds){
	time time1;
	
	total_seconds = total_seconds % 86400;
	
	time1.hours = total_seconds / 3600;
	time1.minutes = (total_seconds - time1.hours * 3600) / 60;
	time1.seconds = (total_seconds - time1.hours * 3600) % 60;
	
	return time1;
	
}