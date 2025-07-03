// Last updated: 7/2/2025, 11:50:45 PM
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int c[101]={0,0,0};
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            c[nums[i]]++;
            
        }
        for(int i=1;i<101;i++){
            c[i]+=c[i-1];
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                ans.push_back(0);
            else 
                ans.push_back(c[nums[i]-1]);
        }
        
        return ans;
        
    }
};