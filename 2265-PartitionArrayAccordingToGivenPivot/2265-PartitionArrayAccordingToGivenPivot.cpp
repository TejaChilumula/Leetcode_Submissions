// Last updated: 7/2/2025, 11:49:40 PM
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        // What we learned its we can use two pointers in a single for loop and 
        // its not the regular Qucik Selrct, cause they dont maintain the ordering, here we have to maintain the relative ordering

        vector<int>result(nums.size(),0);
        int left=0,right=nums.size()-1;

        for(int i=0,j=nums.size()-1;i<nums.size(),j>=0;i++,j--){// Both ops at once
            if(nums[i] < pivot)
                result[left++] = nums[i];
            if(nums[j] > pivot)
                result[right--] = nums[j];
        }

        while(left <= right)
            result[left++] = pivot;
        
        return result;
    }
};