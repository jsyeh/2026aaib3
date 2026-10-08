// week05-1.cpp UVA10252 (only 自訂測資 OK)
#include <iostream>  // week01
#include <string>    // week02
#include <vector>    // week03,week04
#include <algorithm> // week04
using namespace std;

int main()
{
	string s1, s2; // week02
	//while ( cin >> s1 >> s2 ) { // !!! wrong version !!!
	while ( getline(cin, s1) ) {
		getline(cin, s2); 
		vector<char> a1(s1.begin(), s1.end());  // week04
		vector<char> a2(s2.begin(), s2.end());  // week04
		sort( a1.begin(), a1.end() ); // week04
		sort( a2.begin(), a2.end() ); // week04
		int N1 = a1.size(), N2 = a2.size(), i=0, j=0;
		while ( i<N1 && j<N2 ) {
			if (a1[i]==a2[j]) {
				if ( islower(a1[i]) ) cout << a1[i];
				i++; j++;
			} else if ( a1[i] < a2[j] ) i++;
			else if ( a1[i] > a2[j] ) j++;
		}
		cout << "\n";
	}
}
