#include <stdio.h>
int main() {
    int x, y, z, a;
    printf("Enter value of x:");
    scanf("%d", &x);
    printf("Enter value of y:");
    scanf("%d", &y);
    printf("Enter value of z:");
    scanf("%d", &z);
    a = x;
    x = y;
    y = z;
    z = a;
    printf("Now x is:%d\ny is:%d\nz is:%d", x, y, z);

    return 0;
}