#include<stdio.h>
#include<conio.h>
int prime(int a);
void main(){
	int n;
	clrscr();
	printf("Enter the no.:");
	scanf("%d", &n);
	prime(n);
	getchar();
	getchar();
}
int prime(int n){
	int flag, i;
	flag = 0;
	for(i = 1; i <= n/2; i++){
		if(n%i == 0){
			flag = 1;
			break;
		}
	}
	if(flag == 0){
		printf("1");
	}
	else{
		printf("0");
	}
	return 0;
}