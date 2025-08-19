// Last updated: 8/18/2025, 8:34:45 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int zero = 0;
        int product = 1, n = nums.size();
        vector<int> ans(n,0);

        for(int i=0;i<n;i++){
            if(nums[i] == 0)
                zero++;
            else
                product *= nums[i];
        }

        if(zero > 1)
            return ans;
        
        if(zero == 1){
            for(int i=0;i<n;i++){
                if(nums[i] == 0)
                    ans[i] = product;
                else
                    ans[i] = 0;
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans[i] = product/nums[i];
            }
        }

        return ans;
    }
};