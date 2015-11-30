/******************************************************************************
  题目: 修改8.9.c，调用generate_random_walk，该函数把所有数组元素都初始化为字符
		'.'，然后将其中一些字符替换为A到Z的字母。接下来调用print_array函数来显
		示数组。
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/26/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define	UP	0
#define RIGHT	1
#define DOWN	2
#define LEFT	3

#define ARRAY_MAX	10

void generate_random_walk(char walk[ARRAY_MAX][ARRAY_MAX]);
void print_array(char walk[ARRAY_MAX][ARRAY_MAX]);

int main(){
	char walk[ARRAY_MAX][ARRAY_MAX];
	
	generate_random_walk(walk);
	print_array(walk);
	
	return 0;
}


void generate_random_walk(char walk[ARRAY_MAX][ARRAY_MAX]){
	int x, y;
	unsigned pass_up, pass_right, pass_down, pass_left, direction, mark;
	char next;
	
	srand((unsigned)time(NULL));
	
	/* 初始化数组 */
	for(y = 0; y < ARRAY_MAX; y++){
		for(x = 0; x < ARRAY_MAX; x++){
			walk[y][x] = '.';
		}
	}
	
	y = (unsigned)rand() % 10;
	x = (unsigned)rand() % 10;
	walk[y][x] = 'A';
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
				if((y-1 >= 0) && (walk[y-1][x] == '.')){
					walk[y-1][x] = next;
					y = y - 1;
					break;
				}
				pass_up = 1;
				continue;
				
			}else if(direction == RIGHT){
				if((x+1 < ARRAY_MAX) && (walk[y][x+1] == '.')){
					walk[y][x+1] = next;
					x = x + 1;
					break;
				}
				pass_right = 1;
				continue;				
				
			}else if(direction == DOWN){
				if((y+1 < ARRAY_MAX) && (walk[y+1][x] == '.')){
					walk[y+1][x] = next;
					y = y + 1;
					break;
				}
				pass_down = 1;
				continue;
				
			}else if(direction == LEFT){
				if((x-1 >= 0) && (walk[y][x-1] == '.')){
					walk[y][x-1] = next;
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
}

void print_array(char walk[ARRAY_MAX][ARRAY_MAX]){
	int x, y;
	
	/* 打印数组 */	
	for(y = 0; y < ARRAY_MAX; y++){
		for(x = 0; x < ARRAY_MAX; x++){
			printf("  %c", walk[y][x]);
		}
		printf("\n");
	}
}