#include <cctype>

#include "WordProcessor.h"

AbstractWordsContainer* WordProcessor::processWords(AbstractWordsContainer* words) {
    for(int i = 0; i < words->size(); i++) {
        std::string& sentence = words->getSentence(i);
        for(char& c: sentence) {
            c = std::tolower(c);
        }
    }
    return words;
}