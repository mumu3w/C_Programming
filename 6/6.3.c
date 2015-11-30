/******************************************************************************
  题目: 要求用户输入一个分数，然后将其约分为最简分式.
		
  演示: Enter a fraction: 6/12
		In lowest terms: 1/2
		----------------------------------------------------------------------
		Enter a fraction: 12/28
		In lowest terms: 3/7
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int tmp, m, n, m_tmp, n_tmp;
	
	printf("Enter a fraction: ");
	scanf("%d/%d", &m, &n);
	
	m_tmp = m;
	n_tmp = n;
	/* Euclid算法 */
	for(;;){
		
		if(n == 0){
			break;
		}else{
			tmp = m % n;
			m = n;
			n = tmp;
		}
	}
	
	printf("In lowest terms: %d/%d\n", m_tmp/m, n_tmp/m);
	
	return 0;
}