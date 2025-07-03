// Last updated: 7/2/2025, 11:52:44 PM
class Solution {
public:
    vector<int> countBits(int n) {
        /*
            1. Tricky BitManipulations
            2. Pow of 2 - DP 
        */

        /*
        - Trick 1 -- DP , we know that we differ with 1 bit if its odd or 0 bit if its even with no
                    (i >> 1) - 1 bit differ if odd or 0 bit w even
        

        vector<int> ans(n+1,0);

        for(int i=1;i<=n;i++)
            ans[i] = ans[i>>1] + (i&1);

    
        return ans;

        Trick 2 : Pow of 2 trick, 
            if no is pow of 2, then count = 1
            if not then the no of bits lies between last seen pow of 2 and the offset
                let's say 7, 
                    last seen pow of 2 is 4
                        bits diff is 7 - 4 = 3 - 0 0 1 1 - 2 bits + 1 pow of 2 = 3
        */

        vector<int> ans(n+1,0);
        int last2pow = 0;

        for(int i=1;i<=n;i++){
            if((i&(i-1)) == 0){
                last2pow = i;
                ans[i] = 1;
            }
            ans[i] = ans[i-last2pow] + 1;
        }
        return ans;
    }
};