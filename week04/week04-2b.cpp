// week04-2b.cpp SOIT108_Advance_008
// C++ version (This week)
#include <iostream>
#include <vector>
#include <algorithm> // Week04
using namespace std;
int main()
{
	vector<int> a(10); // Week03 + Week04
	for (int i=0; i<10; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end()); // Week04

	for (int i=9; i>=0; i--) {
		cout << a[i] << ' ';
	}
}
