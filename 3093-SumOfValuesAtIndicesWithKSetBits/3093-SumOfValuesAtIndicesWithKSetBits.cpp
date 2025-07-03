// Last updated: 7/2/2025, 11:49:07 PM
class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int ans = 0;
        /*for(int i=0;i<nums.size();i++)
            { int count = __builtin_popcount(i);
                if(count == k) ans += nums[i];}

            // generic n &( n-1 ) method */

            for(int i=0;i<nums.size();i++){
                int n = i, bits = 0;

                while(n){
                    bits++;
                    n = n&(n-1);
                }
                if(bits == k) ans+=nums[i];
            }
        
        return ans;
    }
};