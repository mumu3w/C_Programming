/******************************************************************************
  题目: 发牌，用户输入发牌数量。
		
  演示: Enter number of cards in hand: 5
		Your hand:
		Seven of Heart
		Seven of Diamond
		Six of Club
		Two of Diamond
		Six of Spade
		-----------------------------------------------------------------------
		Enter number of cards in hand: 10
		Your hand:
		Two of Club
		Six of Club
		King of Spade
		Five of Spade
		Four of Diamond
		Nine of Heart
		Six of Spade
		Seven of Diamond
		Queen of Spade
		Queen of Heart
		
  邮箱：mumu3w@outlook.com	
  
  时间：11/04/2015 
  
******************************************************************************/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define NUM_RANKS	13
#define NUM_SUITS	4



int main(void){
	BOOL in_hand[NUM_SUITS][NUM_RANKS] = {{FALSE}};
	int num_cards, rank, suit;
	const char *rank_code[] = {"Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King", "Ace"};
	const char *suit_code[] = {"Club", "Diamond", "Spade", "Heart"};
	
	srand((unsigned) time(NULL));
	
	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);
	
	printf("Your hand: \n");
	while(num_cards > 0){
		suit = rand() % NUM_SUITS;
		rank = rand() % NUM_RANKS;
		if(!in_hand[suit][rank]){
			in_hand[suit][rank] = TRUE;
			num_cards--;
			printf("%s of %s\n", rank_code[rank], suit_code[suit]);
		}
	}
	
	printf("\n");
	
	return 0;
}