#include <set>
#include <string>

#include "AbstractWordProcessor.h"

#pragma once

class StopWordRemover : public AbstractWordProcessor {
    public:
        StopWordRemover();
        AbstractWordsContainer* processWords(AbstractWordsContainer* words) override;
    private:
        std::set<std::string> stop_words;
};