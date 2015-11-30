/******************************************************************************
  ��Ŀ: �޸�5.8.c����һ������洢���ʱ�䣬��һ������洢�ִ�ʱ�䣨ʱ����������
		ʾ����ʾ����ҹ��ʼ�ķ���������������һ��ѭ���������ʱ�����飬���ҵ���
		�û�����ʱ����ӽ������ʱ�䡣
		
  ��ʾ: Enter a 24-hour time: 13:15
		Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
		----------------------------------------------------------------------
		Enter a 24-hour time: 18:25
		Closest departure time is 7:00 p.m., arriving at 9:20 p.m.
		
  ���䣺mumu3w@outlook.com	
  
  ʱ�䣺10/24/2015 
  
******************************************************************************/

#include <stdio.h>
#include <math.h>

#define ARRAY_MAX 8

int main(){
	int clock, minute, minute_sum, i, nera;
	int takeoff[ARRAY_MAX] = { 8*60+ 0,  9*60+43, 11*60+19, 12*60+47, 14*60+ 0, 15*60+45, 19*60+00, 21*60+45};
    int landing[ARRAY_MAX] = {10*60+16, 11*60+52, 13*60+31, 15*60+ 0, 16*60+ 8, 17*60+55, 21*60+20, 23*60+58};
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &clock, &minute);
	
	minute_sum = clock * 60 + minute;
	
	nera = 0;
	for(i = 0; i < ARRAY_MAX; i++){
/*		if(fabs(takeoff[nera]-minute_sum) > fabs(takeoff[i]-minute_sum)){
			nera = i;
		}
*/		if((fabs(minute_sum - takeoff[nera]) > fabs(minute_sum - takeoff[i])) && (minute_sum - takeoff[i] >= 0)){
			nera = i;
		}
	}
	
	clock = takeoff[nera]/60;
	minute = takeoff[nera]%60;
	if(clock == 12){
		printf("Closest departure time is %d:%.2d p.m., ", clock, minute);
	}else if(clock > 12){
		printf("Closest departure time is %d:%.2d p.m., ", clock-12, minute);
	}else{
		printf("Closest departure time is %d:%.2d a.m., ", clock, minute);
	}
	
	clock = landing[nera]/60;
	minute = landing[nera]%60;
	if(clock == 12){
		printf("arriving at %d:%.2d p.m.\n", clock, minute);
	}else if(clock > 12){
		printf("arriving at %d:%.2d p.m.\n", clock-12, minute);
	}else{
		printf("arriving at %d:%.2d a.m.\n", clock, minute);
	}
	
	return 0;
}