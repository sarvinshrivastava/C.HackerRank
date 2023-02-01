#include <stdio.h>
#include <math.h>
void main() {
    int arr[100], i, n, min = 9999, j, count;
    printf("Enter the no. of integers to be added:");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the no.:");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    printf("Smallest no. in the array is: %d\n", min);
}