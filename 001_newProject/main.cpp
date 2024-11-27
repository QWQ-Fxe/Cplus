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

    cout << "Enter a string containing only '(', ')', '{', '}', '[' and ']': "; // 提示用户输入
    string input;
    cin >> input; // 从终端读取字符串

    if(strPra.isValid(input)){
        cout << "The string is valid." << endl; // 有效字符串
    } else {
        cout << "The string is not valid." << endl; // 无效字符串
    }

    return 0;
}
