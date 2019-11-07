#include "AbstractInputProcessor.h"

#pragma once

class FileInputProcessor : public AbstractInputProcessor {
    public:
        AbstractWordsContainer* read(AbstractWordsContainer* words);
};