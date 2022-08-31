#include <stdio.h>

int main() {
    int a = 1, i = 2, count = 0, flag, n;
    printf("Enter the extreme point:");
    scanf("%d", &n);
    while(a <= n){
        //printf("%d\n", a);
        i = 2;
        while(i <= (a/2)){
            //printf("i = %d\n", i);
            if(a % i == 0){
                i = 2;
                break;
            }
            else{
                i++;
                flag = 1;
            }
        }
        if(flag == 1){
            //printf("pr %d\n", a);
            count++;
        }
        flag = 0;
        a++;
    }
    printf("No. of prime numbers b/w 1 to %d is equal to %d", n, count);
    return 0;
}