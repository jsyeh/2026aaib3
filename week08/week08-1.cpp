// week08-1.cpp SOIT108_Advance_002B
// 使用大二教的 C++ 來解
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a<b) swap(a,b);
	if (a<c) swap(a,c);
	if (b<c) swap(b,c);
	cout << a*100+b*10+c+1;
}