#include <vector>
#include <string>

#include "AbstractRotationProcessor.h"

#pragma once

class RotationProcessor : public AbstractRotationProcessor {
    public:
        AbstractWordsContainer* rotate(AbstractWordsContainer* words);
    private:
        std::vector<std::string> rotateSentence(std::string sentence);
};