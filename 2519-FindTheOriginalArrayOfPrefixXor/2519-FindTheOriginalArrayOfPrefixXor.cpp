// Last updated: 7/2/2025, 11:49:27 PM
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        // The whole intuition is that 
        /*
            of the i-1th will have XOR from 0,1,2,...i-1
            ith will have XOR of i-1 ^ i
            the XOR rule is that A ^ A = 0, XOR[i-1]^XOR[i-1] = 0, XOR[i-1]^XOR[i] = ith val rest all will
            cancel out
        */
        vector<int> ans;
        ans.push_back(pref[0]);

        for(int i=1;i<pref.size();i++){
            ans.push_back(pref[i]^pref[i-1]);
        }
        return ans;
    }
};