#include <stdio.h>
#include <stdlib.h>

void input(int a) {
    int* ar[a], i, j, c;
    for(i = 0; i < a; i++) {
        c = i + 1;
        ar[i]  = (int*)calloc(c, sizeof(int));
    }
    
    for(i = 0; i < a; i++)
        for(j = 0; j < i + 1; j++)
            ar[i][j] = 0;

    for(i = 0; i < a; i++) {
        for(j = 0; j < i + 1; j++)
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