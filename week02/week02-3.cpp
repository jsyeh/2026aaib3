// week02-3.cpp 學習計畫第1題
// LeetCode 1768. Merge Strings Alternately
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans; // 放答案的字串
        int N1 = word1.length(), N2 = word2.length();
        for (int i = 0; i < max(N1,N2) ; i++) {
            if (i<N1) ans += word1[i]; // 把 word1[i] 放入答案
            if (i<N2) ans += word2[i]; // 把 word2[i] 放入答案
        }
        return ans; // 把答案送出去
    }
};
