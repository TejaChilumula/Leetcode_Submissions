// Last updated: 7/2/2025, 11:54:10 PM
class Solution {
public:
    int numTrees(int n) {
        if(n <= 1) return 1;
        
        int sum = 0;
        for(int i=1;i<=n;i++)
         sum += numTrees(i-1)*numTrees(n-i);

        return sum;
    }
};