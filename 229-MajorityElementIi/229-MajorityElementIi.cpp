// Last updated: 7/2/2025, 11:53:09 PM
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
         
        int c1 = 0, c2 = 1, cnt1 = 0, cnt2 = 0, n = nums.size();

        for(int i=0;i<nums.size();i++){
            
        
            if(nums[i] == c1){
                cnt1++;
            }
            else if(nums[i] == c2){
                cnt2++;
            }
            else if(cnt1 == 0){
                c1 = nums[i];
                cnt1    = 1;
            }
            else if(cnt2 == 0){
                c2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1 -= 1;
                cnt2 -= 1;
            }
        }
            vector<int> res;
            
            /* this wont work
            if(cnt1 > n/3) res.push_back(c1);
            if(cnt2 > n/3) res.push_back(c2);
            */
            cnt1 = 0, cnt2 = 0;
            for(int i=0;i<n;i++){
                if(nums[i] == c1) cnt1++;
                else if(nums[i] == c2) cnt2++;
            }
            
            if(cnt1 > n/3) res.push_back(c1);
            if(cnt2 > n/3) res.push_back(c2);

            return res;
    }
};