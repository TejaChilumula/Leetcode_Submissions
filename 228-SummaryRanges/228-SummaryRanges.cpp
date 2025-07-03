// Last updated: 7/2/2025, 11:53:09 PM
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size() <= 0) return {};
        int n = nums.size();

        vector<string> ans;
        int start = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]+1 == nums[i+1]) continue;
            else{
                if( start == i) ans.push_back(to_string(nums[start]));
                else{
                    string s = to_string(nums[start]);
                    s += "->";
                    s += to_string(nums[i]);
                    ans.push_back(s);

                }
                    start = i+1;
            }

        }

        if(start == n-1) ans.push_back(to_string(nums[start]));
        else{
            string s = to_string(nums[start]);
                    s += "->";
                    s += to_string(nums[n-1]);
                    ans.push_back(s);
        }

        return ans;
    }
};