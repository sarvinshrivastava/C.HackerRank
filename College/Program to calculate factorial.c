include <stdio.h>

int main() {
    int n, i, fac;
    scanf("%d", &n);
    fac = n;
    for(i = 1; i < n; i++){
        fac = fac * (n-i);
    }
    printf("%d", fac);
    return 0;
}