//
// Created by fxe on 2024/10/27.
//
#ifndef INC_001_NEWPROJECT_PALINDROMECHECKER_H
#define INC_001_NEWPROJECT_PALINDROMECHECKER_H

#include <iostream>
#include <string>

class PalindromeChecker {
public:
    bool validPalindrome(const std::string& s);
private:
    bool isPalindrome(const std::string& s, int left, int right);
};


#endif //INC_001_NEWPROJECT_PALINDROMECHECKER_H
