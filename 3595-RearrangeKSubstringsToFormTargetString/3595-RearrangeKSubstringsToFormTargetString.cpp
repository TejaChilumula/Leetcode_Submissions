// Last updated: 7/2/2025, 11:48:53 PM

class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {
        // If the length of s is not divisible by k, it's impossible to divide into k substrings
        if (s.size() % k != 0 || t.size() % k != 0) {
            return false;
        }

        int sub_size = s.size() / k; // Substring size
        vector<string> s_substrings, t_substrings;

        // Break both strings into k substrings of equal size
        for (int i = 0; i < s.size(); i += sub_size) {
            s_substrings.push_back(s.substr(i, sub_size));
            t_substrings.push_back(t.substr(i, sub_size));
        }

        // Sort both substring lists and compare them
        sort(s_substrings.begin(), s_substrings.end());
        sort(t_substrings.begin(), t_substrings.end());

        // If the sorted substrings match, return true
        return s_substrings == t_substrings;
    }
};

