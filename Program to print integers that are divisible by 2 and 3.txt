#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    printf("No. which are not divisible by 2 or 3")
    for(i = 1; i <= 100; i++){
        if(i % 2 != 0){
            if(i % 3 != 0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}