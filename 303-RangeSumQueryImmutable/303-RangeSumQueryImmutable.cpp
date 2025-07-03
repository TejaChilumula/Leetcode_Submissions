// Last updated: 7/2/2025, 11:52:49 PM
class NumArray {
public:
    vector<int> PreSum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        PreSum.resize(n);
        PreSum[0] = nums[0];

        for(int i=1;i<nums.size();i++){
            PreSum[i] += PreSum[i-1] + nums[i]; 
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) return PreSum[right];
        return PreSum[right] - PreSum[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */