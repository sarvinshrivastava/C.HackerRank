#include <stdio.h>
#include <math.h>
void main() {
    int n, i, j, mat[100][100];
    printf("Enter a no.");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i < j){
                mat[i][j] = 1;
            }
            else if(i == j){
                mat[i][j] = 0;
            }
            else{
                mat[i][j]  = -1;
            }
        }
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t\t", mat[i][j]);
        }
        printf("\n\n");
    }
}