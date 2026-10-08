// week05-3a.cpp 學習計畫 Built-in Functions 第1題
// LeetCode 58. Length of Last Word 最後那個字, 有幾個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, now = 0; // 最後答案 vs. 現在累積字母
        for (char c : s) { // 每次逐一取出字母檢查
            if (c==' ') { // 遇到空格,要清空
                if (now!=0) ans = now; // 更新答案
                now = 0; // 清空
            } else now++; // 遇到不是空格, 就要 +1
        }
        // 還差一點點(3個測試資料, 只對1個, 另外2個有問題)
        if (now!=0) ans = now; // 更新答案
        return ans; // 先試試看 (還沒有正確)
    }
};