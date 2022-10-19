#include <stdio.h>

int main() {
    int d, pp, sv, ys;
    printf("Enter the value of\n");
    printf("Depreciation:");
    scanf("%d", &d);
    printf("Purchase Price:");
    scanf("%d", &pp);
    printf("Years of Service:");
    scanf("%d", &ys);
    sv = pp - (d * ys);
    printf("Thus, Salvage Value is: %d", sv);
    return 0;
}