/******************************************************************************
  题目: 编写程序对一手牌进行读取和分类。手中的每张牌都有花色和等级。不允许使用
		王牌，并且假设A是最高等级的。程序将读取一手5张牌，然后把手中的牌分为下
		列某一列：
		1.同花大顺
		2.同花顺
		3.四张
		4.葫芦
		5.同花
		6.顺子
		7.三张
		8.两对
		9.一对
		10.其它
		
  演示: Enter a card: ts
		Enter a card: js
		Enter a card: qs
		Enter a card: ks
		Enter a card: as
		Big straight flush
		
		Enter a card: 0
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/28/2015 
  
******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;

#define NUM_RANKS	13
#define NUM_SUITS	4
#define NUM_CARDS	5

BOOL big_straight, straight, flush, four, three;
int pairs;

void read_cards(int num_in_rank[], int num_in_suit[]);
void analyze_hand(int num_in_rank[], int num_in_suit[]);
void print_result(void);


int main(void){
	int num_in_rank[NUM_RANKS];
	int num_in_suit[NUM_SUITS];

	for(;;){
		read_cards(num_in_rank, num_in_suit);
		analyze_hand(num_in_rank, num_in_suit);
		print_result();
	}
	
	return 0;
} 

void read_cards(int num_in_rank[], int num_in_suit[]){
	BOOL card_exists[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	BOOL bad_card;
	int cards_read = 0;
	
	for(rank = 0; rank < NUM_RANKS; rank++){
		num_in_rank[rank] = 0;
		for(suit = 0; suit < NUM_SUITS; suit++)
		card_exists[rank][suit] = FALSE;
	}
	
	for(suit = 0; suit < NUM_SUITS; suit++){
		num_in_suit[suit] = 0;
	}
	
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
		}else if(card_exists[rank][suit]){
			printf("Duplicate card; ignored.\n");
		}else{
			num_in_rank[rank]++;
			num_in_suit[suit]++;
			card_exists[rank][suit] = TRUE;
			cards_read++;
		}
	}
}

void analyze_hand(int num_in_rank[], int num_in_suit[]){
	int num_consec = 0;
	int rank, suit;
	int rank_tmp;
	
	big_straight = FALSE;
	straight = FALSE;
	flush = FALSE;
	four = FALSE;
	three = FALSE;
	pairs = 0;
	
	for(suit = 0; suit < NUM_SUITS; suit++){
		if(num_in_suit[suit] == NUM_CARDS){
			flush = TRUE;
		}
	}
	
	rank = 0;
	while(num_in_rank[rank] == 0){
		rank++;
	}
	rank_tmp = rank;
	for(; rank < NUM_RANKS && num_in_rank[rank] > 0; rank++){
		num_consec++;
	}
	if(num_consec == NUM_CARDS && rank_tmp == 8){
		big_straight = TRUE;
		return;
	}else if(num_consec == NUM_CARDS){
		straight = TRUE;
		return;
	}
	
	for(rank = 0; rank < NUM_RANKS; rank++){
		if(num_in_rank[rank] == 4){
			four = TRUE;
		}
		if(num_in_rank[rank] == 3){
			three = TRUE;
		}
		if(num_in_rank[rank] == 2){
			pairs++;
		}
	}
}

void print_result(void){
	if(big_straight && flush){
		printf("Big straight flush");
	}else if(straight && flush){
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