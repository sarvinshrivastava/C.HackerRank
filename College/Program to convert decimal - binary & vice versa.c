//Program to convert decimal to binary
#include<stdio.h>
#include<math.h>
void detobi()
void bitode()

int main(){
    int choice, result;
    here:
    printf("Enter the conversion to be held:\n 1 - Binary to Decimal\n 2 - Decimal to Binary");
    scanf("%d", &choice);
    if(choice == 1){
        bitode();
    }
    else if(choice == 2){
        detobi();
    }
    else{
        printf("Enter correct choice!");
        goto;
    }
    return ;
}

int detobi(){
    int dec, rem, g, i;
    long int bi;
    printf("Enter the no.:\n");
    scanf("%d", &dec);
    while(dec > 0){
        rem = dec % 2;
        dec /= 2;
        g = pow(10, i);
        bi += (g * rem);
        i++;
    }
    printf("Binary equivalent is: %d", bi);

    return 0;
}

int bitode(){
    int dec, rem, g, i;
    long int bi;
    printf("Enter the no.:\n");
    scanf("%d", bi);
    while(bi > 0){
        rem = bi % 10;
        bi /= 10;
        g = pow(2, i);
        dec += g * rem;
    }
    printf("Decimal equivalent is: %d", dec);
    return 0;
}
