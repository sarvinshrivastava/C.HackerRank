#include<stdio.h>
#include<conio.h>

int count = 0;

int digcount(int);

void main() {
	int n;
	clrscr();
	printf("Enter the no: ");
	scanf("%d", &n);
	digcount(n);
	printf("No. of digits are: %d", count);
}

int digcount(int a) {
	if(a > 0) {
		a /= 10;
		count++;
		return digcount(a);
	}
}











