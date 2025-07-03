// Last updated: 7/2/2025, 11:51:45 PM
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row = 0, col = 0;

        vector<vector<int>> ans(matrix[0].size(), vector<int>(matrix.size(),0));

        for(int i=0;i<matrix[0].size();i++)
        {
            for(int j=0;j<matrix.size();j++)
            {
                ans[i][j] = matrix[j][i];
            }
        }

        return ans;
    }
};