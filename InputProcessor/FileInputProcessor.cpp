#include <iostream>
#include <fstream>
#include <string>

#include "FileInputProcessor.h"

AbstractWordsContainer* FileInputProcessor::read(AbstractWordsContainer* words) {
    std::string sentence, filename;
    std::cout << "Write the name of the input file: " << std::endl;
    std::cin >> filename;

    std::ifstream input_file(filename);

    while(getline(input_file, sentence)) {
        words->addSentence(sentence);
    }

    input_file.close();
    
    return words;
}