#include "DSString.h"

DSString::DSString() {
    this->size = 0;
    this->str = nullptr;
}

DSString::DSString(const char* s) {
    this->size = strlen(s);

    this->str = new char[this->size + 1];
    strcpy(this->str, s);
}

DSString::DSString(const std::string& s) {
    this->size = s.size();
    this->str = new char[this->size + 1];

    strcpy(this->str, s.c_str());
}

// copy constuctor
DSString::DSString(const DSString& s) {
    this->size = s.size;

    this->str = new char[this->size + 1];
    strcpy(this->str, s.str);
}

// destructor
DSString::~DSString() {
    delete[] this->str;
}

// equal operator
DSString& DSString::operator=(const DSString& s) {
    // check if incoming DSString is empty
    if (s.str != nullptr) {
        delete[] this->str;
        this->size = s.size;

        this->str = new char[this->size + 1];
        strcpy(this->str, s.str);
    }

    return *this;
}

std::vector<DSString> DSString::tokenization() {
    std::vector<DSString> tokens;

    if (this->str != nullptr) {
        
    }


    return tokens;
}

// return size of DSString
int DSString::getSize() const {
    return this->size;
}

// return char array inside of DSString
char* DSString::c_str() const {
    return this->str;
}