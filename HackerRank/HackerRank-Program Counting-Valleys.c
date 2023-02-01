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

int countingValleys(int steps, char* path) {
	int i, c1, c2, c3, c4, f, valley;
	c1 = 1; i = 0; c3 = 1; c4 = 1; c2 = 1; f = 0; valley = 0;
	here:
	if(f == 1) {
		c1 = 1; c3 = 1; c4 = 1; c2 = 1; f = 0;
	}
	if(i < steps) {
		if(path[0] == 'D') {

			while (1) {
				i += 1;
				if(path[i] == 'D') {
					c1 += 1;
				}
				else {
					break;
				}
			}
			while (1) {
				if(path[i] != 'D') {
					c2 += 1;
					if(c1 == c2) {
						f = 1;
						valley += 1;
						goto here;
					}
				}
				else {
					goto here;
				}
				i += 1;
			}
		}
		else {

			while (1) {
				i += 1;
				if(path[i] == 'U') {
					c3 += 1;
				}
				else {
					break;
				}
			}
			while (1) {
				if(path[i] != 'U') {
					c4 += 1;
					if(c4 == c3) {
						f = 1;
						goto here;
					}
				}
				else {
					goto here;
				}
				i += 1;
			}
		}
	}
	return valley;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int steps = parse_int(ltrim(rtrim(readline())));

    char* path = readline();

    int result = countingValleys(steps, path);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

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

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
