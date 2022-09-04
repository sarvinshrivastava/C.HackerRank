#include <stdio.h>
#include <math.h>
void main() {
    int i, j, mat[15][15], m, n;
    printf("Enter no. of rows:");
    scanf("%d", &n);
    printf("Enter no. of columns:");
    scanf("%d", &m);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Enter a no.:");
            scanf("%d", &mat[i][j]);
        }
    }
    printf("Entered matrix is:\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d\t\t", mat[i][j]);
        }
        printf("\n\n");
    }
}