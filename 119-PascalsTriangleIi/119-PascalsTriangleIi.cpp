// Last updated: 7/2/2025, 11:53:56 PM
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // updated version
        /*Instead of pushing 1 at front and back of the vector, what we can do is 
        we can initialise with 1's so that can just need to change the 2 to i-1 values*/

        vector<int> prev;

        for(int i=0;i<=rowIndex;i++){
            vector<int> cur(i+1, 1);
            for(int j=1;j<i;j++){
                cur[j] = prev[j-1] + prev[j];
            }
            prev = cur;
        }
        return prev;
    }
};