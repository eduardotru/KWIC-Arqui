#include <string>
#include <vector>

#include "RotationProcessor.h"

AbstractWordsContainer* RotationProcessor::rotate(AbstractWordsContainer* words) {
    std::vector<std::string> aux_container;
    for (int i = 0; i < words->size(); i++) {
        std::vector<std::string> rotations = rotateSentence(words->getSentence(i));
        for (std::string rotation: rotations) {
            aux_container.push_back(rotation);
        }
    }

    for (std::string sentence: aux_container) {
        words->addSentence(sentence);
    }

    return words;
}

std::vector<std::string> RotationProcessor::rotateSentence(std::string sentence) {
    std::vector<std::string> words;
    std::string rotated_string = "";
    int space = sentence.find(' ');
    
    while (space != std::string::npos) {
        if (rotated_string.length() > 0) {
            rotated_string += " ";
        }
        rotated_string += sentence.substr(0, space);
        sentence.erase(0, space+1);

        words.push_back(sentence + " " + rotated_string);

        space = sentence.find(' ');
    }

    return words;
}