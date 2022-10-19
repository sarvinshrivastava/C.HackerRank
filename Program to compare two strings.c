#include <stdio.h>
#include <math.h>
void main() {
    int i = 0, k, flag = 0, j = 0;
    char a[100], b[100];
    printf("Enter first string:");
    scanf("%s", a);
    printf("Enter second string:");
    scanf("%s", b);
    while(a[i] != '\0'){
        i++;
    }
    while(b[j] != '\0'){
        j++;
    }
    if(i == j){
        for(k = 0; k < i; k++){
            if(a[i] != b[i]){
                flag = 1;
                break;
            }
            else{
                flag = 0;
                continue;
            }
        }
    }
    else{
        flag = 1;
    }
    if(flag == 1){
        printf("Entered string are not equal.");
    }
    else{
        printf("Entered are equal.");
    }
}