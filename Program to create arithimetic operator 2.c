#include stdio.h
#include math.h
#include string.h
void main() {
    int a, b, rem, pow;
    printf(Enter any two no.);
    scanf(%d %d, &a, &b);
    rem = mmod(a, b);
    pow = ppow(a, b);
    printf(Remainder of %d and %d is %dn, a, b, rem);
    printf(Power of %d to %d is %dn, a, b, pow);
}
void mmod(int a, int b){
    int rem;
    rem = a % b;
    return(rem);
}
void ppow(int a, int b){
    int pow = 1, i;
    for(i = 1; i = b; i++){
        pow = pow  a;
        printf(%dt, pow);
    }
    return(pow);
}