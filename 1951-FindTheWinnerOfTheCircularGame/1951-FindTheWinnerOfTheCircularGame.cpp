// Last updated: 7/2/2025, 11:50:05 PM
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>nums(n);

        for(int i=0;i<n;i++) nums[i] = i+1;
        int idx = 0;
        while(nums.size() > 1){
            int rem_idx = (idx+k-1)%nums.size();
            
            nums.erase(nums.begin() + rem_idx);
            
            idx = rem_idx%nums.size();
        }

        return nums[0];
    }
};