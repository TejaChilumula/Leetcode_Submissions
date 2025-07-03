// Last updated: 7/2/2025, 11:49:54 PM
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        // string ans= "";
        // help(nums, 0, "", ans);
        // return ans;

        string ans = "";
        // Iterate through each index of the strings
        for (int i = 0; i < nums.size(); ++i) {
            // Append the opposite character of the i-th character in the i-th string
            ans += nums[i][i] == '0' ? '1' : '0';
        }
        // ans is now guaranteed to be different from every string in nums
        return ans;
    }

    bool help(vector<string>& nums, int idx, string s, string& ans)
    {
        if(idx == nums.size()) 
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i] == s) return false;
            }
            ans = s;
            return true;
        }

        bool zero = help(nums, idx+1, s+='0', ans);
        bool one = help(nums, idx+1, s+='1', ans);

        return zero | one ;        
    }
};