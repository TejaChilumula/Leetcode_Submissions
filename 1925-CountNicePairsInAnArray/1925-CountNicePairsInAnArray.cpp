// Last updated: 7/2/2025, 11:50:09 PM
class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int, int> mapp;
        int ans= 0;
        const int mod = 1e9 + 7;

        for(int i : nums)
        {
            int revv = rev(i);
            int count = mapp[i-revv];
            mapp[i-revv] = count + 1;
            ans = (ans + count) % mod;
           
        }

        return ans;
    }

    int rev(int num)
    {
        int rem = 0;
        int revnum = 0;

        while(num > 0)
        {
            rem = num%10;
            revnum = revnum*10 + rem;
            num /= 10;
        }

        return revnum;
    }
};