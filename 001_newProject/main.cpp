#include <iostream>
#include <string>
#include <vector>
#include <sstream>

#include "./practice/PalindromeChecker.h"
#include "./practice/practice_leetCode.h"
/**
 *  main
 * @return err
 */
int main() {
    // 示例测试
    std::string s;
    std::cout << "Please input: ";
    std::cin >> s;

    StringPractice strPra;

    int result = strPra.romanToInt(s);
    std::cout << "count: " << result << std::endl;

    return 0;
}
