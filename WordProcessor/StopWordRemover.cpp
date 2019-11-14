#include <sstream>
#include <iostream>
#include <fstream>

#include "StopWordRemover.h"

StopWordRemover::StopWordRemover() {
    std::cout << "Escribe el nombre del archivo de stop words" << std::endl;
    std::string fileName;
    std::cin >> fileName;
    std::ifstream in(fileName);
    std::string word;
    while(in >> word) {
        this->stop_words.insert(word);
    }
}

AbstractWordsContainer* StopWordRemover::processWords(AbstractWordsContainer* words) {
    for(int i = 0; i < words->size(); i++) {
        std::string sentence = words->getSentence(i);
        std::stringstream sstream;
        sstream.str(sentence);
        std::string result = "";
        std::string word;
        while (sstream >> word) {
            if (this->stop_words.find(word) == this->stop_words.end()) {
                if (result.length() > 0) result += " ";
                result += word;
            }
        }
        words->getSentence(i) = result;
    }
    return words;
}