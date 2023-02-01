#include <stdio.h>

struct personal {
    char name[20];
    long int dob;
};
void main() {
    int i, flag, len1, len2;
    struct personal p1;
    printf("Input Value\n");
    scanf("%s %ld", p1.name, &p1.dob);
    struct personal p2;
    scanf("%s %ld", p2.name, &p2.dob);
    flag = 0; i = 0;
    while(p1.name[i] != '\0')
        i++;
    len1 = i; i = 0;
    while(p2.name[i] != '\0')
        i++;
    len2 = i;
    if(len1 == len2) {
        for(i = 0; i <= len1; i++) {
            if(p1.name[i] != p2.name[i]) {
                flag = 1;
                break;
            }
        }
    }
    else {
        flag = 1;
    }
    if(flag == 0) {
        printf("Name same");
    }
    else {
        printf("Name not same");
    }
    if(p1.dob == p2.dob)
        printf("Date of Birth same");
    else
        printf("Date of BIrth not same");
}