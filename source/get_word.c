//
// Created by k on 23-10-13.
//
#include <ctype.h>
#include "get_word.h"

int get_word(char *buf, int size, FILE *stream) {
    char c;
    int len = 0;
    while ((c = fgetc(stream)) != EOF) {
        if (isspace(c)) {
            break;
        } else if (len < size - 1) {
            buf[len] = c;
        }

        len++;
    }

    buf[len >= size - 1 ? size - 1 : len] = '\0';

    return c;
}
