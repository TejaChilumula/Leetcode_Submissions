// Last updated: 7/2/2025, 11:49:19 PM
class Solution {
public:
    int distinctIntegers(int n) {
        int c = 1;
        if(n == 1) return 1;
        // n = n-1;
        // while(n > 1){
        //     //if(n % 2 != 0) return c;
        //     n = n-1;
        //     c++;
        // }

        return n-1;
    }
};