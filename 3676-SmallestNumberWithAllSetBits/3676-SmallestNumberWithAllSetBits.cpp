// Last updated: 7/2/2025, 11:48:48 PM
class Solution {
public:
    int smallestNumber(int n) {
        int max_bit_pos = 0;

        while(true){
            cout<<(1<<max_bit_pos);
            if(1<<max_bit_pos > n) break;
            max_bit_pos++;
        }

        return (1<<max_bit_pos)-1;
        
    }
};