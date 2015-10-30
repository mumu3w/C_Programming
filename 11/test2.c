/******************************************************************************
  题目: 
		
  演示: hr   13
		min  48
		sec  20
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/29/2015 
  
******************************************************************************/

#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void){
	int hr, min, sec;
	
	split_sec(49700, &hr, &min, &sec);
	printf("hr   %d\n", hr);
	printf("min  %.2d\n", min);
	printf("sec  %.2d\n", sec);
	
	return 0;
}

void split_sec(long total_sec, int *hr, int *min, int *sec){
	*hr = total_sec / 3600;
	*min = (total_sec - *hr * 3600) / 60;
	*sec = total_sec % 60;
}