#ifndef SENTIMENT_ANALYZER_C__DSSTRING_H
#define SENTIMENT_ANALYZER_C__DSSTRING_H

#include <iostream>
#include <fstream>
#include <vector>

#include <string.h>

class DSString {
private:
    int size;
    char* str;
public:
    /**
     * Constructors:
     *
     * first: default
     *
     * second:
     * @param str - a pointer to a dynamically allocated char array
     *
     * third:
     * @param str - a string variable
     */
    explicit DSString();
    explicit DSString(const char* str);
    explicit DSString(const std::string& str);

    // rule of three
    DSString(const DSString& str);
    ~DSString();
    DSString& operator=(const DSString& str);

    /**
     * Method for tokenizing all words in DSString object
     *
     */
     std::vector<DSString> tokenization();

    /**
     * Method for getting size of DSString
     * @return size of DSString
     */
    int getSize() const;

    /**
     * Method for returning dynamically allocated char array inside the DSString object
     * @return char array inside DSString
     */
    char* c_str() const;
};


#endif //SENTIMENT_ANALYZER_C__DSSTRING_H