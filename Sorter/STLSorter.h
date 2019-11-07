#include "AbstractSorter.h"

#pragma once

class STLSorter : public AbstractSorter {
    public:
        AbstractWordsContainer* sort(AbstractWordsContainer* words);
};