// week08-3_again.cpp 學習計畫 Matrix 第3題 重寫一次
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> ans;
        int left = 0, right = N-1, up = 0, down = M-1;
        while (ans.size() < M * N) {
            for (int j=left; j<=right; j++) ans.push_back( matrix[up][j] );
            up++;

            for (int i=up; i<=down; i++) ans.push_back( matrix[i][right] );
            right--;

            if (ans.size() == M*N) break;

            for (int j=right; j>=left; j--) ans.push_back( matrix[down][j] );
            down--;

            for (int i=down; i>=up; i--) ans.push_back( matrix[i][left] );
            left++;
        }
        return ans;
    }
};