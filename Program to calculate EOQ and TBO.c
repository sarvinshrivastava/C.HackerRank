#include <stdio.h>
#include<math.h>

int main() {
    int sc, dr, hc, eoq, tbo;
    printf("Enter the value of:\n");
    printf("Demand Rate:");
    scanf("%d", &dr);
    printf("Setup Cost:");
    scanf("%d", &sc);
    printf("Holding Cost:");
    scanf("%d", &hc);
    eoq = sqrt((2 * (dr*sc)) / hc);
    tbo = sqrt((2 * sc) / (dr * hc));
    printf("Thus EOQ is %d and TBO is %d", eoq, tbo);
    return 0;
}