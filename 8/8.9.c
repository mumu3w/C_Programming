/******************************************************************************
  题目: 生成一种贯穿10*10字符数组（初始时全为字符'.'）的“随心算法”。程序必须随
		机的从一个元素“走到”另一个元素，每次都向上、向下、向左和向右移动一个元
		素位置。已访问过的元素按访问顺序用字母A到Z进行标记。
		
  演示:           !!!pass!!!

		 A  .  .  .  .  .  .  .  .  .
		 B  .  .  .  .  .  .  .  .  .
		 C  D  .  .  .  .  .  .  .  .
		 F  E  .  .  .  .  .  .  .  .
		 G  .  .  .  .  .  .  .  .  .
		 H  .  .  .  .  .  .  .  .  .
		 I  L  M  .  .  .  .  .  .  .
		 J  K  N  .  .  .  .  .  .  .
		 S  P  O  .  .  .  .  .  .  .
		 R  Q  .  .  .  .  .  .  .  .
		 ---------------------------------------------------------------------
		 A  .  .  .  .  N  O  P  Y  X
		 B  .  .  .  .  M  .  Q  Z  W
		 C  D  E  J  K  L  .  R  .  V
		 .  .  F  I  .  .  .  S  T  U
		 .  .  G  H  .  .  .  .  .  .
		 .  .  .  .  .  .  .  .  .  .
		 .  .  .  .  .  .  .  .  .  .
		 .  .  .  .  .  .  .  .  .  .
		 .  .  .  .  .  .  .  .  .  .
		 .  .  .  .  .  .  .  .  .  .
		 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/24/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define	UP	0
#define RIGHT	1
#define DOWN	2
#define LEFT	3

#define ARRAY_MAX	10

int main(){
	int x, y;
	unsigned pass_up, pass_right, pass_down, pass_left, direction, mark;
	char ch[ARRAY_MAX][ARRAY_MAX], next;
	
	srand((unsigned)time(NULL));
	
	/* 初始化数组 */
	for(y = 0; y < ARRAY_MAX; y++){
		for(x = 0; x < ARRAY_MAX; x++){
			ch[y][x] = '.';
		}
	}
	
	y = (unsigned)rand() % 10;
	x = (unsigned)rand() % 10;
	ch[y][x] = 'A';
	for(next = 'B'; next <= 'Z'; next++){
		pass_up = 0, pass_right = 0, pass_down = 0, pass_left = 0;
		mark = 0;
		while(1){
			direction = (unsigned)rand() % 4;
			if(pass_up == 1 && pass_right == 1 && pass_down == 1 && pass_left == 1){
				mark = 1;
				break;
			}
			
			if(direction == UP){
				if((y-1 >= 0) && (ch[y-1][x] == '.')){
					ch[y-1][x] = next;
					y = y - 1;
					break;
				}
				pass_up = 1;
				continue;
				
			}else if(direction == RIGHT){
				if((x+1 < ARRAY_MAX) && (ch[y][x+1] == '.')){
					ch[y][x+1] = next;
					x = x + 1;
					break;
				}
				pass_right = 1;
				continue;				
				
			}else if(direction == DOWN){
				if((y+1 < ARRAY_MAX) && (ch[y+1][x] == '.')){
					ch[y+1][x] = next;
					y = y + 1;
					break;
				}
				pass_down = 1;
				continue;
				
			}else if(direction == LEFT){
				if((x-1 >= 0) && (ch[y][x-1] == '.')){
					ch[y][x-1] = next;
					x = x - 1;
					break;
				}
				pass_left = 1;
				continue;				
				
			}
		}
		
		if(mark == 1){
			printf("          !!!pass!!!\n\n");
			break;
		}
	}
	
	
	/* 打印数组 */	
	for(y = 0; y < ARRAY_MAX; y++){
		for(x = 0; x < ARRAY_MAX; x++){
			printf("  %c", ch[y][x]);
		}
		printf("\n");
	}
	
	return 0;
}