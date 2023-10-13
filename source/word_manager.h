//
// Created by k on 23-10-13.
//

#ifndef TEST_WORD_MANAGER_H
#define TEST_WORD_MANAGER_H

# include <stdio.h>

void word_initialize(void);

void add_word(char *word);

void dump_word(FILE *fp);

void word_finalize(void);

#endif //TEST_WORD_MANAGER_H
