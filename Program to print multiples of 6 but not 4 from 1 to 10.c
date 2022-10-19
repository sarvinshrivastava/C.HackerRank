#include <stdio.h>

int main() {
    int a, rem1, rem2, i = 0;
    printf("No. that are divisible by 6 but not 4 in between 0 & 100 are:");
    here:
    for(a = 1; a <= 100; a++){
        rem1 = a % 6;
        rem2 = a % 4;
        //printf("%d %d\n", rem1, rem2);
        if(rem1 == 0){
            if(rem2 != 0){
                a++;
                i++;
                printf("%d", a);
            }
            else{
                a++;
                goto here;
            }
        }
        else{
            a++;
            goto here;
        }
    }
    printf("Count is equal to %d", i);
    return 0;