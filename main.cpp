#include "InputProcessor/StdinInputProcessor.h"
#include "WordProcessor/WordProcessor.h"
#include "RotationProcessor/RotationProcessor.h"
#include "Sorter/BubbleSorter.h"
#include "OutputProcessor/StdoutOutputProcessor.h"
#include "WordsContainer/VectorWordsContainer.h"

int main() {
    AbstractWordsContainer* words = new VectorWordsContainer();
    words = StdinInputProcessor().read(words);
    words = WordProcessor().processWords(words);
    words = RotationProcessor().rotate(words);
    words = BubbleSorter().sort(words);
    words = StdoutOutputProcessor().write(words);
    delete words;
    return 0;
}