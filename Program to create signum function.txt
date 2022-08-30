#include <stdio.h>

int main() {
    int a, flag = 0;
    printf("Enter any no.");
    scanf("%d", &a);
    flag = (a >= 0) ? ((a > 0) ? 0: 2) : 1;
    printf("%d\n", flag);
    switch(flag){
        case 0:{
            printf("1\n");
            goto here;
        }
        case 1:{
            printf("-1\n");
            goto here;
        }
        case 2:{
            printf("0\n");
            goto here;
        }
        default:{
            goto here;
        }
    }
    here:
    return 0;
}