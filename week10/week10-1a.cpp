// week10-1a.cpp 學習計畫 Math 第1題 (暴力 for 迴圈,沒用到數學)
// LeetCode 1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        for (int i=low; i<=high; i++) { // 迴圈很慢
            if (i%2==1) ans++; // 有幾個「奇數」
        }
        return ans;
    }
};