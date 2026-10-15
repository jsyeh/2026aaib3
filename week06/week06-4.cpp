// week06-4.cpp SOIT108_Advance_010
# include <string>
# include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int N = s.length();
    for (int i=0; i<N; i++) {
        cout << s[i];
        if ( (N-i-1)%3==0 && (N-i-1)!=0 ) cout << ",";
    }
}