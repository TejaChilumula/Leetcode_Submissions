// Last updated: 7/2/2025, 11:55:36 PM
class Solution {
public:
    void help(string digits, vector<string> &ans, vector<string> letters, int i, string &s)
    {
        if(i == digits.length())
        {
            ans.push_back(s);
            return;
        }
        string letters_on_no = letters[digits[i]-'0'];

        for(auto it : letters_on_no)
        {
            s.push_back(it);
            help(digits, ans, letters, i+1, s);
            s.pop_back();
        }


        
    }
    vector<string> letterCombinations(string digits) {

       vector<string> ans;
        if(digits.length() == 0) return ans;

        vector<string> letters{"", "", "abc", "def", "ghi","jkl","mno","pqrs","tuv","wxyz" };

 
        string s = "";

        help(digits, ans, letters,0,s);

        return ans;

    }
};