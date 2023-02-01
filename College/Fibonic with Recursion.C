#include<stdio.h>
#include<conio.h>
int fic(int);
void main() {
	int n, re;
	printf("Enter the required term\n");
	scanf("%d", &n);
	re = fic(n);
	printf("Term required is: %d");
}
int fic(int a) {
	int i;
	if(a == 1)
		return 0;
	if(a == 2)
		return 1;
	if(a >= 3)
		return (fic(a-1) + fic(a-2));
}