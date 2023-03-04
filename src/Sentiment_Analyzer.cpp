/**
 * @author: Giancarlos Dominguez
 * @date: 3/2/2023
 */

#include "Sentiment_Analyzer.h"

// default constructor
Sentiment_Analyzer::Sentiment_Analyzer() = default;

Sentiment_Analyzer::Sentiment_Analyzer(const std::vector<char*>& argVec) {
    this->read_training_file(argVec[0]);
    this->word_classifier();
}

// read data from training file
void Sentiment_Analyzer::read_training_file(const char* file) {
    std::ifstream inFS(file);

    // check if file is open
    if (!inFS.is_open()) {
        std::cout << "file not open" << std::endl;
    } else {
        // create char arrays for data
        char* senVal = new char[5];
        char* ID = new char[30];
        char* date = new char[40];
        char* query = new char[15];
        char* user = new char[100];
        char* tweet = new char[1000];

        char* dummy = new char[1000];

        // read in headers from file
        inFS.getline(dummy, 1000, '\n');
        while (!inFS.eof()) {

            inFS.getline(senVal, 5, ',');
            inFS.getline(ID, 30, ',');

            int sen = atoi(senVal);
            long intID = atol(ID);

            inFS.getline(date, 40, ',');
            inFS.getline(query, 15, ',');
            inFS.getline(user, 100, ',');
            inFS.getline(tweet, 1000, '\n');

            Tweet newTweet(sen, intID, date, user, tweet);
            this->tweetList.push_back(newTweet);
        }

        delete[] senVal;
        delete[] ID;
        delete[] date;
        delete[] dummy;
        delete[] user;
        delete[] tweet;

        inFS.close();
    }
}

// make classifier
void Sentiment_Analyzer::word_classifier() {
    for (const Tweet& t: this->tweetList) {
        std::cout << t.getTweet().c_str() << std::endl;
    }


}

void Sentiment_Analyzer::read_testing_file() {

}
