#include<stdio.h>
#include<conio.h>

int fib(int);

void main() {
	int n, r;
	clrscr();
	printf("Enter the term required:");
	scanf("%d", &n);
	r = fib(n);
	printf("Term is: %d", r);
}

int fib(int a) {
	if(a == 1)
		return 0;
	else if(a == 2)
		return 1;
	else
		return(fib(a - 1) + fib(a - 2));
}