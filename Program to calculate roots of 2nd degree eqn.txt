#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, D, X, Y;
    printf("Enter the value of a, b and c:\n");
    scanf("%d %d %d", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    if(D < 0){
      printf("Imaginary root");
    }
    else{
      X = ((0-b) + sqrt(D)) / (2*a);
      Y = ((0-b) - sqrt(D)) / (2*a);
      printf("Roots are:%d %d", X, Y);
    }
}