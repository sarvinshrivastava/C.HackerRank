#include<stdio.h>
#include<conio.h>

int s = 0;

int digsum(int);

void main() {
	long int n;
	clrscr();
	printf("Enter the no: ");
	scanf("%ld", &n);
	digsum(n);
	printf("Sum is: %d", s);
}

int digsum(int a) {
	int d;
	if(a > 0) {
		d = a % 10;
		a /= 10;
		s += d;
		return digsum(a);
	}
}











