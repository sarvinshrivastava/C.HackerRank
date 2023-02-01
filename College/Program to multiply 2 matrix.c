#include <stdio.h>
#include <math.h>
void main() {
    int i, j, m, n, p, q, sum = 0, k, x = 0, y = 0;
    int a[100][100], b[100][100], mul[100][100];
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
    if(n == q){
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                sum = 0;
                for(k = 0; k <= j; k++){
                    sum += a[i][j] * b[j][i];
                }
                mul[x][y] = sum;
                y++;
            }
            x++;
        }
        printf("Product matrix is:\n");
        for(i = 0; i < m; i++){
            for(j = 0; j < n; j++){
                printf("%d\t\t", mul[i][j]);
            }
            printf("\n\n");
        }
    }
    else{
        printf("Only matrixs having equal no. of row in first matrix and column in second matrix can be operated arithmetically.");
    }
}