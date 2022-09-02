#include <stdio.h>
#include <math.h>
void main() {
    int arr[100], i, n, temp, j;
    printf("Enter the no. of integers to be added:");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the no.:");
        scanf("%d", &arr[i]);
    }
    printf("Printing array in reverse order:\n");
    for(i = n - 1; i >= 0; i--){
        printf("%d\n", arr[i]);
    }
}