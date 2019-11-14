#include "InputProcessor/StdinInputProcessor.h"
#include "InputProcessor/FileInputProcessor.h"
#include "WordProcessor/WordProcessor.h"
#include "WordProcessor/StopWordRemover.h"
#include "RotationProcessor/RotationProcessor.h"
#include "Sorter/BubbleSorter.h"
#include "OutputProcessor/StdoutOutputProcessor.h"
#include "OutputProcessor/FileOutputProcessor.h"
#include "WordsContainer/VectorWordsContainer.h"
#include <iostream>
using namespace std;

int main() {
    AbstractWordsContainer* words = new VectorWordsContainer();
    int choice;

    AbstractInputProcessor* input;
    cout << "Que tipo de input desea? \n\t1) StdIn\t2) Archivo\n";
    cin >> choice;
    if (choice == 1) {
        input = new StdinInputProcessor();
    } else {
        input = new FileInputProcessor();
    }

    AbstractOutputProcessor* output;
    cout << "Que tipo de output desea? \n\t1) StdOut\t2) Archivo\n";
    cin >> choice;
    if (choice == 1) {
        output = new StdoutOutputProcessor();
    } else {
        output = new FileOutputProcessor();
    }

    words = input -> read(words);

    cout << "Desea quitar palabras? \n\t1) Si\t2) No" << endl;
    cin >> choice;

    if (choice == 1) {
        words = StopWordRemover().processWords(words);
    }

    words = WordProcessor().processWords(words);
    words = RotationProcessor().rotate(words);
    words = BubbleSorter().sort(words);
    words = output -> write(words);

    delete words;
    delete input;
    delete output;

    return 0;
}