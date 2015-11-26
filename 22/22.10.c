/******************************************************************************
   维护零件数据库.

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define NAME_LEN 25

struct part{
	int id;
	char name[NAME_LEN+1];
	int on_hand;
	struct part *next;
};

struct part_file{
	int id;
	char name[NAME_LEN+1];
	int on_hand;
};

struct part *inventory = NULL;

struct part *find_part(int id);
void insert(void);
void search(void);
void update(void);
void print(void);
void deposit(void);
void restore(void);


int main(void){
	char code;
	
	for(;;){
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while(getchar() != '\n'){
			;
		}
		switch(code){
			case 'i':	insert();
						break;
			case 's':	search();
						break;
			case 'u':	update();
						break;
			case 'p':	print();
						break;
			case 'd':	deposit();
						break;
			case 'r':	restore();
						break;
			case 'q':	return 0;
			default:	printf("Illegal code\n");
		}
		printf("\n");
	}
}

struct part *find_part(int id){
	struct part *p;
	
	for(p = inventory;
		p != NULL && id > p->id;
		p = p->next){
			;
	}
	if(p != NULL && id == p->id){
		return p;
	}
	
	return NULL;
}

void insert(void){
	struct part *cur, *prev, *new_node;
	
	new_node = malloc(sizeof(struct part));
	if(new_node == NULL){
		printf("Database is full; can't add more parts. \n");
		return ;
	}
	
	printf("Enter part number: ");
	scanf("%d", &new_node->id);
	
	for(cur = inventory, prev = NULL;
		cur != NULL && new_node->id > cur->id;
		prev = cur, cur = cur->next){
			;
	}
	if(cur != NULL && new_node->id == cur->id){
		printf("Part already exists.\n");
		free(new_node);
		return ;
	}
	
	printf("Enter part name: ");
	read_line(new_node->name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &new_node->on_hand);
	
	new_node->next = cur;
	if(prev == NULL){
		inventory = new_node;
	}else{
		prev->next = new_node;
	}
}

void search(void){
	int id;
	struct part *p;
	
	printf("Enter part number: ");
	scanf("%d", &id);
	p = find_part(id);
	if(p != NULL){
		printf("Part name: %s\n", p->name);
		printf("Quantity on hand: %d\n", p->on_hand);
	}else{
		printf("Part not found.\n");
	}
}

void update(void){
	int id, change;
	struct part *p;
	
	printf("Enter part number: ");
	scanf("%d", &id);
	p = find_part(id);
	if(p != NULL){
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		p->on_hand += change;
	}else{
		printf("Part not found.\n");
	}
}

void print(void){
	struct part *p;
	
	printf("Part Number   Part Name                  "
			"Quantity on Hand\n");
	for (p = inventory; p != NULL; p = p->next)
		printf("%7d       %-25s%11d\n", p->id,
				p->name, p->on_hand);
}

void deposit(void){
	int i;
	struct part *p;
	struct part_file pf;
	FILE *fp;
	char file_name[FILENAME_MAX];
	
	printf("Enter name of output file: ");
	read_line(file_name, FILENAME_MAX-1);
	
	if(NULL == (fp = fopen(file_name, "wb"))){
		fprintf(stderr, "Can't open %s", file_name);
		exit(EXIT_FAILURE);
	}
	
	for(p = inventory; p != NULL; p = p->next){
		pf.id = p->id;
		strcpy(pf.name, p->name);
		pf.on_hand = p->on_hand;
		fwrite(&pf, sizeof(struct part_file), 1, fp);
	}
	
	fclose(fp);
}

void restore(void){
	struct part *cur, *prev, *new_node;
	int i;
	FILE *fp;
	struct part_file pf;
	char file_name[FILENAME_MAX];
	
	printf("Enter name of input file: ");
	read_line(file_name, FILENAME_MAX-1);
	
	if(NULL == (fp = fopen(file_name, "rb"))){
		fprintf(stderr, "Can't open %s", file_name);
		exit(EXIT_FAILURE);
	}
	
	while(fread(&pf, sizeof(struct part_file), 1, fp)){
		new_node = malloc(sizeof(struct part));
		if(new_node == NULL){
			printf("Database is full; can't add more parts. \n");
			return ;
		}
		
		new_node->id = pf.id;
		
		for(cur = inventory, prev = NULL;
			cur != NULL && new_node->id > cur->id;
			prev = cur, cur = cur->next){
				;
		}
		if(cur != NULL && new_node->id == cur->id){
			printf("Part already exists.\n");
			free(new_node);
			return ;
		}

		strcpy(new_node->name, pf.name);
		new_node->on_hand = pf.on_hand;
		
		new_node->next = cur;
		if(prev == NULL){
			inventory = new_node;
		}else{
			prev->next = new_node;
		}
	}
	
	fclose(fp);
}