#include <stdio.h>
#include<math.h>

int main() {
    int m, n, g;
    printf("Enter value for\n");
    printf("m:");
    scanf("%d", &m);
    printf("n:");
    scanf("%d", &n);
    g = n % m;
    if(g == 0){
        printf("%d is multiple of %d", m, n);
    }
    else{
        printf("%d is not multiple of %d", m, n);
    }
    return 0;
}