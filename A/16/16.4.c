/******************************************************************************
   维护零件数据库.

   (C) Nov 12 2015  Mumu3w@outlook.com

******************************************************************************/


#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
  int value;
};

int find_part(int number, const struct part inv[], int np);
void insert(struct part inv[], int *np);
void search(const struct part inv[], int np);
void update(struct part inv[], int np);
void update_value(struct part inv[], int np);
void print(struct part inv[], int np);



int main(void){
  char code;
  int num_parts = 0;
  struct part inventory[MAX_PARTS];

  for (;;) {
    printf("Enter operation code: ");
    scanf(" %c", &code);
    while (getchar() != '\n')   /* skips to end of line */
      ;
    switch (code) {
      case 'i': insert(inventory, &num_parts);
                break;
      case 's': search(inventory, num_parts);
                break;
      case 'u': update(inventory, num_parts);
                break;
	  case 'v': update_value(inventory, num_parts);
                break;
      case 'p': print(inventory, num_parts);
                break;
      case 'q': return 0;
      default:  printf("Illegal code\n");
    }
    printf("\n");
  }
}

int find_part(int number, const struct part inv[], int np){
  int i;

  for (i = 0; i < np; i++)
    if (inv[i].number == number)
      return i;
  return -1;
}

void insert(struct part inv[], int *np){
  int part_number;

  if (*np == MAX_PARTS) {
    printf("Database is full; can't add more parts.\n");
    return;
  }

  printf("Enter part number: ");
  scanf("%d", &part_number);
  if (find_part(part_number, inv, *np) >= 0) {
    printf("Part already exists.\n");
    return;
  }

  inv[*np].number = part_number;
  printf("Enter part name: ");
  read_line(inv[*np].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inv[*np].on_hand);
  printf("Enter commodity prices: ");
  scanf("%d", &inv[*np].value);
  (*np)++;
}

void search(const struct part inv[], int np){
  int i, number;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number, inv, np);
  if (i >= 0) {
    printf("Part name: %s\n", inv[i].name);
    printf("Quantity on hand: %d\n", inv[i].on_hand);
	printf("Commodity price: %d\n", inv[i].value);
  } else
    printf("Part not found.\n");
}

void update(struct part inv[], int np){
  int i, number, change;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number, inv, np);
  if (i >= 0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inv[i].on_hand += change;
  } else
    printf("Part not found.\n");
}

void update_value(struct part inv[], int np){
  int i, number, value;

  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number, inv, np);
  if (i >= 0) {
    printf("Enter change in value: ");
    scanf("%d", &value);
    inv[i].value = value;
  } else
    printf("Part not found.\n");
}

void print(struct part inv[], int np){
  int i, j;
  struct part tmp = inv[0];
  
  for(j = 1; j < np; j++){
	  for(i = j; i < np; i++){
		  if(inv[i-1].number > inv[i].number){
			  inv[i-1] = inv[i];
			  inv[i] = tmp;
		  }
	  }
	  tmp = inv[j];
  }

  printf("Part Number   Part Name                  "
         "Quantity on Hand     Commodity price\n");
  for (i = 0; i < np; i++)
    printf("%7d       %-25s%11d%22d\n", inv[i].number,
           inv[i].name, inv[i].on_hand, inv[i].value);
}

