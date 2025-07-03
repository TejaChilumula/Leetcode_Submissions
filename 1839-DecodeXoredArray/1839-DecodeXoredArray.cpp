// Last updated: 7/2/2025, 11:50:16 PM
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int>a;
       encoded.insert(encoded.begin(),first);
        for(int i=1;i<encoded.size();i++)
        {
           encoded[i]=encoded[i]^encoded[i-1];
        }
        return encoded;
    }
};