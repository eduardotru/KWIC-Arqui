#include "AbstractOutputProcessor.h"

#pragma once

class StdoutOutputProcessor : public AbstractOutputProcessor {
    public:
        AbstractWordsContainer* write(AbstractWordsContainer* words);
};