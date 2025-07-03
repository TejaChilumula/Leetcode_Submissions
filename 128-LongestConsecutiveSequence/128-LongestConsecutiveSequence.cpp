// Last updated: 7/2/2025, 11:53:51 PM
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set s(nums.begin(), nums.end());
        int cur = 0, count = 0, ans = 0;

        for(int num : s){
            if(s.find(num-1) == s.end()){
                cur = num;
                count = 1;
            }

            while(s.find(cur+1) != s.end()){
                cur += 1;
                count++;
            }

            ans = max(count, ans);
        }
        return ans;
    }
};