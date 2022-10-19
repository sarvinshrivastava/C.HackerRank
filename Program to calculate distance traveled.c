#include <stdio.h>

int main() {
    int a, u, d, t1, t2;
    printf("Enter the value of:\n");
    printf("u:");
    scanf("%d", &u);
    printf("a:");
    scanf("%d", &a);
    printf("initial time:");
    scanf("%d", &t1);
    printf("final time:");
    scanf("%d", &t2);
    d = u * (t2-t1) + (a * (t2*t2 - t1*t1)) / 2;
    printf("Distance traveled in the time interval is %d meters", d);
    return 0;
}