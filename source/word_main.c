//
// Created by k on 23-10-13.
//
#include <string.h>
#include "word_manager.h"
#include "get_word.h"

#define WORD_LEN_MAX (1000)

int main(int argc, char **argv) {
    char buf[WORD_LEN_MAX];
    FILE *fp;

    if (argc == 1) {
        fp = stdin;
    } else {
        fp = fopen(argv[1], "r");
        if (fp == NULL) {
            fprintf(stderr, "%s:%s can not open.\n", argv[0], argv[1]);
        }
    }

    word_initialize();

    while (get_word(buf, WORD_LEN_MAX, fp) != EOF) {
        if (strlen(buf) > 0) {
            add_word(buf);
        }
    }

    dump_word(stdout);

    word_finalize();

    return 0;
}
