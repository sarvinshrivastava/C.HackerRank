#include<stdio.h>
#include<conio.h>
int x, n;
int power();
void main()
{
	int result;
	clrscr();
	printf("Enter the value of base:");
	scanf("%d", &x);
	printf("Enter the value of exponent:");
	scanf("%d", &n);
	result = power();
	printf("Value of %d ^ %d is: %d", x, n, result);
}
int power(){
	int p = 1, i;
	for(i = 1; i <= n; i++) {
		p *= x;
	}
	return p;
}



