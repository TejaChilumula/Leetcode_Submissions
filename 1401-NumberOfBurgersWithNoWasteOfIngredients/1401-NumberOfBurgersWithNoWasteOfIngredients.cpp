// Last updated: 7/2/2025, 11:50:58 PM
class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        if(tomatoSlices < cheeseSlices) return {};
        int j = 0;
        while(tomatoSlices >= 0 && cheeseSlices >= 0 && cheeseSlices*2 != tomatoSlices){
            tomatoSlices -= 4;
            cheeseSlices -= 1;
            j++;
        }
        if(cheeseSlices*2 != tomatoSlices) return {};
        return {j, cheeseSlices};
    }
};