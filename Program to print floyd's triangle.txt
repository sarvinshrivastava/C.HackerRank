#include <stdio.h>

int main() {
    int a, i, x, j, k = 1;
    printf("Enter the range of floyd's triangle:");
    scanf("%d", &a);
    for(i = 1; i <= a; i++){
        for(j = 1; j <= i; j++){
            if(k <= a){
                printf("%d\t", k);
                k++;
            }
            else{
                goto here;
            }
        }
        printf("\n");
    }
    here:
    return 0;
}