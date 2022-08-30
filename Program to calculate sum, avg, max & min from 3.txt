#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c, max, sum, min;
    float avg;
    printf("Enter value for\n");
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    printf("c:");
    scanf("%d", &c);
    sum = a + b + c;
    avg = sum / 3;
    if(a > b){
        if(a > c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if(b > c){
            max = b;
        }
        else{
            max = c;
        }
    }
    if(a > b){
        if(b > c){
            min = c;
        }
        else{
            min = b;
        }
    }
    else{
        if(a > c){
            min = c;
        }
        else{
            min = a;
        }
    }
    printf("Sum is: %d\n", sum);
    printf("Average is: %g\n", avg);
    printf("Max is: %d\n", max);
    printf("Min is: %d", min);
    return 0;
}