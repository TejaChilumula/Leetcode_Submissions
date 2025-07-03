// Last updated: 7/2/2025, 11:51:48 PM
class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        // first make all 0's to 1's in the ist column, so that all the rows has 0 in ist column needs to change. which contributes lot
        /*  1. check cols and if has less no of 1's then flip that col
        */

        int n = grid.size(), m = grid[0].size();
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][0] == 0)
                    // flip the row bits
                    for(int k = 0;k<m;k++) 
                        grid[i][k] = 1 - grid[i][k];
            }
        }
        
        for(int i =0;i<m;i++){
            int zeroes = 0;
            for(int j=0;j<n;j++){
                if(grid[j][i] == 0)
                    zeroes++;
            }
            if(zeroes > n/2)
            for(int j=0;j<n;j++){
                grid[j][i] = 1 - grid[j][i];
            }
        }
        int ans = 0;
        for(int i =0;i<n;i++){
            int sum = 0;
            for(int j=m-1;j>=0;j--){
                sum += grid[i][j] == 1 ? (1<<m-j-1) : 0;
            }
            cout<<sum;
            ans += sum;
        }

        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<grid[i][j];
            }
            cout<<endl;
        }
        return ans;
    }
};