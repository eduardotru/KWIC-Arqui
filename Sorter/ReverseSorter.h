#include "AbstractSorter.h"

#pragma once

class ReverseSorter : public AbstractSorter {
    public:
        AbstractWordsContainer* sort(AbstractWordsContainer* words);
};