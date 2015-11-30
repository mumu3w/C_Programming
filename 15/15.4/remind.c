/******************************************************************************
  题目: 显示一个月的提醒列表。
		
  演示: Enter day and reminder: 24 Susan's birthday
		Enter day and reminder: 5 6:00 - Dinner with Marge and Russ
		Enter day and reminder: 26 Movie - "Chinatown"
		Enter day and reminder: 7 10:30 - Dental appointment
		Enter day and reminder: 12 Movie - "Dazed and Confused"
		Enter day and reminder: -1 Movie - "Dazed and Confused"
		Day error: 31 < day < 0
		Enter day and reminder: 5 Saturday class
		Enter day and reminder: 12 Saturday class
		Enter day and reminder: 0
		Day Reminder
		  5 Saturday class
		  5 6:00 - Dinner with Marge and Russ
		  7 10:30 - Dental appointment
		 12 Saturday class
		 12 Movie - "Dazed and Confused"
		 24 Susan's birthday
		 26 Movie - "Chinatown"
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/08/2015 
  
******************************************************************************/

#include <stdio.h>
#include <string.h>
#include "read_line.h"


#define MAX_REMIND	50
#define MSG_LEN		60

int read_line(char str1[], int n);

int main(void){
	char reminders[MAX_REMIND][MSG_LEN+3];
	char day_str[3], msg_str[MSG_LEN+1];
	int day, i, j, num_remind = 0;
	
	for(;;){
		if(num_remind == MAX_REMIND){
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter day and reminder: ");
		scanf("%2d", &day);
		if(day < 0 || day > 31){
			printf("Day error: 31 < day < 0\n");
			read_line(msg_str, MSG_LEN);/* Clear the cache! */
			continue;
		}else if(day == 0){
			break;
		}
		
		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);
		for(i = 0; i < num_remind; i++){
			if(strcmp(day_str, reminders[i]) < 0){
				break;
			}
		}
		for(j = num_remind; j > i; j--){
			strcpy(reminders[j], reminders[j-1]);
		}
		
		strcpy(reminders[i], day_str);
		strcat(reminders[i], msg_str);
		
		num_remind++;
	}
	
	printf("\nDay Reminder\n");
	for(i = 0; i < num_remind; i++){
		printf(" %s\n", reminders[i]);
	}
	
	return 0;
}