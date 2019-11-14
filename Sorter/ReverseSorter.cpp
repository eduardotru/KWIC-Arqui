#include <algorithm>

#include "BubbleSorter.h"
#include "ReverseSorter.h"

AbstractWordsContainer* ReverseSorter::sort(AbstractWordsContainer* words) {
    words = BubbleSorter().sort(words);
    for (int i = 0; i < words->size()/2; i++) {
        std::swap(words->getSentence(i), words->getSentence(words->size() - i - 1));
    }
    return words;
}