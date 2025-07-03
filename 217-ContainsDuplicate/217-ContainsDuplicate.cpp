// Last updated: 7/2/2025, 11:53:16 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>sett;

        for(int i : nums)
        {
            if(sett.find(i) == sett.end()) sett.insert(i);
            else return true;
        }
        return false;
    }
};