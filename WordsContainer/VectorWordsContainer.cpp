#include "VectorWordsContainer.h"

void VectorWordsContainer::addSentence(std::string sentence) {
    this->container.push_back(sentence);
}

std::string& VectorWordsContainer::getSentence(int pos) {
    return this->container[pos];
}

int VectorWordsContainer::size() {
    return this->container.size();
}