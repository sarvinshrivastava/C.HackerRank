#include <stdio.h>
#include <math.h>
void main() {
    int arr[100], i, n, temp, j, count;
    printf("Enter the no. of integers to be added:");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the no.:");
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                count += 1;
            }
        }
    }
    printf("No. of duplicates in array are: %d\n", count);
}