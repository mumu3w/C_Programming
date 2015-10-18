/******************************************************************************
  题目: 分解用户录入的ISBN信息.
  
  演示：Enter ISBN: 978-0-393-97950-3
		GS1 prefix: 978
		Group identifier: 0
		Publisher code: 393
		Item number: 97950
		Check digit: 3
		----------------------------------------------------------------------
		Enter ISBN: 978-7-115-21957-2
		GS1 prefix: 978
		Group identifier: 7
		Publisher code: 115
		Item number: 21957
		Check digit: 2
		
  邮箱：mumu3w@outlook.com
  
  时间：10/17/2015 

******************************************************************************/

#include <stdio.h>

int main(){
	unsigned int gs1, group, publisher, item, check;
	
	printf("Enter ISBN: ");
	scanf("%u-%u-%u-%u-%u", &gs1, &group, &publisher, &item, &check);
	
	printf("GS1 prefix: %u\n", gs1);
	printf("Group identifier: %u\n", group);
	printf("Publisher code: %u\n", publisher);
	printf("Item number: %u\n", item);
	printf("Check digit: %u\n", check);
	
	return 0;
}