/******************************************************************************
  题目: 计算正整数的阶乘。
		
  演示: short:
		Factorial of 1: 1
		Factorial of 2: 2
		Factorial of 3: 6
		Factorial of 4: 24
		Factorial of 5: 120
		Factorial of 6: 720
		Factorial of 7: 5040
		Factorial of 8: -25216
		Press Enter to continue...
		int:
		Factorial of 1: 1
		Factorial of 2: 2
		Factorial of 3: 6
		Factorial of 4: 24
		Factorial of 5: 120
		Factorial of 6: 720
		Factorial of 7: 5040
		Factorial of 8: 40320
		Factorial of 9: 362880
		Factorial of 10: 3628800
		Factorial of 11: 39916800
		Factorial of 12: 479001600
		Factorial of 13: 1932053504
		Factorial of 14: 1278945280
		Factorial of 15: 2004310016
		Factorial of 16: 2004189184
		Factorial of 17: -288522240
		Press Enter to continue...
		long:
		Factorial of 1: 1
		Factorial of 2: 2
		Factorial of 3: 6
		Factorial of 4: 24
		Factorial of 5: 120
		Factorial of 6: 720
		Factorial of 7: 5040
		Factorial of 8: 40320
		Factorial of 9: 362880
		Factorial of 10: 3628800
		Factorial of 11: 39916800
		Factorial of 12: 479001600
		Factorial of 13: 1932053504
		Factorial of 14: 1278945280
		Factorial of 15: 2004310016
		Factorial of 16: 2004189184
		Factorial of 17: -288522240
		
  邮箱：mumu3w@outlook.com	
  
  时间：10/19/2015 
  
******************************************************************************/

#include <stdio.h>

int main(){
	short sn, sn_factorial = 1;
	int in, in_factorial = 1;
	long ln, ln_factorial = 1;
	float fn, fn_factorial = 1.0f;
	double dn, dn_factorial = 1.0;
	long double ldn, ldn_factorial = 1.0;
	
/*	printf("Enter a positive integer: ");
	scanf("%d", &x);
*/	
	printf("short: \n");
	for(sn = 1; 1; sn++){
		if(sn_factorial < 0.0){
			break;
		}
		sn_factorial *= sn;
		printf("Factorial of %hd: %hd\n", sn, sn_factorial);
	}
	
	printf("Press Enter to continue...");
			while(getchar() != '\n'){
				;
			}
			
	printf("int: \n");
	for(in = 1; 1; in++){
		if(in_factorial < 0.0){
			break;
		}
		in_factorial *= in;
		printf("Factorial of %d: %d\n", in, in_factorial);
	}
	
	printf("Press Enter to continue...");
			while(getchar() != '\n'){
				;
			}
			
	printf("long: \n");
	for(ln = 1; 1; ln++){
		if(ln_factorial < 0.0){
			break;
		}
		ln_factorial *= ln;
		printf("Factorial of %ld: %ld\n", ln, ln_factorial);
	}
/*	
	printf("Press Enter to continue...");
			while(getchar() != '\n'){
				;
			}
	
	printf("float: \n");
	for(fn = 1; 1; fn++){
		if(fn_factorial < 0.0){
			break;
		}
		fn_factorial *= fn;
		printf("Factorial of %f: %f\n", fn, fn_factorial);
	}
	
	printf("Press Enter to continue...");
			while(getchar() != '\n'){
				;
			}
	
	printf("double: \n");
	for(dn = 1; 1; dn++){
		if(dn_factorial < 0.0){
			break;
		}
		dn_factorial *= dn;
		printf("Factorial of %f: %f\n", dn, dn_factorial);
	}
	
	printf("Press Enter to continue...");
			while(getchar() != '\n'){
				;
			}
	
	printf("long double: \n");
	for(ldn = 1; 1; ldn++){
		if(ldn_factorial < 0.0){
			break;
		}
		ldn_factorial *= ldn;
		printf("Factorial of %Lf: %Lf\n", ldn, ldn_factorial);
	}
*/	
	return 0;
}

