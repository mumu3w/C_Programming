/******************************************************************************
  Topic: 显示文件中最大的数、最小的数以及中值。
  
  
  Demo: >18
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ARRAY_MAX 10000
void selection_sort(int num[], int start, int end);

int main(int argc, char *argv[]){
	FILE *in_fp;
	int count, number, max, min, middle;
	int *array_pt;
	
	if(2 != argc){
		fprintf(stderr, "usage: %s data_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (in_fp = fopen(argv[1], "r"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	array_pt = malloc(sizeof(int) * ARRAY_MAX);
	count = 0;
	while(EOF != (fscanf(in_fp, "%d", &number))){
		*(array_pt+count) = number;
		count++;
		if(count > ARRAY_MAX){
			break;
		}
	}
	
	selection_sort(array_pt, 0, count-1);
	min = *(array_pt+0);
	max = *(array_pt+count-1);
	if(0 == (count % 2)){
		count /= 2;
		middle = (*(array_pt+count) + *(array_pt+count-1)) / 2;
	}else{
		count /= 2;
		middle = *(array_pt+count);
	}
	
	fprintf(stdout, "Max: %d\nMin: %d\nMid: %d\n", max, min, middle);
	
	free(array_pt);
	fclose(in_fp);
	return 0;
}

void selection_sort(int num[], int start, int end){
	int temp = num[end];
	int index = end;
	int i;
	
	if(end > start){
		for(i = end-1; i >= start; i--){
			if(num[index] < num[i]){
				index = i;
			}
		}
		
		if(end != index){
			temp = num[end];
			num[end] = num[index];
			num[index] = temp;
		}
		
		end--;
		selection_sort(num, start, end);
	}
}