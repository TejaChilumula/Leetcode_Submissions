// Last updated: 7/2/2025, 11:53:37 PM
class Solution {
public:
    int findMin(vector<int>& arr) {
            int l = 0 , h = arr.size()-1;
            int ans = INT_MAX;
            while(l <= h)
            {
                int mid = l + (h-l)/2;

                if(arr[l] <= arr[h])
                    return arr[l];
                else
                {
                    if(arr[l] <= arr[mid])
                        l = mid+1;
                    else
                        h = mid;
                }
            }

            return -1;
        }
};