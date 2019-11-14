#include "InputProcessor/StdinInputProcessor.h"
#include "InputProcessor/FileInputProcessor.h"
#include "WordProcessor/WordProcessor.h"
#include "WordProcessor/StopWordRemover.h"
#include "RotationProcessor/RotationProcessor.h"
#include "Sorter/BubbleSorter.h"
#include "OutputProcessor/StdoutOutputProcessor.h"
#include "OutputProcessor/FileOutputProcessor.h"
#include "WordsContainer/VectorWordsContainer.h"
#include "LineRemover/LineRemover.h"
#include <iostream>
using namespace std;

AbstractWordsContainer* removeLines(AbstractWordsContainer* words){
    AbstractOutputProcessor* output = new StdoutOutputProcessor();

    int choice;

    cout << "Desea quitar lineas? \n\t1) Si\t2) No" << endl;
    cin >> choice;

    if (choice == 1) {
        output = new StdoutOutputProcessor();
        output -> write(words);

        int linesToRemove;
        cout << "Ingresa cuantas lineas quieres borrar\n";
        cin >> linesToRemove;
        cout << "Ingresa los indices de las lineas a remover\n";
        vector<int> lineIndexes;
        for(int i = 0; i < linesToRemove; i++){
            cin >> lineIndexes[i];
        }
        
        words = LineRemover().removeIndexes(lineIndexes, words);
    }

    delete output;
    return words;
}

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

    words = input -> read(words);

    words = removeLines(words);

    cout << "Desea quitar palabras? \n\t1) Si\t2) No" << endl;
    cin >> choice;

    if (choice == 1) {
        words = StopWordRemover().processWords(words);
    }

    words = WordProcessor().processWords(words);
    words = RotationProcessor().rotate(words);
    words = BubbleSorter().sort(words);

    words = removeLines(words);
    
    cout << "Que tipo de output desea? \n\t1) StdOut\t2) Archivo\n";
    cin >> choice;
    AbstractOutputProcessor* output;
    if (choice == 1) {
        output = new StdoutOutputProcessor();
    } else {
        output = new FileOutputProcessor();
    }

    words = output -> write(words);

    delete words;
    delete input;
    delete output;

    return 0;
}