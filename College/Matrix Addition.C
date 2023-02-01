#include<stdio.h>
#include<conio.h>
void main(){
	int a1, a2, b1, b2, i, j, *p1, *p2, *p3;
	int a[50][50], b[50][50], c[50][50];
	clrscr();
	printf("Enter the no. of rows and colums in first matrix:");
	scanf("%d%d", &a1, &b1);
	printf("Enter the no. of rows and colums in second matrix:");
	scanf("%d%d", &a2, &b2);
	if(a1 == a2 && b1 == b2){
		printf("For first matrix:\n");
		for(i = 0; i < a1; i++){
			for(j = 0; j < b1; j++){
				printf("Enter the no.");
				scanf("%d", &a[i][j]);
			}
		}
		printf("For second matrix:\n");
		for(i = 0; i < a2; i++){
			for(j = 0; j < b2; j++){
				printf("Enter the no.");
				scanf("%d", &b[i][j]);
			}
		}
		for(i = 0; i < a1; i++){
			for(j = 0; j < b1; j++){
				*p1 = a[i][j]; *p2 = b[i][j];
				c[i][j] = *p1 + *p2;
			}
		}
		for(i = 0; i < a1; i++){
			for(j = 0; j < b1; j++){
				*p3 = c[i][j];
				printf("%d\t", *p3);
			}
			printf("\n");
		}
	}
	getch();
}