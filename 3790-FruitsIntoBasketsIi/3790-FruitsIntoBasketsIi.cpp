// Last updated: 9/13/2025, 8:02:36 PM
class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;

        for(int i=0;i<fruits.size();i++){
            for(int j=0;j<baskets.size();j++){
                if(baskets[j] < fruits[i]) continue;
                else{
                ans++;
                baskets[j] = 0;
                break;}
            }
        }

        return fruits.size() - ans;
    }
};