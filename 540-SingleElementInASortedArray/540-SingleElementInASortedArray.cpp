// Last updated: 7/2/2025, 11:52:24 PM
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size(),l = 1, r = arr.size()-2;

        if(arr.size() == 1) return arr[0];

         if(arr[0] != arr[1]) return arr[0];
         if(arr[n-1] != arr[n-2]) return arr[n-1];
    
        while(l <= r)
        {
            int mid = l + (r-l)/2;

            if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1]) return arr[mid];

            else if(mid % 2 == 0 && arr[mid] == arr[mid+1] || mid%2 != 0 && arr[mid] == arr[mid-1]) l = mid+1;
            else r = mid-1;
        }

        return -1;
    }
};