// week02-4.cpp 學習計畫 Basic 第2題
// LeetCode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int U[26] = {}; // 有26個 回收桶(對應26個字母), 裡面先放0
        for (char c : s ) { // C++ 進階 for 迴圈寫法
            U[c-'a'] ++; // 把字母放進「對應」的 回收桶 裡
        }
        for (char c : t ) { // C++ 進階 for 迴圈寫法
            U[c-'a'] --; // 把對應的桶子裡, 拿掉1個字母
            if ( U[c-'a'] < 0 ) return c; // 如果字母不夠用, 找到凶手了
        }
        return 0;
    }
};
