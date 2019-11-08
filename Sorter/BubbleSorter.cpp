#include <algorithm>

#include "BubbleSorter.h"

AbstractWordsContainer* BubbleSorter::sort(AbstractWordsContainer* words) {
    while (true) {
        bool changed = false;
        for (int i = 1; i < words->size(); i++) {
            if (words->getSentence(i-1) > words->getSentence(i)) {
                swap(words->getSentence(i-1), words->getSentence(i));
                changed = true;
            }
        }
        if (!changed) {
            break;
        }
    }
    return words;
}