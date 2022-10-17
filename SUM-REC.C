#include<stdio.h>
#include<conio.h>

int s = 0;

int sum(int);

void main() {
	int n;
	clrscr();
	printf("Enter the no: ");
	scanf("%d", &n);
	sum(n);
	printf("Sum is: %d", s);
}

int sum(int a) {
	if(a > 0) {
		s += a;
		return sum(a - 1);
	}
}











