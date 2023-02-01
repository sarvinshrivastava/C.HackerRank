#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 0, s , k, a , p, d;
    scanf("%d", &n);
    k = n; a = n;
    while(n > 0){
        d = n % 10;
        n = n - d;
        n = n / 10;
        i = i + 1;
    }
    while(k > 0){
        p = k % 10;
        s = s + pow(p ,i);
        k = k - p;
        k = k / 10;
    }
    if(a == s){
        printf("No. is armstrong");
    }
    else{
        printf("No. is not armstrong");
    }
    return 0;
}