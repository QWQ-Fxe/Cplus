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
    // 示例测试

    StringPractice strPra;

    vector <string> strs = {"interspace", "internet", "interval"};
    basic_string<char> str = strPra.longestCommonPrefix2(strs);

    cout<< str << endl;

    return 0;
}
