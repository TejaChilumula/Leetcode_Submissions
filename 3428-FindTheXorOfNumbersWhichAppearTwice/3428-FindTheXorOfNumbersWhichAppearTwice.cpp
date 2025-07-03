// Last updated: 7/2/2025, 11:48:57 PM
class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        set<int> sett;
        int XOR = 0;
        for(int num : nums){
            if(find(sett.begin(), sett.end(), num) != sett.end()) XOR ^= num;
            sett.insert(num);
        }
        return XOR;
    }
};