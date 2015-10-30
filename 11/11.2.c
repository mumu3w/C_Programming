/******************************************************************************
  题目: 要求用户输入一个时间。程序选择起飞时间与用户输入做接近的航班，显示出相
		应的起飞时间和抵达时间.
		
  演示: Enter a 24-hour time: 13:15
		Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
		-----------------------------------------------------------------------
		Enter a 24-hour time: 18:25
		Closest departure time is 3:45 p.m., arriving at 5:55 p.m.
		-----------------------------------------------------------------------
		Enter a 24-hour time: 15:31
		Closest departure time is 2:00 p.m., arriving at 4:08 p.m.
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/30/2015 
  
******************************************************************************/

#include <stdio.h>
#include <math.h>

#define ARRAY_MAX 8

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);

int main(){
	int clock, minute, desired_time;
	int departure_time, arrival_time;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &clock, &minute);
	
	desired_time = clock * 60 + minute;
	
	find_closest_flight(desired_time, &departure_time, &arrival_time);
	
	clock = departure_time / 60;
	minute = departure_time % 60;
	if(clock == 12){
		printf("Closest departure time is %d:%.2d p.m., ", clock, minute);
	}else if(clock > 12){
		printf("Closest departure time is %d:%.2d p.m., ", clock-12, minute);
	}else{
		printf("Closest departure time is %d:%.2d a.m., ", clock, minute);
	}
	
	clock = arrival_time / 60;
	minute = arrival_time % 60;
	if(clock == 12){
		printf("arriving at %d:%.2d p.m.\n", clock, minute);
	}else if(clock > 12){
		printf("arriving at %d:%.2d p.m.\n", clock-12, minute);
	}else{
		printf("arriving at %d:%.2d a.m.\n", clock, minute);
	}
	
	return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time){
	int i, nera;
	int takeoff[ARRAY_MAX] = { 8*60+ 0,  9*60+43, 11*60+19, 12*60+47, 14*60+ 0, 15*60+45, 19*60+00, 21*60+45};
    int landing[ARRAY_MAX] = {10*60+16, 11*60+52, 13*60+31, 15*60+ 0, 16*60+ 8, 17*60+55, 21*60+20, 23*60+58};
	
	for(i = 0, nera = 0; i < ARRAY_MAX; i++){
		if((fabs(desired_time - takeoff[nera]) > fabs(desired_time - takeoff[i])) && (desired_time - takeoff[i] >= 0)){
			nera = i;
		}
	}
	
	*departure_time = takeoff[nera];
	*arrival_time = landing[nera];
}