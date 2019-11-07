#include <string>
#include <iterator>

#pragma once

class AbstractWordsContainer {
    public:
        virtual void addSentence(std::string sentence) = 0;
        virtual std::string& getSentence(int pos) = 0;
        virtual int size() = 0;
};

