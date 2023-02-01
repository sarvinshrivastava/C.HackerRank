#include "stdio.h"

void main() {
    float r, ar, cir;
    printf("Enter the radii:");
    scanf("%d", &r);
    cir = 2 * 3.14 * r;
    ar = 3.14 * r * r;
    printf("Area is: %d, Circumference is: %d", ar, cir);
}
