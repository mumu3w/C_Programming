/******************************************************************************
  题目: 快速排序.
		
  演示: Enter 10 number to be sorted: 9 16 47 82 4 66 12 3 25 51
		In sorted order: 3 4 9 12 16 25 47 51 66 82
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/31/2015 
  
******************************************************************************/

#include <stdio.h>

#define	ARRAY_MAX	10

void quicksort(int *low, int *high);
int *split(int *low, int *high);

int main(){
	int a[ARRAY_MAX], i;
	
	printf("Enter %d number to be sorted: ", ARRAY_MAX);
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%d", (a+i));
	}
	
	quicksort(&a[0], &a[ARRAY_MAX - 1]);
	
	printf("In sorted order: ");
	for(i = 0; i < ARRAY_MAX; i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
	
	return 0;
}

void quicksort(int *low, int *high){
	int *middle;
	
	if(low >= high){
		return ;
	}
	middle = split(low, high);
	quicksort(low, middle - 1);
	quicksort(middle + 1, high);
}

int *split(int *low, int *high){
	int part_element = *low;
	
	for(;;){
		while(low < high && part_element <= *high){
			high--;
		}
		if(low >= high){
			break ;
		}
		*low++ = *high;
		
		while(low < high && *low <= part_element){
			low++;
		}
		if(low >= high){
			break;
		}
		*high-- = *low;
	}
	
	*high = part_element;
	return high;
}