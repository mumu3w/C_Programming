/******************************************************************************
   显示成员的大小和偏移。

   (C) Nov 19 2015  Mumu3w@outlook.com
   
   
              size    offset
      char s.a  1       0
       int s.b  8       4
     float s.c  4       12
    struct s    16
	
	在s.a和s.b之间存在一个三个字节的空洞(MinGW-w64).

******************************************************************************/

#include <stdio.h>
#include <stddef.h>

struct s{
	char a;
	int b[2];
	float c;
};

int main(){
	printf("           size    offset\n");
	printf("  char s.a  %d       %d\n", sizeof(char), offsetof(struct s, a));
	printf("   int s.b  %d       %d\n", sizeof(int) * 2, offsetof(struct s, b));
	printf(" float s.c  %d       %d\n", sizeof(float), offsetof(struct s, c));
	printf("struct s    %d\n", sizeof(struct s));
	return 0;
}