#include <stdio.h>
#include <math.h>

int main(){
    int arr[10], i, ele, max = 0;
    /**Taking input in array*/
    for(i = 0; i< 10; i++){
        printf("Enter the no.:");
        scanf("%d", &ele);
        arr[i] = ele;
    }
    /**Finding the maximum in the array*/
    for(i = 0; i < 10; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else{
            continue;
        }
    }
    printf("Max no. in the array is: %d", max);
    
    return 0;