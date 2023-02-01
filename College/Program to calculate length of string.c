#include <stdio.h>
#include <math.h>
void main() {
    int i = 0;
    char a[100];
    printf("Enter a string:");
    scanf("%s", a);
    while(a[i] != '\0'){
        i++;
        continue;
    }
    printf("The length of string is: %d", i);
}