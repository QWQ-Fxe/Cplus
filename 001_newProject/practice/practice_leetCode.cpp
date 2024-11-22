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
    int len = str.size();

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
/**
 * 用来查找字符串数组中的最长公共前缀。如果不存在公共前缀，返回空字符串 ""。
 * @param str
 * @return
 */
std::string StringPractice::longestCommonPrefix(std::vector<std::string>& str){
    // 如果字符串数组为空，返回空字符串
    if (str.empty()) return "";

    std::string firstStr = str[0]; // 第一个字符串
    int compLength = 0; // 当前匹配的前缀长度

    for (int i = 0; i < firstStr.size(); ++i) {
        char currentChar = firstStr[i]; // 第一个字符串内容
        for (int j = 0; j < str.size(); ++j) {
            // 当前遍历不超过成员长度， 当前字符与成员字符比较
            if( i >= str[j].size() || currentChar != str[j][i])
                return firstStr.substr(0,compLength);
        }
        // 完成比较后，才能证明存在共有前缀
        compLength ++;
    }
    return firstStr.substr(0, compLength);
}
std::string StringPractice::longestCommonPrefix2(std::vector<std::string> &strs)  {
    // 如果字符串数组为空，返回空字符串
    if (strs.empty()) return "";

    // 找到最短字符串，需要获取字符串本身，而不是指向它的 迭代器，因此需要解引用。
    std::string minStr = *min_element(strs.begin(), strs.end());

    // 遍历最短字符串的每个字符
    for (int i = 0; i < minStr.size(); ++i) {
        char currentChar = minStr[i]; // 依次获取最短字符串的字符成员
        for (const std::string& str : strs) {// 使用str 遍历容器
            // 如果当前字符不匹配，返回当前公共前缀
            if (str[i] != currentChar) {
                return minStr.substr(0, i);//根据最短字符串获取
            }
        }
    }
    // 如果所有字符都匹配，返回最短字符串
    return minStr;
}