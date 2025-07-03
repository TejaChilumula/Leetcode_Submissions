// Last updated: 7/2/2025, 11:51:12 PM
class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int maxx = 0, lclmax = 0,ans=0, t=arr.size()/4;
        if(arr.size() == 1) return arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == arr[i+t]) return arr[i];

        }

        return arr[0];
    }
};