#include<stdio.h>
#include<conio.h>
#include<string.h>

char reverse(char*, int);

void main() {
	char str[50];
	int i;
	clrscr();
	printf("Enter the string");
	scanf("%s", &str);
	i = strlen(str) - 1;
	printf("Reverse is:\n");
	reverse(&str, i);
}

char reverse(char* p, int i) {
	if(i >= 0) {
		printf("%c", *(p + i));
		i--;
		return reverse(p, i);
	}
}