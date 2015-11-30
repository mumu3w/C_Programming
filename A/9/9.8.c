/******************************************************************************
  题目: 模拟掷骰子的游戏（两个骰子）。第一次掷的时候，如果点数之和为7或11则胜利；
		如果点数之和为2、3、12则落败；其他情况下的点数之和称谓“目标”，游戏继续。
		在后续的投掷中，如果玩家再次掷出“目标”点数则获胜，掷出7则落败，其它情况
		都忽略，游戏继续。每局游戏结束时，程序询问用户是否再玩一次，如果用户输入
		的回答不是y，程序会显示胜败点数的次数然后终止。
		
  演示: You rolled: 10
		You point: 12
		You rolled: 4
		You rolled: 3
		You rolled: 7
		You lose!
		Play again(y or n)? y
		You rolled: 7
		You win!
		Play again(y or n)? y
		You rolled: 10
		You point: 7
		You lose!
		Play again(y or n)? y
		You rolled: 9
		You point: 7
		You lose!
		Play again(y or n)? n
		Wins: 1     Losses: 3
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/26/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

int roll_dice(void);
BOOL play_game(void);

int main(void){
	char ch;
	int wins = 0, loes = 0;
	
	srand((unsigned)time(NULL));
	
	while(1){
		if(play_game()){
			printf("You win!\n");
			wins++;
		}else{
			printf("You lose!\n");
			loes++;
		}
		
		printf("\nPlay again(y or n)? ");
		ch = getchar();
		getchar();
		while((ch != 'y') && (ch != 'n')){
			printf("\nPlay again(y or n)? ");
			ch = getchar();
			getchar();
		}
		if(ch == 'n'){
			break;
		}
	}
	
	printf("\nWins: %d     Losses: %d\n", wins, loes);
	
	return 0;
}

int roll_dice(void){
	return rand() % 6 + 1 + rand() % 6 + 1;
}

BOOL play_game(void){
	int goal = 0, status = 0, sum = 0;
	
	sum = roll_dice();
	printf("You rolled: %d\n", sum);
	switch(sum){
		case 2:
		case 3:
		case 12:
			return FALSE;
		case 7:
		case 11:
			return TRUE;
		default:
			status = 1;
			break;
	}
	
	while(1){
		sum = roll_dice();
		switch(status){
			case 1:
				printf("You point: %d\n", sum);
				break;
			case 2:
				printf("You rolled: %d\n", sum);
				break;
		}
		
		if(status == 1){
			switch(sum){
				case 7:
					return FALSE;
				default:
					goal = sum;
					status = 2;
					break;
			}
		}else{
			if(sum == 7){
				return FALSE;
			}else if(sum == goal){
				return TRUE;
			}
		}
	}
}