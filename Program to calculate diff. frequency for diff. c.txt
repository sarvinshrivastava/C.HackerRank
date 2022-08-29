#include <stdio.h>
#include<math.h>

int main() {
    int l, r, f;
    float c;
    printf("Enter the value of:\n");
    printf("Inductance:");
    scanf("%d", &l);
    printf("Resistance:");
    scanf("%d", &r);
    printf("Different values of f for c in range 0.01 to 0.1 are");
    for(c = 0.01; c <= 0.1; c += 0.01){
        f = sqrt((1 / (l*(int)c)) - ((r*r) / (4 * ((int)c*(int)c))));
        printf("%d", f);
    }
    return 0;
}