/******************************************************************************
  Topic: 从文件中读取一系列数据项并按列显示数据.
  
  
  Demo: >12 22.12.in
		Item            Unit            Purchase
                        Price           Date
        583             $  13.50        10/24/2005
        3912            $ 599.99        07/27/2008
		

   (C) Nov 26 2015  Mumu3w@outlook.com

******************************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
	int id, month, day, year;
	float price;
	FILE *fp;
	
	if(2 != argc){
		fprintf(stderr, "usage: %s data_file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (fp = fopen(argv[1], "r"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("    \t\tPrice\t\tDate\n");
	while(5 == fscanf(fp, "%d,%f,%d/%d/%d", &id, &price, &month, &day, &year)){
		fprintf(stdout, "%u\t\t$%7.2f\t%2.2u/%2.2u/%u\n", id, price, month, day, year);
	}
	
	fclose(fp);
	return 0;
}