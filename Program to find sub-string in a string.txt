#include <stdio.h>
#include <math.h>
void main() {
    char a[100], b[100];
    int i1 = 0, i2 = 0, j1, j2 = 0, j3, flag = 0;
    printf("Enter the string:");
    scanf("%s", &a);
    printf("Enter the sub-string:");
    scanf("%s", &b);
    while(a[i1] != '\0'){
        i1++;
    }
    while(b[i2] != '\0'){
        i2++;
    }
    for(j1 = 0; j1 < i1; j1++){
        here:
        if(a[j1] == b[j2]){
            break;
        }
    }
    for(j3 = j1; j3 < j1 + i2; j3++){
        if(a[j3] != b[j2]){
            flag =  1;
            goto here;
            break;
        }
        else{
            flag = 0;
        }
        j2++;
    }
    if(flag != 1){
        printf("Substring Present!");
    }
    else{
        printf("Substring Not Present!");
    }
}