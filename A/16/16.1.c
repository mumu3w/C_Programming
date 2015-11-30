/******************************************************************************
   要求用户录入国际电话区号，程序显示相应的国家名称，否则显示出错信息。

   (C) Nov 12 2015  Mumu3w@outlook.com

******************************************************************************/


#include <stdio.h>

#define COUNTRY_COUNT \
  ((int) (sizeof(country_codes) / sizeof(country_codes[0])))

struct dialing_code{
	char *country;
	int code;
};


int main(void){
	const struct dialing_code country_codes[] = {{"Argentina", 54}, {"Bangladesh", 880},
												{"Brazil", 55}, {"Burma (Myanmar)", 95},
												{"China", 86}, {"Colombia", 57},
												{"Congo, Dem. Rep. of", 243}, {"Egypt", 20},
												{"Ethiopia", 251}, {"France", 33},
												{"Germany", 49}, {"India", 91},
												{"Italy", 39}, {"Japan", 81},
												{"Mexico", 52}, {"Nigeria", 234},
												{"Pakistan", 92}, {"Philippines", 63},
												{"Poland", 48}, {"Russia", 7},
												{"South Africa", 27}, {"Korea", 82},
												{"Spain", 34}, {"Sudan", 249},
												{"Thailand", 66}, {"Turkey", 90},
												{"Ukraine", 380}, {"United Kingdom", 44},
												{"United States", 1}, {"Vietnam", 84}}; 
												
	int i, area_code;
	
	printf("Enter dialing code: ");
	scanf("%d", &area_code);
	
	for(i = 0; i < COUNTRY_COUNT; i++){
		if(area_code == country_codes[i].code){
			break;
		}
	}
	
	if(i != MAX_ARRAY){
		printf("%d  %s\n", country_codes[i].code, country_codes[i].country);
	}else{
		printf("No corresponding country found\n");
	}
	
	return 0;
}