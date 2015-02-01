#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int smallest = 20;
	int isDivisible = 0;
	int i;
	
	while(isDivisible == 0){
		isDivisible = 1;
		for(i=1; i<21; i++) {
			if ( smallest % i != 0 ) isDivisible=0;
		}
		if(isDivisible==0) smallest++;
	}
	printf("%i",smallest);
	return 0;
}