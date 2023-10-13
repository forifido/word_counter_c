//
// Created by k on 23-10-13.
//

#include <stdlib.h>
#include "word_manager_p.h"

void word_finalize() {
    for (int i = 0; i < num_of_word; ++i) {
        free(word_array[i].name);
    }
    num_of_word = 0;
}
