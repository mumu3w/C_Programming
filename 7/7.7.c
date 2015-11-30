/******************************************************************************
  题目: 修改3.6.c，使得用户可以输入12小时制的时间.
		
  演示: 
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/22/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	int tmp, m1, n1, m2, n2, m, n, m_tmp, n_tmp;
	char operator;
	
	printf("Enter two fraction separated by a plus sign (x/x?x/x): ");
	scanf("%d/%d%c%d/%d", &m1, &n1, &operator, &m2, &n2);
	
	if(operator == '+'){
		n = n1 * n2;
		m = m1 * n2 + m2 * n1;
	}else if(operator == '-'){
		n = n1 * n2;
		m = m1 * n2 - m2 * n1;
	}else if(operator == '*'){
		n = n1 * n2;
		m = m1 * m2;
	}else if(operator == '/'){
		n = n1 * m2;
		m = m1 * n2;
	}
	
	
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
	
	printf("The sum is: %d/%d\n", m_tmp/m, n_tmp/m);
	
	return 0;
}