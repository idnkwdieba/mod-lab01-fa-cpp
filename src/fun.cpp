// Copyright 2022 UNN-IASR
#include <string>

unsigned int faStr1(const char* str) {
    std::string inputString = std::string(str);
    std::string word;
    int wordCount = 0;
    bool isValid = false;

    int end = inputString.find(' ');

    while (end != -1) {
        isValid = true;

        word = inputString.substr(0, end);
        inputString.erase(0, end + 1);
        end = inputString.find(' ');

        if (word.length() == 0) {
            continue;
        }

        for (char symbol : word) {
            if (std::isdigit(symbol)) {
                isValid = false;
                continue;
            }
        }

        if (isValid) {
            wordCount++;
        }
    }

    return wordCount;
}

unsigned int faStr1(const char* str) {
    std::string inputString = std::string(str);
    std::string word;
    int wordCount = 0;
    int wordLength = 0;
    bool isValid = false;

    int end = inputString.find(' ');

    while (end != -1) {
        isValid = true;

        word = inputString.substr(0, end);
        wordLength = word.length();
        inputString.erase(0, end + 1);
        end = inputString.find(' ');

        if (wordLength == 0) {
            continue;
        }

        for (char symbol : word) {
            if (std::isdigit(symbol)) {
                isValid = false;
                continue;
            }
        }

        if (isValid) {
            wordCount++;
        }
    }

    wordLength = inputString.length();

    if (wordLength != 0) {
        bool isValid = true;

        for (char symbol : inputString) {
            if (std::isdigit(symbol)) {
                isValid = false;
                continue;
            }
        }

        if (isValid) {
            wordCount++;
        }
    }

    return wordCount;
}

unsigned int faStr3(const char* str) {
    std::string inputString = std::string(str);
    std::string word;
    int wordCount = 0;
    int wordLength = 0;
    int totalLength = 0;
    int averageLength = 0;

    int end = inputString.find(' ');

    while (end != -1) {
        wordLength = end;
        inputString.erase(0, end + 1);
        end = inputString.find(' ');

        if (wordLength == 0) {
            continue;
        }

        wordCount++;
        totalLength += wordLength;
    }

    wordLength = inputString.length();

    if (wordLength != 0) {
        wordCount++;
        totalLength += wordLength;
    }

    if (wordCount != 0) {
        averageLength = totalLength / wordCount;
    }

    return averageLength;
}
