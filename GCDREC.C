#include<stdio.h>
#include<conio.h>

//int ;

int gcd(int, int, int);

void main() {
	int n1, n2, min, g;
	clrscr();
	printf("Enter the no's: ");
	scanf("%d%d", &n1, &n2);
	min = (n1 < n2) ? n1 : n2;
	g = gcd(min, n1, n2);
	printf("GCD is: %d", g);
}

int gcd(int a, int n1, int n2) {
	if(a > 0) {
		if(n1 % a == 0 && n2 % a == 0)
			return a;
		else
			return gcd(a-1, n1, n2);
	}
}











