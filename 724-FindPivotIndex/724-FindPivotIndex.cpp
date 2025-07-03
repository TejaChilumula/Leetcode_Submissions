// Last updated: 7/2/2025, 11:52:13 PM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
        arr[0] = nums[0];

        for(int i=1;i<n;i++)
        {
            arr[i] = arr[i-1]+nums[i];
        }

        if(arr[n-1] - arr[0] == 0) return 0;

        for(int i=1;i<n;i++)
        {
            if(arr[i-1] == (arr[n-1] - arr[i])) return i;
        }
        return -1;
    }
};