// Last updated: 7/2/2025, 11:50:32 PM
class Solution {
public:
    int minOperations(int n) {
        n = n-1;
        int ans = 0;
        while(n>0){
            ans += n;
            n -= 2;
        }
        return ans;
    }
};