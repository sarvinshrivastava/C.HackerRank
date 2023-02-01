#include <stdio.h>

int main() {
    int a, b, c, d, m, n, e, x1, x2;
    printf("Enter the value of\n");
    printf("a:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    printf("c:");
    scanf("%d", &c);
    printf("d:");
    scanf("%d", &d);
    printf("m:");
    scanf("%d", &m);
    printf("n:");
    scanf("%d", &n);
    e = (a*d) - (b*c);
    if(e != 0){
        x1 = ((m*d) - (b*n)) / e;
        x2 = ((n*a) - (m*c)) / e;
        printf("Roots of the eqn. are %d and %d", x1, x2);
    }
    else{
        printf("Enter a valid eqn.");
    }
    return 0;
}   