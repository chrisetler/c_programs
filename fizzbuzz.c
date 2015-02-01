#include<stdio.h>

int main(void) {
	int i;
	for(i=1; i<101; i++) {
		//print num if not divisible by 3 or 5
		if ( i%3 != 0 && i%5 != 0 ) printf("%i",i);
		
		//print fizz if divisible by 3 and buzz if divisible by 5
		else {
			if ( i%3 == 0 ) printf("fizz");
			if ( i%5 == 0 ) printf("buzz");
		}
		//new line for each number
		printf("\n");
	}	
	return 0;
}