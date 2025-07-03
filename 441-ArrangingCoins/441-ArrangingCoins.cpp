// Last updated: 7/2/2025, 11:52:35 PM
class Solution {
public:
    int arrangeCoins(int n) {
        int i = 1, steps = 0;
        while(n>0){
            if(n < i) return steps;
            n -= i++;
            steps++;
        }
        return steps;
    }
};