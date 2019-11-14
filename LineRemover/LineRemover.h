#include "AbstractLineRemover.h"
#include <vector>

#pragma once

class LineRemover : public AbstractLineRemover {
    public:
        AbstractWordsContainer* removeIndexes(std::vector<int> linesIndices, AbstractWordsContainer* words);
};