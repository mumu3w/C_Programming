/******************************************************************************
   练习题(16.6)
   
   (C) Nov 09 2015  Mumu3w@outlook.com

******************************************************************************/
#include <stdio.h>

typedef struct fraction{
	int numerator, denominator;
}Fraction;

int gcd(int numerator, int denominator);
Fraction simplest_fraction(Fraction frac);
Fraction add_fraction(Fraction frac1, Fraction frac2);
Fraction sub_fraction(Fraction frac1, Fraction frac2);
Fraction mul_fraction(Fraction frac1, Fraction frac2);
Fraction div_fraction(Fraction frac1, Fraction frac2);



int main(void){
	Fraction frac, frac1 = {4, 8}, frac2 = {2, 6};
	
	frac = add_fraction(frac1, frac2);
	printf("%d/%d\n", frac.numerator, frac.denominator);
	frac = sub_fraction(frac1, frac2);
	printf("%d/%d\n", frac.numerator, frac.denominator);
	frac = mul_fraction(frac1, frac2);
	printf("%d/%d\n", frac.numerator, frac.denominator);
	frac = div_fraction(frac1, frac2);
	printf("%d/%d\n", frac.numerator, frac.denominator);
	
	return 0;
}

int gcd(int numerator, int denominator){
	if(denominator == 0){
		return numerator;
	}
	gcd(denominator, numerator % denominator);
}

Fraction simplest_fraction(Fraction frac){
	int GCD = gcd(frac.numerator, frac.denominator);
	
	frac.numerator /= GCD;
	frac.denominator /= GCD;
	
	return frac;
}

Fraction add_fraction(Fraction frac1, Fraction frac2){
	int new_denominator = frac1.denominator * frac2.denominator;
	
	frac1.numerator *= frac2.denominator;
	frac2.numerator *= frac1.denominator;
	
	frac1.numerator += frac2.numerator;
	frac1.denominator = new_denominator;
	
	return simplest_fraction(frac1);;
}

Fraction sub_fraction(Fraction frac1, Fraction frac2){
	int new_denominator = frac1.denominator * frac2.denominator;
	
	frac1.numerator *= frac2.denominator;
	frac2.numerator *= frac1.denominator;
	
	frac1.numerator -= frac2.numerator;
	frac1.denominator = new_denominator;
	
	return simplest_fraction(frac1);;
}

Fraction mul_fraction(Fraction frac1, Fraction frac2){
	
	frac1.numerator *= frac2.numerator;
	frac1.denominator *= frac2.denominator;

	return simplest_fraction(frac1);;
}

Fraction div_fraction(Fraction frac1, Fraction frac2){
	
	frac1.numerator *= frac2.denominator;
	frac1.denominator *= frac2.numerator;

	return simplest_fraction(frac1);;
}