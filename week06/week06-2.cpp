// week06-2.cpp next week exam
// SOIT108_Advance_014B
# include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int ten = 1;
    while (N>0) {
        int now = N%10 * ten;
        ten = ten * 10;
        N = N / 10;
        cout << now << " ";
    }
}