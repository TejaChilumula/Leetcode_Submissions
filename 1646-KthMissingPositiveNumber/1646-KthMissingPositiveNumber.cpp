// Last updated: 7/2/2025, 11:50:33 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         
        int l = 0, h = arr.size()-1;

        while(l<=h)
         {
            int mid = l + (h-l)/2;

            // check how many missing at this mid
            // to find out missing at that index = arr[i] - (i+1)
            if(arr[mid] - mid - 1 < k)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
         }

        // we will get the index where kth missing lies in [l.h] range,
        // at end l cross h , breaks while, opp polarity, where l is at higher bound
        // it will be arr[h] + more missing after arr[h]
        // ans = arr[h] + k - (arr[h]-(h+1))#this is missing before h
                //arr[h] + k - arr[h] + h + 1
                //k + h + 1 ( l ) -> k + l
         return l + k;
          
    }
};