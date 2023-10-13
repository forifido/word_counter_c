//
// Created by k on 23-10-13.
//

#ifndef TEST_WORD_MANAGER_P_H
#define TEST_WORD_MANAGER_P_H

#include "word_manager.h"

typedef struct {
    char *name;
    int count;
} Word;

#define WORD_NUM_MAX (1000)

extern Word word_array[];
extern int num_of_word;

#endif //TEST_WORD_MANAGER_P_H
