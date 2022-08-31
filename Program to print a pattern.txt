#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, a, b;
    printf("Enter the no.:");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d\t", i);
        }
        printf("\n");
    }
    for(a = 1; a <= n; a++){
        for(b = n; b >= a; b--){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}