#include <stdio.h>
#include <math.h>
#include <string.h>
void main() {
    int n, k1, i = 0, rem[50];
    printf("Enter no. in decimal form:");
    scanf("%d", &n);
    printf("Binary form of %d is:\n", n);
    convert(n, rem, i);
}
int convert(int n, int rem[50], int i){
    int d, j;
    while(n > 0){
        d = n % 2;
        rem[i] = d;
        i++;
        n = n / 2;
        convert(n, rem, i);
    }
    for(j = 0; j <= i; j++){
        printf("%d", rem[i-j]);
    }
    return(0);
}
