// Last updated: 7/2/2025, 11:55:27 PM
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0, j = nums.size()-1;

        while(j>=0 && nums[j] == val) j--;

        while(i<=j){
            if(nums[i] == val){
                swap(nums[i], nums[j--]);
            }
            else i++;
        }
        return j+1;
    }
};