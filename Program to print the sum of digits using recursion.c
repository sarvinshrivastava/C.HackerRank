#include <stdio.h>
#include <math.h>
#include <string.h>
void main() {
    int sum = 0, n, k;
    printf("Enter a no.:");
    scanf("%d", &n);
    k = n;
    sum = digsum(n, sum);
    printf("Sum of digits in %d is: %d", k, sum);
}
int digsum(int n, int sum){
    int d;
    while(n > 0){
        d = n %10;
        n = n / 10;
        sum = sum + d;
        digsum(n, sum);
    }
    return(sum);
}