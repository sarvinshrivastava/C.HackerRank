#include <stdio.h>

int main() {
    int n, flag = 0;
    printf("Enter any no.:");
    scanf("%d", &n);
    if(n % 2 == 0){
        printf("Given no. is even");
        flag = 1;
    }
    if(flag != 1){
        printf("Given no. is odd");
    }
    return 0;
}   