#include "AbstractSorter.h"

#pragma once

class BubbleSorter : public AbstractSorter {
    public:
        AbstractWordsContainer* sort(AbstractWordsContainer* words);
};