#include <iterator>
#include <string>
#include <vector>

#include "AbstractWordsContainer.h"

#pragma once

class VectorWordsContainer : public AbstractWordsContainer {
    public:
        void addSentence(std::string sentence);
        std::string& getSentence(int pos);
        int size();

    private:
        std::vector<std::string> container;
};