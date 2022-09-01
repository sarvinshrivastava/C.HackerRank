#include <stdio.h>
#include <math.h>

int main(){
    int units[10], amount[10], i, uni, amo = 0;
    char name[10], nam;
    /**Entering the name*/
    for(i = 0; i < 10; i++){
        printf("Enter the name:");
        scanf("%c", &nam);
        name[i] = nam;
    }
    
    /**Entering the units*/
    for(i = 0; i <= 10; i++){
        printf("Enter the units:");
        scanf("%d", &uni);
        units[i] = uni;
    }
    
    /**Computing ammount and storing*/
    for(i = 0; i< 10; i++){
        if(units[i] >= 300){
            units[i] = units[i] - 300;
            amo = 200*0.8 + 100*0.9 + units[i]*1 + 100;
        }
        else{
            if(units[i] >= 200){
                amo = 200*0.8 + units[i]*0.9 + 100;
            }
        }
        if(amo >= 400){
            amo = amo + 0.15*amo;
        }
        else{
            continue;
        }
        amount[i] = amo;
    }
    
    /**Printing*/
    for(i = 0; i < 10; i++){
        amo = amount[i];
        nam = name[i];
        printf("%c\t%d\n", nam, amo);
    }
    
    return 0;
}