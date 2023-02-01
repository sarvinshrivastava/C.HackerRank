#include<stdio.h>
#include<math.h>
#include<conio.h>
void swaped(int a, int b);
void main(){
	clrscr();
	int n1, n2;
	printf("Program to swap no.:\n");
	scanf("%d %d", &n1, &n2);
	printf("Swaped no.s are:\n");
	swaped(n1, n2);
	getchar();
	getchar();
}
void swaped(int n1, int n2){
	n1 = n1 + n2;
	n2 = n1 - n2;
	n1 = n1 - n2;
	printf("%d %d", n1, n2);
};