#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);
int getLC(int , int);
int getLCM(int , int);

int getTotalX(int a_count, int* a, int b_count, int* b) {
    int i, j, k, count = 0, m = 0, lcm, p, q;
	int* trt = calloc(5, sizeof(int));
	if(a_count == 2) {
		p = *(a); q = *(a + 1);
		lcm = getLCM(p, q);
	}
	else {
		p = *(a); q = *(a + 1);
		lcm = getLCM(p, q);
	for(i = 2; i < a_count; i++) {
		j = *(a + i);
		lcm = getLC(lcm, j);
		}
	}
	//printf("%d %d", *(a + a_count - 1), *(b + 0));
	printf("Temp list |\n");
	for(k = *(a + a_count - 1); k <= *(b + 0); k++) {
	//printf("%d\n", k);
		if(k % lcm == 0) {
			*(trt + m) = k;
			printf("%d\n", *(trt + m));
			m++;
		}
	}
	//j = sizeof(trt); // sizeof(int);
	printf("Actual list|\n");
	for(i = 0; i < m; i++){
		for (k = 0; k < b_count; k++) {
				printf("i = %d k = %d\n",i, k);
				if((*(b + k) % *(trt + i)) != 0) {
				break;;
			}
			else {
				printf("%d\n", *(trt + i));
				if (k == b_count - 1)
					count++;
			}
		}
	}
	printf("count = %d", count);
	return count;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char** first_multiple_input = split_string(rtrim(readline()));

    int n = parse_int(*(first_multiple_input + 0));

    int m = parse_int(*(first_multiple_input + 1));

    char** arr_temp = split_string(rtrim(readline()));

    int* arr = malloc(n * sizeof(int));

    int i, total;
    char** brr_temp = split_string(rtrim(readline()));
    int* brr = malloc(m * sizeof(int));

    clrscr();
    for (i = 0; i < n; i++) {
	int arr_item = parse_int(*(arr_temp + i));

	*(arr + i) = arr_item;
    }

    for (i = 0; i < m; i++) {
	int brr_item = parse_int(*(brr_temp + i));

	*(brr + i) = brr_item;
    }

    total = getTotalX(n, arr, m, brr);

    fprintf(fptr, "%d\n", total);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (1) {
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
    char* end = str + strlen(str) - 1;

    if (!str) {
	return '\0';
    }

    if (!*str) {
	return str;
    }



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
