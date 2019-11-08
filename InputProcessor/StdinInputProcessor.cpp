#include <iostream>
#include <string>

#include "StdinInputProcessor.h"

AbstractWordsContainer* StdinInputProcessor::read(AbstractWordsContainer* words) {
    std::string sentence;
    int lines;

    std::cout << "Cuantas lineas se van a ingresar?\n";
    std::cin >> lines;

    for (int i = 0; i <= lines; i++) {
        getline(std::cin, sentence);
        words->addSentence(sentence);
    }

    return words;
}