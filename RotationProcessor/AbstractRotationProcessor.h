#include "../WordsContainer/AbstractWordsContainer.h"

#pragma once

class AbstractRotationProcessor {
    public:
        virtual AbstractWordsContainer* rotate(AbstractWordsContainer* words) = 0;
};