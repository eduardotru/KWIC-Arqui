#include <iostream>
#include <fstream>

#include "FileOutputProcessor.h"

AbstractWordsContainer* FileOutputProcessor::write(AbstractWordsContainer* words) {
    std::string filename;
    
    std::cout << "Write the name of the output file: " << std::endl;
    std::cin >> filename;

    std::ofstream output_file(filename);

    for(int i = 0; i < words->size(); i++) {
        output_file << i + 1 << " " << words->getSentence(i) << std::endl;
    }

    output_file.close();
    
    return words;
}