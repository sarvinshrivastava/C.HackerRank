#include <stdio.h>
#include <math.h>
void main() {
    int arr[100], a, n, sum, avg;
    printf("Enter the no. of integers to be added");
    scanf("%d", &n);
    for(a = 0; a < n; a++){
        printf("Enter the no.:");
        scanf("%d", &arr[a]);
        sum += arr[a];
    }
    avg = sum / n;
    printf("Sum is: %d\nAverage is: %d", sum, avg);
}