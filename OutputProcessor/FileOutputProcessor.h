#include "AbstractOutputProcessor.h"

#pragma once

class FileOutputProcessor : public AbstractOutputProcessor {
    public:
        AbstractWordsContainer* write(AbstractWordsContainer* words);
};