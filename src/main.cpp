#include <iostream>

#include "Sentiment_Analyzer.h"

using namespace std;

int main(int argc, char** argv) {
    // check number of arguments into program
    if (argc > 1) {
        vector<char*> argVec;

        for (int i = 1; i < argc; i++) {
            argVec.push_back(argv[i]);
        }

        Sentiment_Analyzer s = Sentiment_Analyzer(argVec);
    }

    return 0;
}