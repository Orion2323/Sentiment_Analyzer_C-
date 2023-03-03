#ifndef SENTIMENT_ANALYZER_C__SENTIMENT_ANALYZER_H
#define SENTIMENT_ANALYZER_C__SENTIMENT_ANALYZER_H

#include <map>

#include "Tweet.h";

class Sentiment_Analyzer {
private:
    std::map<std::string, int> classifier;
public:
    Sentiment_Analyzer();

    void read_training_file();
    void read_testing_file();
};

#endif //SENTIMENT_ANALYZER_C__SENTIMENT_ANALYZER_H