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
     * Equality operator method
     *
     * Method for checking whether DSString and char* are equal
     *
     * @param str char* to compare
     * @return bool whether DSString and char* are the same
     *
     */
    bool operator==(const char* str) const;

    /**
     * Equality operator method
     *
     * Method for checking whether both DSStrings are equal or not
     *
     * @param s DSString to compare
     * @return bool whether both DSStrings are the same or not
     *
     */
     bool operator==(const DSString& s) const;

     /**
      * Less than operator
      *
      * Method to check if first DSString is less than second DSString
      * @param s DSString to compare
      * @return bool whether first DSString is less than second DSString
      */
     bool operator<(const DSString& s) const;

     /**
      * Greater than operator
      *
      * Method to check if first DSString is greater than second DSString
      *
      * @param s DSString to compare
      * @return bool whether first DSString is greater than second DSString
      */
     bool operator>(const DSString& s) const;

    /**
    * Subscript operator to access a particular character of a DSString object
    * @return the character requested by reference
    */
    char& operator[] (const int& index);


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