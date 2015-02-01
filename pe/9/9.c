#include<stdio.h>
//most inefficient method possible

int main(void) {
	int a,b,c;
	long sum;
	for(a=0; a<1000; a++) {
		for(b=0; b<1000; b++) {
			for(c=0; c<1000; c++) {
				if ( b>a && c>b && a*a + b*b == c*c ) {
					if (a + b + c == 1000) {
						sum = a*b*c;
						printf("%i,%i,%i\n",a,b,c);
						printf("%li",sum);
					}
				}
			}
		}
	}
	return 0;
}