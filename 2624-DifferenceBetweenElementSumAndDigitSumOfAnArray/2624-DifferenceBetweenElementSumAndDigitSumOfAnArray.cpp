// Last updated: 9/13/2025, 8:02:51 PM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(),0);

        int uniSum = 0;

        for(auto i : nums){
            uniSum += unitSum(i);
        }

        return abs(sum - uniSum);
    }

    int unitSum(int n){
        int ans = 0;
        while(n>0){
            ans += n%10;
            n /= 10;
        }

        return ans;
    }
};