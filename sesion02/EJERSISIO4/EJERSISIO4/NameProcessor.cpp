#include "NameProcessor.h"
#include <cctype> 

NameProcessor::NameProcessor(std::string name) : fullName(name) {}

std::string NameProcessor::getFirstName() const {
    size_t spacePos = fullName.find(' ');
    if (spacePos != std::string::npos) {
        return fullName.substr(0, spacePos);
    }
    return fullName;
}

std::string NameProcessor::getFirstSurname() const {
    size_t firstSpace = fullName.find(' ');
    if (firstSpace == std::string::npos) return "";

    size_t secondSpace = fullName.find(' ', firstSpace + 1);
    if (secondSpace == std::string::npos) {
        return fullName.substr(firstSpace + 1);
    }

    return fullName.substr(firstSpace + 1, secondSpace - firstSpace - 1);
}

int NameProcessor::countVowels() const {
    int count = 0;
    for (char c : fullName) {
        char lowerC = tolower(c);
        if (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u') {
            count++;
        }
    }
    return count;
}

std::string NameProcessor::toUpperCase() const {
    std::string upper = fullName;
    for (int i = 0; i < upper.length(); i++) {
        upper[i] = toupper(upper[i]);
    }
    return upper;
}

int NameProcessor::getLength() const {
    return fullName.length();
}