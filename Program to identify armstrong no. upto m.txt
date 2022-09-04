#include <stdio.h>
#include <math.h>

void main() {
    int n, i = 0, s , k, a , p, d, m;
    scanf("%d", &m);
    for(n = 0; n <= m; n++){
        k = n; a = n;
        while(n > 0){
            d = n % 10;
            n = n - d;
            n = n / 10;
            i++;
        }
        //printf("%d\n", i);
        while(k > 0){
            p = k % 10;
            s = s + pow(p ,i);
            k = k - p;
            k = k / 10;
        }
        if(a == s){
            printf("%d is armstrong\n", a);
        }
    }
}