#include <stdio.h>
#include <math.h>
#include <string.h>
void main() {
    int sum = 0, n1, n2, k;
    printf("Enter the upper extreme:");
    scanf("%d", &n1);
    printf("Enter the lower extreme:");
    scanf("%d", &n2);
    printf("Prime no. between %d and %d are:\n", n2, n1);
    sum = prime(n1, n2, sum);
}
int prime(int n1, int n2, int sum){
    int i, flag;
    while(n2 <= n1){
        for(i = 2 ; i <= n2/2; i++){
            if(n2 % i != 0){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            printf("%d\n", n2);
        }
        n2++;
        prime(n1, n2, sum);
    }
    return(0);
}
