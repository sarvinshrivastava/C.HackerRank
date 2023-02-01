#include<stdio.h>
#include<conio.h>
int day_name(int a);
int main(){
	int n, i;
	char *p;
	clrscr();
	printf("Enter a no.:\n");
	scanf("%d", &n);
	p = day_name(n);
	for(i = 0; i < 8; i++){
		printf("%c", *p);
		*p++;
	}
	getch();
	return(0);
}
int day_name(int n){
	char *p1;
	switch(n){
		case 1:
			p1 = "monday";
			break;
		case 2:
			p1 = "tuesday";
			break;
		case 3:
			p1 = "wednesday";
			break;
		case 4:
			p1 = "thursday";
			break;
		case 5:
			p1 = "friday";
			break;
		case 6:
			p1 = "saturday";
			break;
		case 7:
			p1 = "sunday";
			break;
		default:
			printf("Enter no. between 1-7");
			break;
	}
	return(p1);
}