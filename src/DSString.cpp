#include "DSString.h"

DSString::DSString() {
    this->size = 0;
    this->str = nullptr;
}

DSString::DSString(const char* c_str) {
    this->size = strlen(c_str);

    this->str = new char[this->size + 1];
    strcpy(this->str, c_str);
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

bool DSString::operator==(const char* c_str) const {
    // check size of both strings
    if (this->size != strlen(c_str)) {
        return false;
    } else {
        // check each char
        for (int i = 0; i < this->size; i++) {
            if (this->str[i] != c_str[i]) {
                return false;
            }
        }
    }

    return true;
}

bool DSString::operator==(const DSString& s) const {
    // check size of both DSStrings
    if (this->size != strlen(s.str)) {
        return false;
    } else {
        // check each char
        for (int i = 0; i < this->size; i++) {
            if (this->str[i] != s.str[i]) {
                return false;
            }
        }
    }

    return true;
}

bool DSString::operator<(const DSString& s) const {
   if (this->str != nullptr && s.str != nullptr) {
        DSString longS;
        DSString shortS;

        if (this->size >= s.size) {
            longS = *this;
            shortS = s;
        } else {
            longS = s;
            shortS = *this;
        }

        for (int i = 0; i < shortS.size; i++) {
            if (longS[i] > shortS[i]) {
                return false;
            } else if (longS[i] < shortS[i]) {
                return true;
            }
        }

        if (longS.size >= shortS.size) {
            return false;
        }

        return true;
   } else {
       return false;
   }
}

bool DSString::operator>(const DSString& s) const {
    if (this->str != nullptr && s.str != nullptr) {
        DSString longS;
        DSString shortS;

        if (this->size >= s.size) {
            longS = *this;
            shortS = s;
        } else {
            longS = s;
            shortS = *this;
        }

        for (int i = 0; i < shortS.size; i++) {
            if (longS[i] < shortS[i]) {
                return false;
            } else if (longS[i] > shortS[i]) {
                return true;
            }
        }

        if (longS.size <= shortS.size) {
            return false;
        }

        return true;
    } else {
        return false;
    }
}

char& DSString::operator[](const int& index) {
    if (index < 0 || index >= this->size) {
        std::cout << "Index out of bounds!" << std::endl;

    } else {
        return this->str[index];
    }
}

std::vector<DSString> DSString::tokenization() {
    std::vector<DSString> tokens;

    if (this->str != nullptr) {
        // get first word as token
        char* token = strtok(this->str," ");

        while (token != nullptr) {
            DSString DSToken = DSString(token);
            tokens.push_back(DSToken);

            token = strtok(nullptr, " ");
        }
    } else {
        std::cout << "DSString will have no tokens!" << std::endl;
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