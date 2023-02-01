#include <stdio.h>
#include <math.h>
void main() {
    int arr[100], i, n, even[100], odd[100], j = 0, k = 0;
    printf("Enter the no. of integers to be added:");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the no.:");
        scanf("%d", &arr[i]);
    }
    /**
    for(i = 0; i < j; i++){
        printf("%d\n", &even[i]);
    }*/
    for(i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            even[j] = arr[i];
            j++;
        }
        else{
            odd[k] = arr[i];
            k++;
        }
    }
    printf("Even array is:\n");
    for(i = 0; i < j; i++){
        printf("%d\n", even[i]);
    }
    printf("Odd array is:\n");
    for(i = 0; i < k; i++){
        printf("%d\n", odd[i]);
    }
}