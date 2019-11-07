#include "AbstractInputProcessor.h"

#pragma once

class StdinInputProcessor : public AbstractInputProcessor {
    public:
        virtual AbstractWordsContainer* read(AbstractWordsContainer* words) override;
};