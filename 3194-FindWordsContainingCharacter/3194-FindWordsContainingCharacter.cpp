// Last updated: 7/2/2025, 11:49:05 PM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for(int i=0;i<words.size();i++){
            string check_word = words[i];
            for(int j=0;j<words[i].size();j++){
                if(check_word[j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};