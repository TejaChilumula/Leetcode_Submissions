// Last updated: 7/2/2025, 11:49:26 PM
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int total = 0, n = nums.size();
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(!s.count(nums[i]) && nums[i] < 10)
            {
                s.insert(nums[i]);
            }
            else{
                int rev_num = rev(nums[i]);
                s.insert(rev_num);
                s.insert(nums[i]);
            }
        }

        total += s.size();
        return total;
   
    }

    int rev(int num){
        string num_s = to_string(num);
        int start=0;
        reverse(num_s.begin(), num_s.end());

          while (start < num_s.size() && num_s[start] == '0') {
        start++;
        }

       string ss = num_s.substr(start);

        return ss.empty() ? 0 : stoi(ss);
    }
};