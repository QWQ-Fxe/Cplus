#include <iostream>
#include "./practice/PalindromeChecker.h"

int main() {
    std::string s = "aba";
    PalindromeChecker checker;
    std::cout << std::boolalpha << checker.validPalindrome(s) << std::endl;
    return 0;
}
