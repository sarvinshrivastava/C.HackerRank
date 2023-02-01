#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        if(i % 2 != 0){
            if(i % 7 != 0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}