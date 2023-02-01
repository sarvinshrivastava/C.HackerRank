#include <stdio.h>
#include <math.h>
void main() {
    int i = 0, j = 0, k = 0;
    char a[100], b[100], add[100];
    printf("Enter first string:");
    scanf("%s", a);
    printf("Enter second string:");
    scanf("%s", b);
    while(a[i] != '\0'){
        add[k] = a[i];
        k++;
        i++;
    }
    while(b[j] != '\0'){
        add[k] = b[j];
        k++;
        j++;
    }
    add[k] = '\0';
    printf("Combined string is:\n");
    for(k = 0; add[k] != '\0'; k++){
        printf("%c", add[k]);
    }
}