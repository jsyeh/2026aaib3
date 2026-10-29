// week08-3.cpp 學習計畫 Matrix 第3題 有點難
// LeetCode 54. Spiral Matrix 螺旋矩陣, 繞圈圈輸出
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size(); // 長、寬
        vector<int> ans;
        int left = 0, right = N-1, up = 0, down = M-1; // 四個變數
        // 中間要繞圈圈 4個方向: 往右、往下、往左、往上(目前的版本還是錯的, 因為有4個角落重覆, 而且沒有繞進去)
        while (ans.size() < M * N) { // 重覆做, 直到收集齊全部的格子
            int i, j;
            i = up; // 最上面這條, 要往右
            for (int j=left; j<=right; j++) { // 往右
                ans.push_back( matrix[i][j] );
            }
            up++; // 走完了最上面這條, 整條刪掉

            j = right; // 最右邊這條, 要往下
            for (int i=up; i<=down; i++) { // 往下
                ans.push_back( matrix[i][j] );
            }
            right--; // 走完了最右邊這條, 整條刪掉

            if (ans.size() == M * N) break; // 湊齊了!!!

            i = down; // 最下面這條, 要往左
            for (int j=right; j>=left; j--) { // 往左
                ans.push_back( matrix[i][j] );
            }
            down--; // 走完了最下面這條, 整條刪掉

            j = left; // 最左邊這條, 要往上
            for (int i=down; i>=up; i--) { // 往上
                ans.push_back( matrix[i][j] );
            }
            left++; // 走完了最左邊這條, 整條刪掉
        }
        return ans;
    }
};