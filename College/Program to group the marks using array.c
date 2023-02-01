#include <stdio.h>
#include <math.h>

int main(){
    int arr[50], i, ele, j1, j2, j3, j4, j5, j6, j7, j8, j9, j10;
    /**Taking input in array*/
    for(i = 0; i< 50; i++){
        printf("Enter marks:");
        scanf("%d", &ele);
        arr[i] = ele;
    }
    /**Sorting the array*/
    for(i = 0; i < 50; i++){
        if(arr[i] >= 90){
            j1++;
        }
        else if(arr[i] >= 80){
            j2++;
        }
        else if(arr[i] >= 70){
            j3++;
        }
        else if(arr[i] >= 60){
            j4++;
        }
        else if(arr[i] >= 50){
            j5++;
        }
        else if(arr[i] >= 40){
            j6++;
        }
        else if(arr[i] >= 30){
            j7++;
        }
        else if(arr[i] >= 20){
            j8++;
        }
        else if(arr[i] >= 10){
            j9++;
        }
        else if(arr[i] >= 0){
            j10++;
        }
        else{
            printf("Please enter a valid marks");
        }
    }
    printf("No. of students who scored marks of the range\n");
    printf("0 - 9 are:%d\n", j10);
    printf("10 - 19 are:%d\n", j9);
    printf("20 - 29 are:%d\n", j8);
    printf("30 - 39 are:%d\n", j7);
    printf("40 - 49 are:%d\n", j6);
    printf("50 - 59 are:%d\n", j5);
    printf("60 - 69 are:%d\n", j4);
    printf("70 - 79 are:%d\n", j3);
    printf("80 - 89 are:%d\n", j2);
    printf("90 - 100 are:%d\n", j1);
    
    return 0;
}