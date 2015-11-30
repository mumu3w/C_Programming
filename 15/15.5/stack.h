#ifndef STACK_H
#define STACK_H

#if !defined(TRUE) && !defined(FALSE)
#define TRUE	1
#define FALSE	0
typedef unsigned BOOL;
#endif

void make_empty(void);
BOOL is_empty(void);
BOOL is_full(void);
void push(int i);
int pop(void);
void stack_overflow();
void stack_underflow();

#endif