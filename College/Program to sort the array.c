#include <stdio.h>
#include <math.h>
void main() {
    int arr[100], i, n, temp, j;
    printf("Enter the no. of integers to be added");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the no.:");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        for(j = 1 + i; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("The shorted list is:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
}