#ifndef SENTIMENT_ANALYZER_C__TWEET_H
#define SENTIMENT_ANALYZER_C__TWEET_H

#include <iostream>

#include "DSString.h"

class Tweet {
private:
    int senVal;
    long ID;
    DSString date;
    DSString user;
    DSString tweet;
public:
    explicit Tweet();
    explicit Tweet(const int& senVal, const long& ID, const char* date, const char* user, const char* tweet);

    DSString getTweet() const;
    DSString getUser() const;
    DSString getDate() const;
    int getSen() const;
    long getID() const;
};

#endif //SENTIMENT_ANALYZER_C__TWEET_H