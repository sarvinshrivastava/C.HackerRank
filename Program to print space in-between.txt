#include<stdio.h>
#include<conio.h>
void space(int a);
void main(){
	int x;
	clrscr();
	printf("Enter the space required:");
	scanf("%d", &x);
	space(x);
	getchar();
	getchar();
}
void space(int x){
	printf("*");
	while(x > 0){
		printf(" ");
		x--;
	}
	printf("*");
}