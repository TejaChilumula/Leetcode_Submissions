// Last updated: 7/2/2025, 11:52:41 PM
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        
        vector<int> ans;
        
        
        for(int i : nums1)
        {
            mp[i]++;
        }
        
        for(int i : nums2)
        {
            if(mp[i] != 0 && mp.find(i) != mp.end())
            {
                mp[i]--;
                ans.push_back(i);
            }
            
            
        }
        
        return ans;
    }
};