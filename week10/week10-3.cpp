// week10-3.cpp 學習計畫 Math 第2題
// LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
// 把最高薪、最低薪, 扣掉。剩下的平均
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0; // 總薪水
        int M = salary[0], m = salary[0]; // 先「隨便放一個人」
        for (int now : salary) { // 用迴圈,逐一查看薪水
            if (now > M) M = now; // 更新「最高薪」
            if (now < m) m = now; // 更新「最低薪」
            total += now; // 把薪水加進 total
        }
        return (total - M - m) / (salary.size() - 2);
        // return total / salary.size(); 錯錯錯, 要扣掉 最高薪、最低薪
    }
};