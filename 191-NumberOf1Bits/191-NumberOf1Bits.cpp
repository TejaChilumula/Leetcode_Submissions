// Last updated: 7/2/2025, 11:53:25 PM
class Solution {
public:
    int hammingWeight(int n) {
        int bits = 0;
        for(int i=0;i<32;i++){
            if(n & (1 << i)) bits++;
        }

        return bits;
    }
};