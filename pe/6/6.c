#include<stdio.h>

int main(void) {
	int sumofsquares=0;
	int squareofsums=0;
	
	int i;
	for(i=1; i<101; i++){
		sumofsquares += i*i;
		squareofsums +=i;
	}
	
	squareofsums = squareofsums*squareofsums;
	int diff = squareofsums - sumofsquares;
	printf("%i",diff);
	
	return 0;
}