#include <stdio.h>

struct time_st {
    int hour, min, sec;
}tst;

void main() {
    scanf("%d%d%d", &tst.hour, &tst.min, &tst.sec);
    tst.sec += 1;
    if(tst.sec == 60) {
        tst.sec = 00;
        tst.min += 1;
    }
    if(tst.min == 60) {
        tst.min = 00;
        tst.hour += 1;
    }
    if(tst.hour == 24)
        tst.hour = 00;
    printf("%d:%d:%d", tst.hour, tst.min, tst.sec);
}