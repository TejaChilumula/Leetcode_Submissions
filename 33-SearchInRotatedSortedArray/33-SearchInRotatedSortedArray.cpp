// Last updated: 7/2/2025, 11:55:22 PM
class Solution {
public:
    int search(vector<int>& arr, int x) {
        // we need to check the sorting of it,
        // if not the end might be small and first will be big"
        // [7 , 8 , 9 ,0, 1, 2,3,4]

        int l = 0, h = arr.size() - 1;

        while(l <= h)
        {
          int mid = l + (h-l)/2;

          if(arr[mid] == x) return mid;
          // left side sorted
          if(arr[l] <= arr[mid])
          {
              if(arr[l] <= x && x <= arr[mid])
                h = mid-1;
              else l = mid+1;
          }
          else{
            
              if(arr[mid] <= x && x <= arr[h])
                l = mid+1;
              else h = mid-1;
          
          }
        }

      return -1;
    }
};