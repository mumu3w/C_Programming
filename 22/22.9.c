/******************************************************************************
   维护零件数据库.

   (C) Nov 25 2015  Mumu3w@outlook.com

******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMW_LEN 25

struct part{
	int id;
	char name[NAMW_LEN+1];
	int on_hand;
};


int main(int argc, char *argv[]){
	FILE *in_fp1, *in_fp2, *out_fp;
	int num_read1, num_read2;
	struct part part1, part2;
	
	if(4 != argc){
		fprintf(stderr, "usage: merge infile1 infile2 outfile\n");
		exit(EXIT_FAILURE);
	}
	
	if(NULL == (in_fp1 = fopen(argv[1], "rb"))){
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if(NULL == (in_fp2 = fopen(argv[2], "rb"))){
		fprintf(stderr, "Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	if(NULL == (out_fp = fopen(argv[3], "wb"))){
		fprintf(stderr, "Can't open %s\n", argv[3]);
		exit(EXIT_FAILURE);
	}
	
	num_read1 = fread(&part1, sizeof(struct part), 1, in_fp1);
	num_read2 = fread(&part2, sizeof(struct part), 1, in_fp2);
	while(1 == num_read1 && 1 == num_read2){
		if(part1.id < part2.id){
			fwrite(&part1, sizeof(struct part), 1, out_fp);
			num_read1 = fread(&part1, sizeof(struct part), 1, in_fp1);
		}else if(part1.id > part2.id){
			fwrite(&part2, sizeof(struct part), 1, out_fp);
			num_read2 = fread(&part2, sizeof(struct part), 1, in_fp2);
		}else{
			if(0 != strcmp(part1.name, part2.name)){
				fprintf(stderr,
					"Names don't match for part %d; using the name %s\n",
					part1.id, part1.name);
			}
			part1.on_hand += part2.on_hand;
			fwrite(&part1, sizeof(struct part), 1, out_fp);
			num_read1 = fread(&part1, sizeof(struct part), 1, in_fp1);
			num_read2 = fread(&part2, sizeof(struct part), 1, in_fp2);
		}
	}
	
	while(1 == num_read1){
		fwrite(&part1, sizeof(struct part), 1, out_fp);
		num_read1 = fread(&part1, sizeof(struct part), 1, in_fp1);
	}
	while(1 == num_read2){
		fwrite(&part2, sizeof(struct part), 1, out_fp);
		num_read2 = fread(&part2, sizeof(struct part), 1, in_fp2);
	}
	
	fclose(in_fp1);
	fclose(in_fp2);
	fclose(out_fp);
	return 0;
}