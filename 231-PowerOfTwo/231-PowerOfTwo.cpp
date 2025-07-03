// Last updated: 7/2/2025, 11:53:05 PM
class Solution {
public:

    bool isPowerOfTwo(int n) {
        /* TC = O(32)
        if(n == -2147483648) return false;
        for(int i= 0; i<=31;i++){
            if((1<<i) == n) return true;
        }
        return false;
    }
     TC - O(1)*/
       // use Rightmost bit remove technique --- we can remove right most bit by n & (n-1)
        // -- if it is pow of 2 then, it will have only 1 bit, so that will be removed and becomes 0
        if(n<=0) return false;
        return ((n & (n-1)) == 0);
        }
};