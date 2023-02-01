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
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(int arr_count, unsigned long int* arr) {
    int i;
    unsigned long int* pro = calloc(5, sizeof(unsigned long int));
    unsigned long int min = 999999999999999999, max = 0;
    
    *(pro + 0) = *(arr + 1) + *(arr + 2) + *(arr + 3) + *(arr + 4);
    *(pro + 1) = *(arr + 0) + *(arr + 2) + *(arr + 3) + *(arr + 4);
    *(pro + 2) = *(arr + 0) + *(arr + 1) + *(arr + 3) + *(arr + 4);
    *(pro + 3) = *(arr + 0) + *(arr + 1) + *(arr + 2) + *(arr + 4);
    *(pro + 4) = *(arr + 0) + *(arr + 1) + *(arr + 2) + *(arr + 3);
    for (i = 0; i < 5; i++) {
        //printf("%lu\n", *(pro + i));
        if (*(pro + i) < min) {
            min = *(pro + i); 
            //printf("min = %lu\n", min);
        }
        if (*(pro + i) > max) {
            max = *(pro + i);
            //printf("max = %lu\n", max);
        }
    }
    printf("%lu %lu", min, max);
}

int main()
{

    char** arr_temp = split_string(rtrim(readline()));

    unsigned long int* arr = malloc(5 * sizeof(unsigned long int));

    for (int i = 0; i < 5; i++) {
        int arr_item = parse_int(*(arr_temp + i));

        *(arr + i) = arr_item;
    }

    miniMaxSum(5, arr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
