/******************************************************************************
  题目: 要求用户录入一串整数，然后通过调用selection_sort函数来排序这些整数。给
		定n个元素的数组后，selection_sort函数必须做下列工作：
		(1)搜索数组找出最大的元素，然后把它移动到数组的最后。
		(2)递归调用函数本身来对前n-1个数组元素进行排序。
		
  演示: Enter a string of integers: 24 87 14 32 69 5 22 45
		 24   87   14   32   69    5   22   45
		 24   45   14   32   69    5   22   87
		 24   45   14   32   22    5   69   87
		 24    5   14   32   22   45   69   87
		 24    5   14   22   32   45   69   87
		 22    5   14   24   32   45   69   87
		 14    5   22   24   32   45   69   87
		
		In sorted order: 5  14  22  24  32  45  69  87
  
  邮箱：mumu3w@outlook.com	
  
  时间：10/25/2015 
  
******************************************************************************/

#include <stdio.h>

#define	ARRAY_MAX	8

void selection_sort(int num[], int start, int end);

int main(){
	int num[ARRAY_MAX];
	int i;
	
	printf("Enter a string of integers: ");
	for(i = 0; i < ARRAY_MAX; i++){
		scanf("%d", &num[i]);
	}
	
	selection_sort(num, 0, ARRAY_MAX - 1);
	
	printf("\nIn sorted order: ");
	for(i = 0; i < ARRAY_MAX; i++){
		printf("%d  ", num[i]);
	}
	printf("\n");
	
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
		
		for(i = 0; i < ARRAY_MAX; i++){
			printf("%3d  ", num[i]);
		}
		printf("\n");
		
		if(end != index){
			temp = num[end];
			num[end] = num[index];
			num[index] = temp;
		}
		
		end--;
		selection_sort(num, start, end);
	}
}