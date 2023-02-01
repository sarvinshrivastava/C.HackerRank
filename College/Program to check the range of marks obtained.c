#include <stdio.h>

int main() {
    int a, i, p1 = 0, p2 = 0, p3 = 0, p4 = 0, x;
    printf("Enter the no. of students:");
    scanf("%d", &a);
    for(i = 1; i <= a; i++){
        printf("Enter marks:");
        scanf("%d", &x);
        if(x <= 100){
            if(x > 80){
                p1++;
            }
            else if(x > 60){
                p2++;
            }
            else if(x > 40){
                p3++;
            }
            else if(x >= 0){
                p4++;
            }
            else{
                printf("Enter valid marks\n");
            }
        }
        else{
            printf("Enter valid marks\n");
        }
    }
    printf("No. of students scored\n");
    printf("greater than 80: %d\n", p1);
    printf("greater than 60: %d\n", p2);
    printf("greater than 40: %d\n", p3);
    printf("greater than 0:  %d\n", p4);
    return 0;
} 