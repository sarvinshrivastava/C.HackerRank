#include <stdio.h>

int main() {
    int x, y, a, b, c;
    scanf("%d %d", &x, &y);
    a = (x+y)/(x-y);
    b = (x+y)/2;
    c = (x+y)*(x-y);
    printf("%d %d %d", a, b, c);
    return 0;
}