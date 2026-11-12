// week10-4.cpp 學習計畫 Math 第7題
// LeetCode 43. Multiply Strings
// 很大很大的數, 用字串模擬, 進行乘法
class Solution {
public:
    vector<int> myStrVec(string num) {
        vector<int> ans;
        for (int i=num.length()-1; i>=0; i--) { //倒過來
            ans.push_back( num[i] - '0' ); // 字母-字母,變數字
        }
        return ans;
    }
    string multiply(string num1, string num2) {
        if (num1=="0" || num2=="0") return "0"; // 任何數乘 0 就變0
        vector<int> a = myStrVec(num1) ; // 把字串, 變陣列
        vector<int> b = myStrVec(num2) ;

        vector<int> ans( a.size() + b.size() ); //用來放答案的格子

        for (int i=0; i<a.size(); i++) { // a[i]
            for (int j=0; j<b.size(); j++) { // b[j]
                ans[i+j] += a[i] * b[j];
                if (ans[i+j] > 9) { // 太多了, 要進位
                    ans[i+j+1] += ans[i+j] / 10; // 看超過多少, 就進位
                    ans[i+j] = ans[i+j] % 10; // 留下來 的數
                }
            }
        }
        // 把倒過來的陣列, 變成字串
        string ans2 = "";
        for (int i=ans.size()-1; i>=0; i--) { //倒過來
            if ( i==ans.size()-1 && ans[i]==0 ) continue; // 如果最前面「是0」避開它
            ans2 += ( '0' + ans[i] );
        }
        return ans2; // 多了最高位數的 0 怎麼辦?
    }
};