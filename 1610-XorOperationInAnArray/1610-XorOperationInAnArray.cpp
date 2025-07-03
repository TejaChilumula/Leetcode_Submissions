// Last updated: 7/2/2025, 11:50:37 PM
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans = 0;
        while(n-->0){
            int s = start + 2 * n;
            cout<<s<<"->";
            ans ^= s;
        }
        return ans;
    }
};