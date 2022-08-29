#include <stdio.h>
int main() {
    int x, y;
    printf("Enter length:");
    scanf("%d", &x);
    printf("Enter width:");
    scanf("%d", &y);
    printf("Area is:%d\nPerimeter is:%d", x*y, (x+y)*2);

    return 0;
}