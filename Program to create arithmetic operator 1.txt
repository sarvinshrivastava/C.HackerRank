#include <stdio.h>
#include <math.h>
#include <string.h>
void main() {
    int a, b, sum, diff, pro, div;
    printf("Enter any two no.:");
    scanf("%d %d", &a, &b);
    sum = add(a, b);
    diff = sub(a, b);
    pro = mul(a, b);
    div = divi(a, b);
    printf("Sum of %d and %d is: %d\n", a, b, sum);
    printf("Difference of %d and %d is: %d\n", a, b, diff);
    printf("Product of %d and %d is: %d\n", a, b, pro);
    printf("Division of %d and %d is: %d", a, b, div);
}
void add(int a, int b){
    int sum;
    sum = a + b;
    return(sum);
}
void sub(int a, int b){
    int diff;
    diff = a - b;
    return(diff);
}
void mul(int a, int b){
    int pro;
    pro = a * b;
    return(pro);
}
void divi(int a, int b){
    int div;
    div = a / b;
    return(div);
}