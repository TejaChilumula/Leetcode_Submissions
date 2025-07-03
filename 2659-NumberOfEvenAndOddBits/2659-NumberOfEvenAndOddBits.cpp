// Last updated: 7/2/2025, 11:49:18 PM
class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even = 0 , odd = 0;
        for(int i=0;i<32;i++){
            if((n>>i) & 1LL){
                if(i%2 == 0) even++;
                else odd++;
            }
        }
        return {even, odd};
    }
};