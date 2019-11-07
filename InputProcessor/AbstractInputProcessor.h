#include "../WordsContainer/AbstractWordsContainer.h"

#pragma once

class AbstractInputProcessor {
    public:
        virtual AbstractWordsContainer* read(AbstractWordsContainer* words) = 0;
};