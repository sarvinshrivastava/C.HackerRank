#include<stdio.h>
#include<conio.h>
void main(){
	int arr[50], *p1, i = 0, n;
	clrscr();
	printf("Enter the no. of elements to be entered:\n");
	scanf("%d", &n);
	for(i = 0 ; i < n; i++){
		printf("Enter the no.:");
		scanf("%d", &arr[i]);
	}
	printf("Reverse order of array is:\n");
	for(i = n; i > 0; i--){
		p1 = arr[i];
		printf("%d\n", p1);
	}
	getch();
}