// Last updated: 7/2/2025, 11:49:00 PM
class Solution {
public:
    int minimumDeletions(string word, int k) {
        unordered_map<int,int> mp;
        vector<int> freq;
        int ans = INT_MAX;
        
        for(int i=0;i<word.size();i++){
            char w = word[i];
            mp[w - 'a']++;
        }

        for(auto entry : mp){
            freq.push_back(entry.second);
        }

        sort(freq.begin(), freq.end());
        int sum_up_left = 0;
        for(int i=0;i<freq.size();i++){
            int base = freq[i];
            int rem = sum_up_left;
            for(int j = i ; j<freq.size();j++){
                if(freq[j] > base + k ){
                    rem += freq[j] - (base + k);
                }
            }
            sum_up_left += freq[i];
            ans = min(rem, ans);
        }

        return ans;

    }
};