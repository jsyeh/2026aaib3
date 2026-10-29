// week08-2.cpp 學習計畫 Matrix 第1題
// LeetCode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M = accounts.size(), N = accounts[0].size(); // 長、寬
        int ans = 0; // 找到最多錢的人的錢 (把一行的數字相加)
        for (int i=0; i<M; i++) { // 左手i 對應 M
            int now = 0; // 小迴圈前面 now 是 0
            for (int j=0; j<N; j++) { // 右手j 對應 N
                now += accounts[i][j]; // 小迴圈裡 now += 這格的值
            }
            ans = max(ans, now); // 小迴圈後面, 用 now 更新 ans
        }
        return ans;
    }
};