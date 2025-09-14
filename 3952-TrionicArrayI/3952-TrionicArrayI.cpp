// Last updated: 9/13/2025, 8:02:32 PM
class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        /*
        /\/
        */

        if(nums.size() < 4) return false;
        int n = nums.size();
        int p = 0, q = 0, end = 0;
        int i = 1;

        for(i = 1;i<n;i++){
            p = 1;
            if(nums[i] <= nums[i-1]) break;
        }
        if(i == 1) return false;
        int j = 0;
        for(j = i;j<n;j++){
            if(nums[j] >= nums[j-1]) break;
            q = 1;
        }
        if(j==i) return false;
        cout<<"i"<<i;
        for(int k = j; k<n;k++){
            cout<<"end";
               if(k == n-1){
                   cout<<"entering inside";
                   if(nums[k] <= nums[k-1]) return false;
                   else return true;
               }
            if(nums[k] <= nums[k-1]) return false;
             end = 1;

        }

        cout<<p<<q<<end;

        if(p == 1 && q == 1 && end == 1) return true;
        return false;
    }
};