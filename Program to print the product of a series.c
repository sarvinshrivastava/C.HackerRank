#include <stdio.h>

int main() {
    int i, n, a, p = 1;
    scanf("%d %d", &n, &a);
    for(i = 1; i <= n; i++){
         p = p * (1 + i*a);
    }
    printf("%d", p);
    return 0;
}