#include<stdio.h>
#include<stdlib.h>
void  main(){
    int *pt, n, i;
    printf("Enter the size:");
    scanf("%d", &n);
    pt = (int *)malloc(n*sizeof(int));
    for(i = 0; i < n; i++){
        printf("Enter the element:");
        scanf("%d", (pt+i));
    }
    i--;
    printf("Reverse of entered array is:");
    for(; i >= 0; i--){
         printf("%d ", *(pt + i));
    }
}
