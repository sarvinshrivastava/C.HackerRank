#include<stdio.h>
#include<conio.h>
void main(){
	int arr[50];
	int n, i, j, ele, *p1, *p2, *p3;
	clrscr();
	printf("Enter the no. of elements:");
	scanf("%d", &n);
	p1 = arr;p2 = arr; p3 = arr;
	for(i = 0; i < n; i++){
		printf("Enter the no.:");
		scanf("%d", &arr[i]);
	}
	p3++;
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(*p2 > *p3){
				ele = *p2;
				*p2 = *p3;
				*p3 = ele;
			}
			p3++;
		}
		p2++; p3 = p2+1;
	}
	for(i = 0; i < n; i++){
		printf("\n%d", *p1);
		p1++;
	}
	getch();
}