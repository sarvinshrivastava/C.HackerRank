#include<stdio.h>
#include<stdlib.h>
void  main(){
    int *pt, n, i, sum;
    sum = 0;
    printf("Enter the size:");
    scanf("%d", &n);
    pt = (int *)malloc(n*sizeof(int));
    for(i = 0; i < n; i++){
        printf("Enter the element:");
        scanf("%d", (pt+i));
    }
    printf("Sum of entered elements is:");
    for(i = 0; i < n; i++){
         sum = sum + *(pt + i);
    }
    printf("%d", sum);
}
