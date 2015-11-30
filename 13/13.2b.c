/******************************************************************************
  题目: 显示一个月的提醒列表，加入时间。
		
  演示: Enter day and reminder: 1 2:20 a
        Enter day and reminder: 5 3:50 b
        Enter day and reminder: 5 2:49 c
        Enter day and reminder: 3 13:15 d
        Enter day and reminder: 0
        
        Day Reminder
          1  2:20 a
          3 13:15 d
          5  2:49 c
          5  3:50 b
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <string.h>

#define MAX_REMIND	50
#define MSG_LEN		60

int read_line(char str1[], int n);

int main(void){
	char reminders[MAX_REMIND][MSG_LEN+3];
	char time_str[10], tmp_str[10], msg_str[MSG_LEN+1];
	int day, hour, min, i, j, num_remind = 0;
	
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
		scanf("%2d:%2d", &hour, &min);
		
		sprintf(tmp_str, "%2d", day);
		strcpy(time_str, tmp_str);
		sprintf(tmp_str, " %2d", hour);
		strcat(time_str, tmp_str);
		sprintf(tmp_str, ":%2d", min);
		strcat(time_str, tmp_str);
		
		read_line(msg_str, MSG_LEN);
		for(i = 0; i < num_remind; i++){
			if(strcmp(time_str, reminders[i]) < 0){
				break;
			}
		}
		for(j = num_remind; j > i; j--){
			strcpy(reminders[j], reminders[j-1]);
		}
		
		strcpy(reminders[i], time_str);
		strcat(reminders[i], msg_str);
		
		num_remind++;
	}
	
	printf("\nDay Reminder\n");
	for(i = 0; i < num_remind; i++){
		printf(" %s\n", reminders[i]);
	}
	
	return 0;
}

int read_line(char str1[], int n){
	int ch, i = 0;
	
	while((ch = getchar()) != '\n'){
		if(i < n){
			str1[i++] = ch;
		}
	}
	
	str1[i] = '\0';
	return i;
}