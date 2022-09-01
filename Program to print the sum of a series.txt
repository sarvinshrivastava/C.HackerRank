#include <stdio.h>
#include <math.h>

int main(){
    int n, i, x, g, fac = 1, j, sum = 0;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the value of x:");
    scanf("%d", &x);
    for(i = 1; i <= n; i++){
        g = pow(x, i);
        for(j = 1; j <= i; j++){
            fac *= j;
        }
        sum = sum + g / fac;
    }
    printf("%d", sum+1);
    
    return 0;
}