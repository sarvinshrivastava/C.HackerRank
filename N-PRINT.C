#include<stdio.h>
#include<conio.h>

int print(int);

void main() {
	int n;
	clrscr();
	printf("Enter the no: ");
	scanf("%d", &n);
	printf("No.s are:");
	print(n);
	getch();
}

int print(int a) {
	if(a >= 0)
		printf("%d\n", a);
		return print(a - 1);

}











