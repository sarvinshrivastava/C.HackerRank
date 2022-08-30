#include <stdio.h>
#include<math.h>

int main() {
    int a, b, c, max = 0, i = 0;
    printf("Enter value for\n");
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    printf("c:");
    scanf("%d", &c);
    while(a > 0 || b > 0){
        a--;
        b--;
        i++;
    }
    while(i > 0 || c > 0){
        i--;
        c--;
        max++;
    }
    printf("Max is: %d", max);
    return 0;
}