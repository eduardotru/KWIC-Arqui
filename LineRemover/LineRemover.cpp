#include <cctype>

#include "LineRemover.h"
#include "../WordsContainer/VectorWordsContainer.h"

AbstractWordsContainer* LineRemover::removeIndexes(std::vector<int> lines, AbstractWordsContainer* words) {
    AbstractWordsContainer* newLines = new VectorWordsContainer();
    int j = 0;
    for(int i = 0; i < words -> size(); i++){
        if(j < lines.size() && i == lines[j]){
            j++;
        }
        else{
            newLines -> addSentence( words -> getSentence(i) );
        }
    }
    return newLines;
}