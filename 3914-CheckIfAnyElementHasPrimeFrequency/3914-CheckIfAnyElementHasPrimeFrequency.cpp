// Last updated: 7/2/2025, 11:48:51 PM
class Solution {
public:
    bool checkPrimeFrequency(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int c = 1;
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]) c++;
            else{
                if(c>1 && isPrime(c)) return true;
                c = 1;
            }
        }
        if(c > 1 && isPrime(c)) return true;
        return false;
    }
bool isPrime(int c){
    for(int i=2;i<c;i++){
        if(c%i == 0) return false;
    }
    return true;
}
};