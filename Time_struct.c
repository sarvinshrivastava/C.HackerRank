#include <stdio.h>

struct time_st {
    int hour, min, sec;
};

void main() {
    int n;
    struct time_st tst;
    scanf("%d", &n);
    while(n > 0) {
        scanf("%d%d%d", &tst.hour, &tst.min, &tst.sec);
        printf("%d:%d:%d", tst.hour, tst.min, tst.sec);
        n--;
    }
}