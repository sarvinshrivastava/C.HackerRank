#include <stdio.h>
#include <math.h>
#include <string.h>
void main() {
    int n1, n2, k1, k2, max, i = 1;
    printf("Enter no. 1:");
    scanf("%d", &n1);
    printf("Enter no. 2:");
    scanf("%d", &n2);
    k1 = n1; k2 = n2;
    max = HCF(n1, n2, i);
    printf("Highest Common Factor of %d and %d is: %d", k1, k2, max);
}
int HCF(int n1, int n2, int i){
    int min, max = 0, j, flag = 0;
    if(n1 > n2){
        min = n2;
    }
    else{
        min = n1;
    }
    while(i <= min){
        if(n1 % i == 0){
            if(n2 % i == 0){
                for(j = 1; j <= i/2; j++){
                    if(i % j == 0){
                        break;
                    }
                    else{
                        flag = 1;
                    }
                }
                if(flag = 1){
                    if(max < i){
                        max = i;
                    }
                }
            }
            i++;
            HCF(n1, n2, i);
        }
    }
    return(max);
}