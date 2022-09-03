#include <stdio.h>
#include <math.h>
void main() {
    int i = 0, j = 0, k = 0, flag = 0;
    char a[100], b[100];
    printf("Enter a string:");
    scanf("%s", a);
    while(a[i] != '\0'){
        i++;
    }
    for(k = i-1; k >= 0; k--){
       b[j] = a[k];
       j++;
    }
    for(k = 0; k < i; k++){
        if(a[k] == b[k]){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    if(flag == 0){
        printf("Entered string is not palindrom");
    }
    else{
        printf("Entered string is palindrom");
    }
}