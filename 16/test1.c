/******************************************************************************
   练习题(16.5)
   
   (C) Nov 09 2015  Mumu3w@outlook.com

******************************************************************************/


#include <stdio.h>

#define DEBUG

#define	MAX_MONTH	12

typedef struct{
	int month, day, year;
}date;


int day_of_year(date d);
int compare_dates(date d1, date d2);


int main(void){
	date d1 = {12, 31, 2012}, d2 = {12, 31, 2013};

#ifdef DEBUG	
	printf("%d %d %d\n", d1.month, d1.day, d1.year);
	printf("%d %d %d\n", d2.month, d2.day, d2.year);
#endif
	
	if(compare_dates(d1, d2) == -1){
		printf("before.");
	}else if(compare_dates(d1, d2) == 1){
		printf("later.");
	}else{
		printf("identical.");
	}
	
	return 0;
}

int day_of_year(date d){
	int i, j, days = 0;
	int mm[MAX_MONTH] = {0,31,28,31,30,31,30,31,31,30,31,30};
	
	if((d.year%400 == 0) || (d.year%4 == 0 && d.year%100 != 0)){
		mm[2] = 29;
	}
	
	for(i = d.month - 1; i >= 0; i--){
		days += mm[i];
	}
	
	return days + d.day;
}

int compare_dates(date d1, date d2){
	int days1, days2;
	
	if((d1.year - d2.year) < 0){
		return -1;
	}else if((d1.year - d2.year) > 0){
		return 1;
	}
	
	days1 = day_of_year(d1);
	days2 = day_of_year(d2);

#ifdef DEBUG	
	printf("days1 = %d\n", days1);
	printf("days2 = %d\n", days2);
#endif

	if((days1 - days2) < 0){
		return -1;
	}else if((days1 - days2) > 0){
		return 1;
	}else{
		return 0;
	}
}