#include <stdio.h>

int main() {
    int d, i;
    float a;
    scanf("%g", &a);
    printf("Width:");
    scanf("%d", &d);
    printf("Precision:");
    scanf("%d", &i);
    
    printf("%*.*f", d, i, a);
    return 0;
}