// Last updated: 7/12/2025, 6:29:59 PM
class Solution {
public:
    int maximumSum(vector<int>& nums) {

        unordered_map<int, int> freq;
        int n = nums.size(), maxi = -1;

        for(int i=0;i<n;i++){
            int numSum = SumDigits(nums[i]);
            if(freq.count(numSum)){
                maxi = max(maxi, freq[numSum] + nums[i]);
                freq[numSum] = max(nums[i], freq[numSum]);
            }
            else freq[numSum] = nums[i];
        }
        return maxi;

    }

    int SumDigits(int num){

        int rem = 0, sum = 0;

        while(num > 0){
            rem = num%10;
            num /= 10;
            sum += rem;    
        }
        return sum;
    }
};