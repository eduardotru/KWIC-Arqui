#include <iostream>

#include "StdoutOutputProcessor.h"

AbstractWordsContainer* StdoutOutputProcessor::write(AbstractWordsContainer* words) {
    for(int i = 0; i < words->size(); i++) {
        std::cout << i + 1 << " " << words->getSentence(i) << std::endl;
    }
    return words;
}