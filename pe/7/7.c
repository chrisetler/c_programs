#include<stdio.h>
//#define PRIMELOC 10001

//pe #7 10001st prime
int main(int argc, char** argv) {
	
	int PRIMELOC = atoi(argv[1]); //find the nth prime number
	//generates an array of prime numbers and sets them all to zero
	int primes[PRIMELOC];
	int i;
	for(i=0; i<PRIMELOC; i++){
		primes[i] = 0;
	}
	
	//added in 1 reference point.
	primes[0] = 2;
	int counter = 1;
	int currentnum = 3;
	
	//main loop
	while (counter<PRIMELOC){
		int isprime = 1;
		int i;
		
		//go through all the numbers in the list and check if divisible, and thus not prime
		//only divides by the previous prime numbers
		for(i=0; i<counter; i++){
			if (currentnum % primes[i] ==0) isprime=0;
		}
		if (isprime==0) {
			currentnum+=2;
		}
		if (isprime==1) {
			primes[counter] = currentnum;
			currentnum+=2;	
			counter++;			
		}
	}
	printf("%i,%i \n",counter,primes[counter-1]);
	return 0;
}

