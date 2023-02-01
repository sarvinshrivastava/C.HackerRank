#include <stdio.h>
#include <math.h>
void main() {
    int i = 0;
    char a[100], b[100];
    printf("Enter a string:");
    scanf("%s", a);
    while(a[i] != '\0'){
        b[i] = a[i];
        i++;
    }
    printf("The copied string is: %s", b);
}