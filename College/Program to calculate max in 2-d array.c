#include <stdio.h>
#include <math.h>
void main() {
    char city, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
    int temp[100][100], max = 0, i, j, k, l;
    /**Scaning city*/
    printf("Enter city1:");
    scanf("%c", &c1);
    printf("Enter city2:");
    scanf("%c", &c2);
    printf("Enter city3:");
    scanf("%c", &c3);
    printf("Enter city4:");
    scanf("%c", &c4);
    printf("Enter city5:");
    scanf("%c", &c5);
    printf("Enter city6:");
    scanf("%c", &c6);
    printf("Enter city7:");
    scanf("%c", &c7);
    printf("Enter city8:");
    scanf("%c", &c8);
    printf("Enter city9:");
    scanf("%c", &c9);
    printf("Enter city10:");
    scanf("%c", &c10);
    /*Scaning temperature*/
    for(i = 0; i < 10; i++){
        for(j = 0; j < 31; j++){
            printf("Enter temperature:\n");
            scanf("%d", &temp[i][j]);
        }
    }
    /*Finding max*/
    for(i = 0; i < 10; i++){
        for(j = 0; j < 31; j++){
            if(max < temp[i][j]){
                max = temp[i][j];
                k = i;
                l = j;
            }
        }
    }
    switch(k){
        case 1:{
            city = c1;
            break;
        }
        case 2:{
            city = c2;
            break;
        }
        case 3:{
            city = c3;
            break;
        }
        case 4:{
            city = c4;
            break;
        }
        case 5:{
            city = c5;
            break;
        }
        case 6:{
            city = c6;
            break;
        }
        case 7:{
            city = c7;
            break;
        }
        case 8:{
            city = c8;
            break;
        }
        case 9:{
            city = c9;
            break;
        }
        case 10:{
            city = c10;
            break;
        }
        default:{
            break;
        }
    }
    /*At last*/
    printf("Maximum temp. in month of January is %d in %c at %d", max, city, l);
}