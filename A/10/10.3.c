/******************************************************************************
  题目: 编写程序对一手牌进行读取和分类。手中的每张牌都有花色和等级。不允许使用
		王牌，并且假设A是最高等级的。程序将读取一手5张牌，然后把手中的牌分为下
		列某一列：
		1.同花顺
		2.四张
		3.葫芦
		4.同花
		5.顺子
		6.三张
		7.两对
		8.一对
		9.其它
		
  演示: Enter a card: 2s
		Enter a card: 5s
		Enter a card: 4s
		Enter a card: 3s
		Enter a card: 6s
		Straight flush
		
		Enter a card: 8c
		Enter a card: as
		Enter a card: 8c
		Duplicate card; ignored.
		Enter a card: 7c
		Enter a card: ad
		Enter a card: 3h
		Pair
		
		Enter a card: 6s
		Enter a card: d2
		Bad card; ignored.
		Enter a card: 2d
		Enter a card: 9c
		Enter a card: 4h
		Enter a card: ts
		High card
		
		Enter a card: 0
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/28/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define NUM_CARDS	5
#define RANK 0
#define SUIT 1

int hand[NUM_CARDS][2] = {{0}};

BOOL straight, flush, four, three;
int pairs;

void read_cards(void);
void analyze_hand(void);
void print_result(void);


int main(void){

	for(;;){
		read_cards();
		analyze_hand();
		print_result();
	}
	
	return 0;
} 

void read_cards(void){
	char ch, rank_ch, suit_ch;
	int i, rank, suit;
	BOOL bad_card, duplicate_card;
	int cards_read = 0;

	
	while(cards_read < NUM_CARDS){
		bad_card = FALSE;
		
		printf("Enter a card: ");
		rank_ch = getchar();
		switch(rank_ch){
			case '0':				exit(0);
			case '2':				rank = 0; break;
			case '3':               rank = 1; break;
			case '4':               rank = 2; break;
			case '5':               rank = 3; break;
			case '6':               rank = 4; break;
			case '7':               rank = 5; break;
			case '8':               rank = 6; break;
			case '9':               rank = 7; break;
			case 't': case 'T':     rank = 8; break;
			case 'j': case 'J':     rank = 9; break;
			case 'q': case 'Q':     rank = 10; break;
			case 'k': case 'K':     rank = 11; break;
			case 'a': case 'A':     rank = 12; break;
			default :				bad_card = TRUE;
		}
		
		suit_ch = getchar();
		switch(suit_ch){
			case 'c': case 'C':	suit = 0; break;
			case 'd': case 'D':	suit = 1; break;
			case 'h': case 'H':	suit = 2; break;
			case 's': case 'S':	suit = 3; break;
			default:		bad_card = TRUE;
		}
		
		while((ch = getchar()) != '\n'){
			if(ch != ' '){
				bad_card = TRUE;
			}
		}
		
		if(bad_card){
			printf("Bad card; ignored.\n");
			continue;
		}
		
		duplicate_card = FALSE;
		for(i = 0; i < cards_read; i++){
			if(hand[i][RANK] == rank && hand[i][SUIT] == suit){
				printf("Duplicate card; ignored.\n");
				duplicate_card = TRUE;
			    break;
			}
		}
		
		if(!duplicate_card){
			hand[cards_read][RANK] = rank;
			hand[cards_read][SUIT] = suit;
			cards_read++;
		}
	}
}

void analyze_hand(void){
	int rank, suit, card, pass, run;
	
	straight = TRUE;
	flush = TRUE;
	four = FALSE;
	three = FALSE;
	pairs = 0;
	
	for(pass = 1; pass < NUM_CARDS; pass++){
		for(card = 0; card < NUM_CARDS - pass; card++){
			rank = hand[card][RANK];
			suit = hand[card][SUIT];
			if(hand[card+1][RANK] < rank){
				hand[card][RANK] = hand[card+1][RANK];
				hand[card][SUIT] = hand[card+1][SUIT];
				hand[card+1][RANK] = rank;
				hand[card+1][SUIT] = suit;
			}
		}
	}
	
	suit = hand[0][SUIT];
	for(card = 1; card < NUM_CARDS; card++){
		if(hand[card][SUIT] != suit){
			flush = TRUE;
		}
	}
	
	for(card = 0; card < NUM_CARDS - 1; card++){
		if(hand[card][RANK] +1 != hand[card+1][RANK]){
			straight = FALSE;
		}
	}
	
	card = 0;
	while(card < NUM_CARDS){
		rank = hand[card][RANK];
		run = 0;
		do{
			run++;
			card++;
		}while(card < NUM_CARDS && hand[card][RANK] == rank);
		switch(run){
			case 2: pairs++;		break;
			case 3: three = TRUE;	break;
			case 4: four = TRUE;	break;
		}
	}
}

void print_result(void){
	if(straight && flush){
		printf("Straight flush");
	}else if(four){
		printf("Four of a kind");
	}else if(three && pairs == 1){
		printf("Full house");
	}else if(flush){
		printf("Flush");
	}else if(straight){
		printf("Straight");
	}else if(three){
		printf("Three of a kind");
	}else if(pairs == 2){
		printf("Two Pair");
	}else if(pairs == 1){
		printf("Pair");
	}else{
		printf("High card");
	}
	
	printf("\n\n");
}