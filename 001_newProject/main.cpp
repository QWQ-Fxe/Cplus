#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "./practice/PalindromeChecker.h"
#include "./practice/practice_leetCode.h"

using  namespace  std; // 导入命名空间
/**
 *  main
 * @return err
 */
int main() {
    StringPractice strPra; // 实例化类
    std::string haystack, needle;

    // 提示用户输入
    std::cout << "Enter the haystack string: ";
    std::getline(std::cin, haystack); // 获取用户输入的 haystack

    std::cout << "Enter the needle string: ";
    std::getline(std::cin, needle); // 获取用户输入的 needle

    // 调用函数并输出结果
    int result = strPra.strStr(haystack, needle);
    if (result != -1) {
        std::cout << "The first occurrence of the needle is at index: " << result << std::endl;
    } else {
        std::cout << "The needle was not found in the haystack." << std::endl;
    }

    return 0;
}
