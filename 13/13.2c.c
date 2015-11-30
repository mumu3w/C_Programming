/******************************************************************************
  题目: 一年的提醒列表。
		
  演示: Enter day and reminder: 9/12 aaaaaaaaaa
        Enter day and reminder: 9/11 bbbbbbbb
        Enter day and reminder: 7/11 ccccccccccc
        Enter day and reminder: 5/9 ddddddddd
        Enter day and reminder: 0
        
        Day Reminder
          5/9  ddddddddd
          7/11 ccccccccccc
          9/11 bbbbbbbb
          9/12 aaaaaaaaaa
		
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
	char date_str[10], tmp_str[10], msg_str[MSG_LEN+1];
	int dd, mm, i, j, num_remind = 0;
	
	for(;;){
		if(num_remind == MAX_REMIND){
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter day and reminder: ");
		scanf("%2d/", &mm);
		if(mm == 0){
			break;
		}
		scanf("%2d", &dd);
		
		sprintf(tmp_str, "%2d/", mm);
		strcpy(date_str, tmp_str);
		sprintf(tmp_str, "%-2d", dd);
		strcat(date_str, tmp_str);
		
		read_line(msg_str, MSG_LEN);
		for(i = 0; i < num_remind; i++){
			if(strcmp(date_str, reminders[i]) < 0){
				break;
			}
		}
		for(j = num_remind; j > i; j--){
			strcpy(reminders[j], reminders[j-1]);
		}
		
		strcpy(reminders[i], date_str);
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