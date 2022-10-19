#include <stdio.h>

int main() {
    int a, b, d, c, p, q;
    scanf("%d %d", &a, &b);
    c = a;
    d = c % 10;
    c = c - d;
    c = c / 10;
    p = d*b; q = (c*b)*10;
    printf("Two digit multiplication is as follows\n");
    printf("\t\t\t%d\n\t\t*\t%d", b, a);
    printf("\n________________");
    printf("\n%d*%d is     %d", d, b, p);
    printf("\n%d*%d is    %d", c, b, q);
    printf("\n________________");
    printf("\nAdd them   %d", p + q);
    printf("\n________________");
    return 0;
}
