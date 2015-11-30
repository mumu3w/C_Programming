#include <stdio.h>
#include "myc.h"


extern int read_line(char buffer[], int n, FILE **in_fp){
	int ch, i = 0;
	
	ch = fgetc(*in_fp);
	while(ch != '\n' && ch != EOF){
		if(i < n){
			buffer[i++] = ch;
		}
		ch = fgetc(*in_fp);
	}
	buffer[i] = '\0';
	
	return i;
}
