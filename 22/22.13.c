/******************************************************************************
  Topic: 从文件中读取起飞时间和抵达时间.
  
  
  Demo: >13 22.13.in
		Enter a 24-hour time: 13:15
		Closest departure time is 12:47, arriving at 15:00
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	int take_off_clock, take_off_minute, arrive_clock, arrive_minute;
	int min_take_off_clock, min_take_off_minute, min_arrive_clock, min_arrive_minute;
	int minute_sum1, minute_sum2;
	int	time_diff, min_time_diff;
	int clock, minute;
	FILE *fp;
	
	if(2 != argc){
		fprintf(stderr, "usage: %s data_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "r"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &clock, &minute);
	
	minute_sum1 = clock * 60 + minute;
	min_time_diff = 23 * 60 + 59;
	
	while(4 == fscanf(fp, "%d:%d %d:%d", &take_off_clock, &take_off_minute, &arrive_clock, &arrive_minute)){
		minute_sum2 = take_off_clock * 60 + take_off_minute;
		time_diff = minute_sum1 - minute_sum2;
		
		if(time_diff >= 0 && time_diff < min_time_diff){
			min_take_off_clock = take_off_clock;
			min_take_off_minute = take_off_minute;
			min_arrive_clock = arrive_clock;
			min_arrive_minute = arrive_minute;
			
			min_time_diff = time_diff;
		}
	}
	
	fprintf(stdout, "Closest departure time is %d:%.2d, arriving at %d:%.2d\n", 
				min_take_off_clock, min_take_off_minute, min_arrive_clock, min_arrive_minute);
	
	fclose(fp);
	return 0;
}