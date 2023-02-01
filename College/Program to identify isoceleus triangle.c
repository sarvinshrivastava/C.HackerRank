#include <stdio.h>

int main() {
    int a, b, c, flag;
    scanf("%d %d %d", &a, &b, &c);
    if(a == b){
        if(a != c){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    else{
        if(b == c){
            flag = 1;
        }
        else{
            if(a == c){
                flag = 1;
            }
            else{
                flag = 0;
            }
        }
    }
    if(flag == 1){
        printf("Triangle is isoceleus");
    }
    else{
        printf("Triangle is not isoceleus");
    }
    return 0;
}