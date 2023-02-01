#include<stdio.h>
#include<math.h>

void main() {
    int p, r, t, si, ci, g, b, n;
    printf("Enter required data:");
    scanf("%d%d%d", &p, &r, &t);
    si = p * r * t / 100;
    b = pow(1 + r, t);
    ci = p * b;
    printf("Simple Intrest is: %d, Compound Intrest is: %d", si, ci);
}
