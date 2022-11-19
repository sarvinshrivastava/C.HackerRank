#include <stdio.h>
#include <stdlib.h>

void input(int a) {
    int* ar[a], i, j, c;
    for(i = 0; i < a; i++) {
        for(j = 0; j < a; j++) {
            ar[i]  = (int*)calloc(a, sizeof(int));
        }
    }
    
    c = 0;
    for(i = 0; i < a; i++)
        for(j = 0; j < a; j++)
            ar[i][j] = 0;

    for(i = 0; i < a; i++) {
        for(j = 0; j < a; j++)
            printf("%d\t", ar[i][j]);
        printf("\n");
    }
    
}
void main() {
    int a;
    printf("Enter no:");
    scanf("%d", &a);
    input(a);
}