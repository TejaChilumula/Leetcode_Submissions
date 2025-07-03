// Last updated: 7/2/2025, 11:54:18 PM
class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int l = 0, h = n-1;

        while(l <= h)
        {
            int mid = l + (h-l)/2;

            if(arr[mid] == target) return true;

            // trick for duplicates

            if(arr[l] == arr[mid] && arr[mid] == arr[h])
            {
                l++, h--;
                continue;
            }

            // left sorted
            if(arr[l] <= arr[mid])
            {
                if(arr[l] <= target && target <= arr[mid]) h = mid-1;
                else l = mid + 1;
            }
            else
            {
                if(arr[mid] <= target && target <= arr[h]) l = mid+1;
                else h = mid - 1;
            }
        }
            return false;
        
    }
};