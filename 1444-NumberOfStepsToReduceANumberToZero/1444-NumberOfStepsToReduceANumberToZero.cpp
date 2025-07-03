// Last updated: 7/2/2025, 11:50:50 PM
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;
        while(num){
            if(num & 1) num ^= 1;
            else num = num>>1;
            steps++;
        }
        return steps;
    }
};