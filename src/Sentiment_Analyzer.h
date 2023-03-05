#ifndef SENTIMENT_ANALYZER_C__SENTIMENT_ANALYZER_H
#define SENTIMENT_ANALYZER_C__SENTIMENT_ANALYZER_H

#include <map>
#include <cstdlib>

#include "DSString.h"
#include "Tweet.h"

class Sentiment_Analyzer {
private:
    std::map<DSString, int> classifier;
    std::vector<Tweet> tweetList;
public:
    explicit Sentiment_Analyzer();
    explicit Sentiment_Analyzer(const std::vector<char*>& argVec);

    void read_training_file(const char* file);
    void word_classifier();
    void read_testing_file();
};

#endif //SENTIMENT_ANALYZER_C__SENTIMENT_ANALYZER_H