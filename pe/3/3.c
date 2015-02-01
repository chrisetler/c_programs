#include<stdio.h>
#include<stdlib.h>

//P.E. Problem 3

long leastfactor(long x) {
	long factor;
	if (x%2==0) return 2;
	for(factor=3; factor<x/2+1; factor+=2){
		if(x%factor==0) return factor;
	}
	//x is prime
	return x;
}

int main(int argc, char** argv) {
	long int input = atol(argv[1]); //user input value
	long in = (long)input;
	long factor; // current factor
	long gpf=0; // greatest prime factor

	
	//then keep taking out the smallest factor possible
	//because it is the smallest possible factor is must be prime.
	//There's probably even a proof for that in some Discrete Math textbook
	while(factor<=in) {
		factor = leastfactor(in);
		if (factor>gpf) gpf=factor;
		printf("In: %ld ",in);
		printf("Factor: %ld \n",factor);
		in = in / factor;
		
	}
	
	printf("\nGPF: %ld",gpf);
	return 0;
}

