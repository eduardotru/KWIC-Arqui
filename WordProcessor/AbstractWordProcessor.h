#include "../WordsContainer/AbstractWordsContainer.h"

#pragma once

class AbstractWordProcessor {
    public:
        virtual AbstractWordsContainer* processWords(AbstractWordsContainer* words) = 0;
};