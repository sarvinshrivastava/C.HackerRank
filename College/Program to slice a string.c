#include <stdio.h>
#include <math.h>
#include <string.h>
void main() {
    char str[100];
    int n, m, i;
    printf("Enter the string:");
    scanf("%s", &str);
    printf("Enter the length of extracted part:");
    scanf("%d", &m);
    printf("Enter the starting point:");
    scanf("%d", &n);
    if(strlen(str) <= m && n != 1){
        printf("Error!!!");
    }
    else{
        for(i = n; i <= m; i++){
            printf("%c", str[i]);
        }
    }
}