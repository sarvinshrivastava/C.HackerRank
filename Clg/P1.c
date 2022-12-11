#include <stdio.h>

void main() {
    int mat, eng, hin, phy, chem, t;
    float per;
    printf("Enter marks of the student:\n");
    scanf("%d%d%d%d%d", &mat, &eng, &hin, &phy, &chem);
    t = mat + eng + hin + phy + chem;
    per = t / 5;
    printf("Sum is: %d, Percentage is: %f%", t, per);

}