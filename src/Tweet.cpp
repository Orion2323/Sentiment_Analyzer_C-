#include "Tweet.h"

Tweet::Tweet() {
    this->senVal = 0;
    this->ID = 0;

    this->date;
    this->user;
    this->tweet;
};

Tweet::Tweet(const int& senVal, const long& ID, const char* date, const char* user, const char* tweet) {
    this->senVal = senVal;
    this->ID = ID;

    this->date = DSString(date);
    this->user = DSString(user);
    this->tweet = DSString(tweet);
}

DSString Tweet::getTweet() const {
    return this->tweet;
}

DSString Tweet::getUser() const {
    return this->user;
}

DSString Tweet::getDate() const {
    return this->date;
}

int Tweet::getSen() const {
    return this->senVal;
}

long Tweet::getID() const {
    return this->ID;
}