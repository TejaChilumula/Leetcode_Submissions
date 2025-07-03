// Last updated: 7/2/2025, 11:49:20 PM
class Solution {
public:
    int maxJump(vector<int>& arr) {

        int even = INT_MIN;
        int odd = INT_MIN;
        int ans = 0;
        int n = arr.size();

        if(n == 2) return abs(arr[0] - arr[1]);

        for(int i=0;i<n-2;i++)
        {
            if(i%2 == 0)
            {
                even = max(even , abs(arr[i] - arr[i+2]));
               
            }
            else{
                 odd = max(odd , abs(arr[i] - arr[i+2]));
            }
            
        }

        return max(even, odd);
    }
};