#ifndef __STACKADT2_H__
#define __STACKADT2_H__



#ifndef TRUE
typedef int BOOL;
#define TRUE (1 == 1)
#define FALSE (0 == 1)
#endif

typedef int Item;

typedef struct stack_type *Stack;

Stack create(int size);
void destroy(Stack s);
void make_empty(Stack s);
BOOL is_empty(Stack s);
BOOL is_full(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);



#endif /* __STACKADT2_H__ */