#include <stdio.h>
#include <math.h>

int main() {
    int i, n, a = 0, b = 1, c, ele;
    scanf("%d", &n);
    printf("%d\n%d\n", a, b);
    for(i = 0; i<=n; i++){
        ele = a + b;
        printf("%d\n", ele);
        c = b; b = ele, a = c;
    }
    return 0;
}