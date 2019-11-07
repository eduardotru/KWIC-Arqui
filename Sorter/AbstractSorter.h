#include "../WordsContainer/AbstractWordsContainer.h"

#pragma once

class AbstractSorter {
    public:
        virtual AbstractWordsContainer* sort(AbstractWordsContainer* words) = 0;
};