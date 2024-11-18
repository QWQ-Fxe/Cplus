//
// Created by fxe on 2024/10/27.
//

#include "practice_leetCode.h"
/**
 * @author fjl
 * @param str1
 * @param str2
 */
void StringPractice::string_Practice(const std::string& str1, const std::string& str2 ){

    std::string combinedStr = str1 + str2;
    std::cout << "This is " << combinedStr << std::endl;
    std::string token;

    //这个构造函数的作用是将combinedStr这个字符串转换为一个输入流对象。
    // 之后就可以使用istringstream对象的各种输入操作符（如>>）从这个字
    // 符串中提取数据，就像从标准输入（cin）中读取数据一样。
    std::istringstream iss(combinedStr);
    std::vector<std::string> tokens;
    while (iss >> token) {
        tokens.push_back(token);
    }
    tokens.begin();


    std::cout << "This is" << std::endl;
    for (const auto& s : tokens) {
        std::cout << s << std::endl;
    }
}
/**
 * 给定一个罗马数字，将其转换成整数
 * @param str
 * @return
 */
int StringPractice::romanToInt(const std::string &str) {
    std::unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total =0;
    int len = str.length();

    for (int i = 0; i < len; ++i) {
        int currentValue = romanMap[str[i]]; // 当前字符的值； str[i] 字符，根据获取的字符，在map 中查找对应的值。
        if ((currentValue < romanMap[str[i + 1]]) && (i < len - 1) ) {//当前值小于后一位值，同时当前值不为最后一位
            // 特殊规则：当前字符小于下一个字符，执行减法
            total -= currentValue;
        } else {
            // 正常累加
            total += currentValue;
        }
    }

    return total;
}
