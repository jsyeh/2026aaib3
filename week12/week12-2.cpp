// week12-2.cpp SOIT106_ADVANCE_011
#include <iostream>
using namespace std;

int main()
{
	char a,b,c,d;
	cin >> a >> b >> c >> d;
	int ans = 0;
	if (a == '1') ans += 8;
	if (b=='1') ans += 4;
	if (c=='1') ans += 2;
	if (d=='1') ans += 1;
	cout << ans << "\n";
}