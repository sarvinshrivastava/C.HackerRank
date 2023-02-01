#include <stdio.h>
#include <math.h>
void main() {
    int i = 0, k;
    char a[100];
    printf("Enter a string:");
    scanf("%s", a);
    while(a[i] != '\0'){
        i++;
    }
    printf("Reverse of entered string is:\n");
    for(k = i-1; k >= 0; k--){
        printf("%c", a[k]);
    }
}