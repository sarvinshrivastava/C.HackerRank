#include<stdio.h>
void main(){
	int sal, tax, a;
	printf("Enter your salary");
	scanf("%d", &sal);
	if(sal <= 250000){
		tax = 0;
	}
	else if(sal >= 250001 && sal <= 500000){
		tax = sal - (sal / 5);
	}
	else if(sal >= 500001 && sal <= 750000){
		tax = sal - (sal / 10);
	}
	else if(sal >= 750001 && sal <= 1000000){
		tax = sal - (sal / 15);
	}
	else if(sal >= 1000001 && sal <= 1250000){
		tax = sal - (sal / 20);
	}
	else if(sal >= 1250001 && sal <= 1500000){
		tax = sal - (sal / 25);
	}
	else{
		tax = sal - (sal / 30);
	}
	printf("Tax calculated is: %d", tax);
}

