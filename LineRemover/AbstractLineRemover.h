#include "../WordsContainer/AbstractWordsContainer.h"
#include <vector>

#pragma once

class AbstractLineRemover {
    public:
        virtual AbstractWordsContainer* removeIndexes(std::vector<int> linesIndices, AbstractWordsContainer* words) = 0;
};