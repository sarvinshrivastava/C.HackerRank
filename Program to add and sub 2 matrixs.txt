#include <stdio.h>
#include <math.h>
void main() {
    int i, j, a[100][100], m, n, p, q, b[100][100], add[100][100], sub[100][100];
    printf("Enter no. of rows in first matrix:");
    scanf("%d", &n);
    printf("Enter no. of columns in first matrix:");
    scanf("%d", &m);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Enter a no.:");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter no. of rows in second matrix:");
    scanf("%d", &p);
    printf("Enter no. of columns in second matrix:");
    scanf("%d", &q);
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("Enter a no.:");
            scanf("%d", &b[i][j]);
        }
    }
    if(m == q || n == p){
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                add[i][j] = a[i][j] + b[i][j];
                sub[i][j] = a[i][j] - b[i][j];
            }
        }
        printf("Sum matrix is:\n");
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("%d\t\t", add[i][j]);
            }
            printf("\n\n");
        }
        printf("Difference matrix is:\n");
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("%d\t\t", sub[i][j]);
            }
            printf("\n\n");
        }
    }
    else{
        printf("Only matrixs having same no. of rows and columns can be operated arithmetically.");
    }
}