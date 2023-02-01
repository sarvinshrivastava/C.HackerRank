#include <stdio.h>
#include <math.h>

int main(){
    int  x;
    float a, b;
    printf("------------------------------\n");
    printf("  x(deg)\tsin(x)\tcos(x)  \n");
    printf("------------------------------\n");
    for(x = 0; x <= 180; x = x + 15){
        a = sin(x); b = cos(x);
        printf("  %d \t\t %0.2g \t\t %0.2g  \n", x, a, b);
    }
    printf("------------------------------\n");

    return 0;
}
