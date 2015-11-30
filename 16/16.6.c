/******************************************************************************
   提示用户输入两个日期，然后显示哪一个日期更早.

   (C) Nov 12 2015  Mumu3w@outlook.com

******************************************************************************/


#include <stdio.h>
#include <math.h>

struct date{
	int month, day, year;
};

#define	MAX_MONTH	12

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);


int main(){
	struct date d1, d2;
	
	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
	
	if((compare_dates(d1, d2) == -1)){
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
	}else{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
	}
	
	return 0;
}

int day_of_year(struct date d){
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

int compare_dates(struct date d1, struct date d2){
	int days1, days2;
	
	if((d1.year - d2.year) < 0){
		return -1;
	}else if((d1.year - d2.year) > 0){
		return 1;
	}
	
	days1 = day_of_year(d1);
	days2 = day_of_year(d2);


	if((days1 - days2) < 0){
		return -1;
	}else if((days1 - days2) > 0){
		return 1;
	}else{
		return 0;
	}
}