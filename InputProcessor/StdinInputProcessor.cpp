#include <iostream>
#include <string>

#include "StdinInputProcessor.h"

AbstractWordsContainer* StdinInputProcessor::read(AbstractWordsContainer* words) {
    std::string sentence;
    while(getline(std::cin, sentence)) {
        words->addSentence(sentence);
    }
    return words;
}