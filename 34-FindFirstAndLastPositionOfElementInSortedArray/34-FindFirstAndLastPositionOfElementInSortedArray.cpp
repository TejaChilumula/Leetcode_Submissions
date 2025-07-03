// Last updated: 7/2/2025, 11:55:20 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int tar) {
       int n = arr.size(), l = 0, h = arr.size()-1;
        int x = -1, y = -1;
       while(l<=h)
       {
        int mid = l + (h-l)/2;

        if(arr[mid] == tar) 
        {
            x  = mid;
            h = mid-1;
        }
        else if(arr[mid] < tar) l = mid+1;
        else h = mid-1;
       }

    l = 0, h = arr.size()-1;
       while(l<=h)
       {
        int mid = l + (h-l)/2;

        if(arr[mid] == tar) 
        {
            y  = mid;
            l = mid+1;
        }
        else if(arr[mid] < tar) l = mid+1;
        else h = mid-1;
       }

    return {x,y};
    }
};