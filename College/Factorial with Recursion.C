#include<stdio.h>
#include<conio.h>
int n, re = 1;
void fact(int);
void main() {
	int i = 1;
	clrscr();
	printf("Enter a no:");
	scanf("%d", &n);
	fact(i);
	printf("Factorial of %d is %d", n, re);
}
void fact(int i){
	if(i <= n) {
		re *= i;
		i++;
		fact(i);
	}
}