#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'handshake' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

long long int handshake(long int a) {
        long long int i = 0;
        //printf("a = %ld\n", a);
        if (a == 1)
                return 0;
        else if (a == 2) {
                return 1;
        }
        else if (a == 3)
                return 3;
        else if (a == 4)
                return 6;
        else {
                //printf("hi\n");
                while (a) {
                        i += a - 1;
                        a--;
                        //printf("a = %ld, i = %lld\n", a, i);
                }
                return i;
        }
}

int main() {
        int n;
        long int n2;
        long long int result;
        scanf("%d", &n);
        while (n != 0){
                scanf("%ld", &n2);
                result = handshake(n2);
                n--;
                printf("%lld\n", result);
        }
        
}