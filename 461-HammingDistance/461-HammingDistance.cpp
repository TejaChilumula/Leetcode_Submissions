// Last updated: 7/2/2025, 11:52:33 PM
class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y; // will have all the 1's which don't overlap, so findout the
        // no's of 1's in XOR, which internally the different 1's
        int count = 0;
        while(z){
            if(z&1) count++;
            z = z>>1;
        }
        return count;
    }
};