/******************************************************************************
  Topic: 链表添加、删除和打印.
  
  
  Demo: >demo1
		1:Add node  2:Delete  3:Print  0:Quit
        1
        Enter a ID: 2
        Enter a name: Li
        Enter a score: 85
        
        1:Add node  2:Delete  3:Print  0:Quit
        3
               ID         Name                Score
                2         Li                  85
        
        1:Add node  2:Delete  3:Print  0:Quit
        1
        Enter a ID: 5
        Enter a name: Chen
        Enter a score: 89
        
        1:Add node  2:Delete  3:Print  0:Quit
        3
               ID         Name                Score
                5         Chen                89
                2         Li                  85
        
        1:Add node  2:Delete  3:Print  0:Quit
        1
        Enter a ID: 9
        Enter a name: Xu
        Enter a score: 88
        
        1:Add node  2:Delete  3:Print  0:Quit
        3
               ID         Name                Score
                9         Xu                  88
                5         Chen                89
                2         Li                  85
        
        1:Add node  2:Delete  3:Print  0:Quit
        2
        Enter a ID: 5
        
        1:Add node  2:Delete  3:Print  0:Quit
        3
               ID         Name                Score
                9         Xu                  88
                2         Li                  85
        
        1:Add node  2:Delete  3:Print  0:Quit
        0
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define NAME_LEN_MAX 20


struct student{
	int id;
	char name[NAME_LEN_MAX+1];
	int score;
	struct student *next;
};

enum{QUIT, ADD_NODE, DELETE, PRINT}option;


struct student *add_to_node(struct student *head, struct student node);
void print(struct student *head);
struct student *delete_to_node(struct student *head, int id);



int main(void){
	struct student *head = NULL;
	struct student node;
	int id;
	
	while(1){
		printf("\n1:Add node  2:Delete  3:Print  0:Quit\n");
		scanf("%d", &option);
		switch(option){
			case ADD_NODE:{
				printf("Enter a ID: ");
				scanf("%d", &node.id);
				printf("Enter a name: ");
				scanf("%s", &node.name);
				printf("Enter a score: ");
				scanf("%d", &node.score);
				head = add_to_node(head, node);
				break;
			}
			case DELETE:{
				printf("Enter a ID: ");
				scanf("%d", &id);
				delete_to_node(head, id);
				break;
			}
			case PRINT:{
				print(head);
				break;
			}
			case QUIT:{
				exit(0);
				break;
			}
			default: break;
		}
	}
	
	return 0;
}

struct student *search_node(struct student *head, int id){
	while(head != NULL && head->id != id){
		head = head->next;
	}
	
	return head;
}

struct student *add_to_node(struct student *head, struct student node){
	struct student *new_node;
	
	new_node = malloc(sizeof(struct student));
	if(NULL == new_node){
		printf("Error: malloc failed in add_to_node\n");
		exit(EXIT_FAILURE);
	}
	
	new_node->id = node.id;
	strcpy(new_node->name, node.name);
	new_node->score = node.score;
	
	new_node->next = head;
	return new_node;
}

struct student *delete_to_node(struct student *head, int id){
	struct student *cur, *prev;
	
	for(cur = head, prev = NULL; 
		cur != NULL && cur->id != id; 
		prev = cur, cur = cur->next){
		;
	}
	
	if(cur == NULL){
		return head;
	}
	if(prev == NULL){
		head = head->next;
	}else{
		prev->next = cur->next;
	}
	
	free(cur);
	return head;
}

void print(struct student *head){
	struct student *p;
	
	printf("       ID         Name                Score\n");
	for(p = head; p != NULL; p = p->next){
		printf("%9d         %-20s%d\n", p->id, p->name, p->score);
	}
}