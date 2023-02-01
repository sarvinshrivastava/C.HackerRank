#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the value of\n");
    printf("Side a:");
    scanf("%d", &a);
    printf("Side b:");
    scanf("%d", &b);
    printf("Side c:");
    scanf("%d", &c);
    if(c*c == (a*a + b*b)){
        printf("Triangle is right angled");
    }
    else if(b*b == (c*c + a*a)){
        printf("Triangle is right angled");
    }
    else if(a*a == (b*b + c*c)){
        printf("Triangle is right angled");
    }
    else{
        printf("Triangle is not right angled");
    }
    return 0;
}