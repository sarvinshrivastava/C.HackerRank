#include<stdio.h>
#include<conio.h>
void main(){
	int n, i, r;
	clrscr();
	r = 0;
	printf("Enter a no.:\n");
	scanf("%d", &n);
	printf("Reverse of entered is:");
	while(n > 0){
		i = n % 10;
		n = n / 10;
		r = r * 10 + i;
	}
	printf("%d", r);
}



