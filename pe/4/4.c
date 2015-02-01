#include<stdio.h>
#include<stdlib.h>

int is_palindromic(int x);
int digits(int x);

int main(void) {
	int a,b, mult, topmult;
	topmult=0;
	
	for(a=100; a<1000; a++){
		for(b=100; b<1000; b++){
			mult = a*b;
			
			if (is_palindromic(mult)==1){
				printf("A: %i B: %i Mult: %i \n",a,b,mult);
				if (mult>topmult) topmult = mult;
			}
		}
	}

	int x = 102201;
	//printf("%i \n",is_palindromic(x));
	printf("Top palidrome: %i",topmult);
	return 0;
}

is_palindromic(int x) {
	int dig = digits(x);
	char num[dig+1];
	sprintf(num,"%d",x);
	int bottom = 0;
	int top = dig-1;

	int topval;
	int bottomval;
	
	while (top > bottom){
	//very dirty method of getting int from char -- only works because it started out as an integer
	//atoi wasn't working for some reason.
		topval = num[top] - '0';
		bottomval = num[bottom] - '0';

		if (topval != bottomval) return 0;
		top--;
		bottom++;
	}
	return 1;
	
}

digits(int x) {
	int digits = 10;
	int test = 1000000000;
	while ( x%test == x){
		digits--;
		test = test / 10;
	}
	return (digits);
}