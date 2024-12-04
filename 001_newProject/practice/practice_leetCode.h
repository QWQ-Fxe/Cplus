//
// Created by fxe on 2024/10/27.
//

#ifndef INC_001_NEWPROJECT_PRACTICE_LEETCODE_H
#define INC_001_NEWPROJECT_PRACTICE_LEETCODE_H

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <sstream>
#include <unordered_map>
#include <algorithm> // 用于 std::min_element

/**
 *
 */
class StringPractice{
public:
    void string_Practice(const std::string&str1, const std::string& str2 );
    int romanToInt(const std::string &str);
    std::string longestCommonPrefix(std::vector<std::string> &str);
    std::string longestCommonPrefix2(std::vector<std::string> &str);
    bool isValid(std::string &str);
    int strStr(std::string haystack, std::string needle);
};


#endif //INC_001_NEWPROJECT_PRACTICE_LEETCODE_H
