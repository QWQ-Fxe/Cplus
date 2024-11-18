//
// Created by fxe on 2024/10/27.
//

#ifndef INC_001_NEWPROJECT_PRACTICE_LEETCODE_H
#define INC_001_NEWPROJECT_PRACTICE_LEETCODE_H

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>

class Code_practice {
public:
    virtual bool bool_test(){};
    virtual int int_test(){};
};

/**
 *
 */
class StringPractice:public Code_practice{
public:
    void string_Practice(const std::string&str1, const std::string& str2 );
    int romanToInt(const std::string &str);
};


#endif //INC_001_NEWPROJECT_PRACTICE_LEETCODE_H
