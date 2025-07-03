// Last updated: 7/2/2025, 11:53:44 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /* HashMap version
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        for(auto i : mp){
            if(i.second == 1) return i.first;
        }
        return 0;

        // sorting Approach // sort and from the 1th index check its previous same or not , means i-1th idx

        // 3. Bit Manipulation

        int res = 0;
        unordered_map<int,int> mp;

        for(int i=0;i<32;i++){
            for(int j = 0;j<nums.size();j++){
                if(nums[j]&(1<<i)) mp[i]++;
            }
        }

        for(auto i : mp){
            if(i.second %3 != 0)  res |= (1<<i.first);
        }

        // if the number is -ve, which is in exceeding the int range
        if(res >= (1<<31)){
            res -= (1LL << 32);
        }

        return res;

        // Bit Manipulation - Buckets - one and two

        we dont need to store in extra spaces, we can use 2 buckets 
            -   if it occurs more than once move from one to two 
                - check if (one^num)&(~(two)) - not present in one and not present in two - add to one,
                - check if (two^num)&(~(one)) - not present in one, then definetly present in two
        */

        int one = 0, two = 0;

        for(int i=0;i<nums.size();i++){
            one = (one^nums[i])&(~(two));
            two = (two^nums[i])&(~(one));
        }

        return one;
        
    }
};