/// week02-2.cpp 要使用「命名空間」
#include <iostream>
#include <string>
using namespace std; /// 使用 std「命名空間」
int main()
{
    cout << "請問你叫什麼名字啊? ";
    string name; ///宣告字串 name
    cin >> name; ///上週教 cin 原來長這樣
    cout << name << "你好, 今天教「命名空間」哦!";
}
