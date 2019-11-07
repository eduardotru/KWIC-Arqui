#include "AbstractWordProcessor.h"

#pragma once

class WordProcessor : public AbstractWordProcessor {
    public:
        AbstractWordsContainer* processWords(AbstractWordsContainer* words) override;
};