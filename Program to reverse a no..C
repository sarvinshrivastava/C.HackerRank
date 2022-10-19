#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 0, k, d, x, num = 0, g;
    printf("Enter the no.:");
    scanf("%d", &n);
    k = n;
    while(n > 0){
        d = n % 10;
        n = n - d;
        n = n / 10;
        i++;
    }
    i--;
    while(k > 0){
        x = k % 10;
        k = k - x;
        k = k / 10;
        g = pow(10, i);
        num = num + (x * g);
        i--;
    }
    printf("%d", num);
    return 0;
}
