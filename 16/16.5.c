/******************************************************************************
   显示最近的航班起飞与降落时间.

   (C) Nov 12 2015  Mumu3w@outlook.com

******************************************************************************/


#include <stdio.h>
#include <math.h>

#define ARRAY_MAX (sizeof(flight_schedule)/sizeof(flight_schedule[0]))

struct flight{
	int takeoff;
	int landing;
};

int main(){
	int clock, minute, minute_sum, i, nera;
	struct flight flight_schedule[] = {{8*60+ 0, 10*60+16},
										{9*60+43, 11*60+52},
										{11*60+19, 13*60+31},
										{12*60+47, 15*60+ 0},
										{14*60+ 0, 16*60+ 8},
										{15*60+45, 17*60+55},
										{19*60+00, 21*60+20},
										{21*60+45, 23*60+58}};

	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &clock, &minute);
	
	minute_sum = clock * 60 + minute;
	
	nera = 0;
	for(i = 0; i < ARRAY_MAX; i++){
/*		if(fabs(takeoff[nera]-minute_sum) > fabs(takeoff[i]-minute_sum)){
			nera = i;
		}
*/		if((fabs(minute_sum - flight_schedule[nera].takeoff) > fabs(minute_sum - flight_schedule[i].takeoff)) && (minute_sum - flight_schedule[i].takeoff >= 0)){
			nera = i;
		}
	}
	
	clock = flight_schedule[nera].takeoff/60;
	minute = flight_schedule[nera].takeoff%60;
	if(clock == 12){
		printf("Closest departure time is %d:%.2d p.m., ", clock, minute);
	}else if(clock > 12){
		printf("Closest departure time is %d:%.2d p.m., ", clock-12, minute);
	}else{
		printf("Closest departure time is %d:%.2d a.m., ", clock, minute);
	}
	
	clock = flight_schedule[nera].landing/60;
	minute = flight_schedule[nera].landing%60;
	if(clock == 12){
		printf("arriving at %d:%.2d p.m.\n", clock, minute);
	}else if(clock > 12){
		printf("arriving at %d:%.2d p.m.\n", clock-12, minute);
	}else{
		printf("arriving at %d:%.2d a.m.\n", clock, minute);
	}
	
	return 0;
}