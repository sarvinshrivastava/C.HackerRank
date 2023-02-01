#include <stdio.h>

int main() {
    int x, n, i, k;
    long long int pro = 1;
    printf("Enter the value of\n");
    printf("x:");
    scanf("%d", &x);
    printf("n:");
    scanf("%d", &n);
    printf("k\t\tx^k\n");
    for(k = 0; k <= n; k++){
        for(i = 1; i <= k; i++){
            pro = pro * x;
        }
        printf("%d\t\t%d\n", k, pro);
        pro = 1;
    }
    return 0;
}