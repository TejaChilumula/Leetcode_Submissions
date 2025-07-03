// Last updated: 7/2/2025, 11:50:43 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = *max_element(candies.begin() , candies.end());
        vector<bool>result;
        for(auto i : candies)
        {if ((i + extraCandies)>=maxi)result.push_back(true);else result.push_back(false);}
        return result;}};
