// Last updated: 7/2/2025, 11:53:06 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        ans.push_back(1);
        int right=1;

        for(int i=1;i<nums.size();i++)
        {
            ans.push_back(ans[i-1]*nums[i-1]);
        }

        for(int i=nums.size()-1;i>=0;i--)
        {
            ans[i] = ans[i]*right;
            right = right*nums[i];
        }

        return ans;
        
    }
};