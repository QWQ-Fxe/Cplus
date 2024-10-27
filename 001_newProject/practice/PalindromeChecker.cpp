//
// Created by fxe on 2024/10/27.
//

#include "PalindromeChecker.h"

bool PalindromeChecker::validPalindrome(const std::string& s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left]!= s[right]) {
            return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
        }
        left++;
        right--;
    }
    return true;
}

bool PalindromeChecker::isPalindrome(const std::string& s, int left, int right) {
    while (left < right) {
        if (s[left]!= s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
