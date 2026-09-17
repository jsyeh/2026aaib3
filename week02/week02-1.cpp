/// week02-1.cpp 今天的主題 C++ string 字串
/// File-Save As 要自己輸入副檔名 .cpp
#include <iostream> ///上週教的
#include <string> ///第02週教的
///現在是字特別多的版本
int main()
{
    std::cout << "請問你叫什麼名字啊? ";
    std::string name; ///宣告字串 name
    std::cin >> name; ///上週教 cin 原來長這樣
    std::cout << name << "你好, 今天教字串哦!";
}
