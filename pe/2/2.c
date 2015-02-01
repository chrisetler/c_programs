#include<stdio.h>

int main(void){
	int a,b,c;
	a = 0;
	b = 1;
	long sum=0;
	
	while(a < 4000001) {
		//printf("%i \n",a);
		if (a%2 == 0) sum+=a;
		c = b;
		b = a+b;
		a = c;
	}
	printf("%i",sum);
	return 0;
}