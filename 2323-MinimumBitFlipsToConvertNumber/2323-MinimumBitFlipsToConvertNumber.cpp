// Last updated: 7/2/2025, 11:49:36 PM
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int num = start ^ goal;
        int ans =0;
        for(int i=0;i<32;i++){
            if((num>>i)&1) ans++;
        }

        return ans;
    }
};