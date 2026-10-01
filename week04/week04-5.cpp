// week04-5.cpp 學習計畫 Basic 第7題
// LeetCode 66. Plus One 加1 陣列當成數字, 加1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1; // 進位的英文 (帶我升級)
        int N = digits.size(); // 有幾位數
        for (int i=N-1; i>=0; i--) { // 倒的迴圈
            int now = digits[i] + carry;
            carry = now / 10;
            digits[i] = now % 10;
        }
        if (carry>0) digits.insert(digits.begin(), carry); // 還有剩的、要進位
        return digits;
    }
};
