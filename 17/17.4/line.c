#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line.h"

#define MAX_LINE_LEN 60
#define MAX_WORD_LEN 20

struct text{
	char word[MAX_WORD_LEN+2];
	struct text *next;
};

struct text *line = NULL;
int line_len = 0;
int num_words = 0;

void clear_line(void){
	struct text *temp, *p;
	
	if(line != NULL){
		p = line;
		while(p->next != NULL){
			temp = p;
			p = p->next;
			free(temp);
		}
		free(p);
	}
	line = NULL;
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word){
	struct text *new_word, *cur;
	new_word = malloc(sizeof(struct text));
	if(new_word == NULL){
		printf("Database is full.\n");
		exit(1);
	}
	if(line == NULL){
		line = new_word;
		line->next = NULL;
	}else{
		cur = line;
		while(cur->next != NULL){
				cur = cur->next;
		}
		cur->next = new_word;
		line_len++;/* spaces */
	}
	new_word->next = NULL;
	strcpy(new_word->word, word);
	line_len += strlen(word);
	num_words++;
}

int space_remaining(void){
	return MAX_LINE_LEN - line_len;
}

void write_line(void){
	int extra_spaces, spaces_to_insert, j;
	struct text *p;
	extra_spaces = MAX_LINE_LEN - line_len;
	for(p = line; p->next != NULL; p = p->next){
		printf("%s", p->word);
		spaces_to_insert = extra_spaces / (num_words - 1);
		for(j = 1; j <= spaces_to_insert + 1; j++){
			putchar(' ');
		}
		extra_spaces -= spaces_to_insert;
		num_words--;
	}
	printf("%s", p->word);
	putchar('\n');
}

void flush_line(void){
	struct text *p;
	if(line_len > 0){
		for(p = line; p->next != NULL; p = p->next)
			printf("%s ", p->word);
		printf("%s ", p->word);
	}
	putchar('\n');
}