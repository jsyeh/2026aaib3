/// week03-3.cpp 今天的主題 C++ 陣列
#include <iostream>
#include <vector> /// 本週主題 vector 陣列
using namespace std;

int main()
{
    vector<int> a; /// C++ 伸縮自如的陣列 的宣告
    a.push_back(99); /// 把 99 塞到陣列後面
    a.push_back(88); /// 把 88 塞到陣列後面
    a.push_back(77); /// 把 77 塞到陣列後面
    for (int i=0; i<a.size(); i++) cout << a[i] << " ";
    cout << "\n";

    a.push_back(88); /// 把 88 塞到陣列後面
    a.push_back(77); /// 把 77 塞到陣列後面
    for (int i=0; i<a.size(); i++) cout << a[i] << " ";
    cout << "\n";
}
