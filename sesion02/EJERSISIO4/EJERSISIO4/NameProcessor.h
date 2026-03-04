#ifndef NAME_PROCESSOR_H
#define NAME_PROCESSOR_H

#include <string>

class NameProcessor {
private:
    std::string fullName;

public:
    NameProcessor(std::string name = "");

    std::string getFirstName() const;
    std::string getFirstSurname() const;
    int countVowels() const;
    std::string toUpperCase() const;
    int getLength() const;

    void setFullName(std::string name) { fullName = name; }
};

#endif