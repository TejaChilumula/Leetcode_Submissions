// Last updated: 7/2/2025, 11:49:14 PM
class Solution {
public:
    long global_ans = 0;
    int punishmentNumber(int n) {
        // how to get punishment number ?....

        for(int i=1;i<=n;i++){
            string sqrt = to_string(i*i);

            if(helper(i, sqrt, 0, 0, sqrt.size())) global_ans += i*i;
            
        }
        return global_ans;
    }

    bool helper(long ans, string sqrt, int idx, int sum, int n){

        if(idx == sqrt.size()){
            
            return sum == ans;
        }

        if(sum > ans || idx > sqrt.size()) return false;

        for(int i=idx;i<=n;i++){
            string num_str = sqrt.substr(idx,i-idx+1);
            int num = stoi(num_str);
            if(helper(ans, sqrt, i+1, sum+num, n)) return true;
        }
        return false;
    }


};