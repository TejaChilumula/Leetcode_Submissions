// Last updated: 7/2/2025, 11:53:58 PM
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> lcl;
        lcl.push_back(1);
        ans.push_back(lcl);
        lcl.clear();

        for(int i=1;i<numRows;i++){
            lcl.push_back(1);
            for(int j=1;j<i;j++){
                int num = ans[i-1][j-1] + ans[i-1][j];
                lcl.push_back(num);
            }
            lcl.push_back(1);

            ans.push_back(lcl);
            lcl.clear();        
            }
            return ans;
    }
};