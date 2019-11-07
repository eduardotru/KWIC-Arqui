#include "../WordsContainer/AbstractWordsContainer.h"

#pragma once

class AbstractOutputProcessor {
    public:
        virtual AbstractWordsContainer* write(AbstractWordsContainer* words) = 0;
};