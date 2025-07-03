// Last updated: 7/2/2025, 11:51:56 PM
class Solution {
public:
    bool rotateString(string s, string goal) {
        
        int n = s.size();
        // if s size not equals g
        if(s.size() != goal.size()) return false;

        for(int i=0;i<n;i++)
        {
            if(isthere(s,goal, i)) return true;

        }

        return false;
}

    bool isthere(string s, string g, int rotation_idx)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]  != g[(i + rotation_idx)%g.size()]) return false;
        }
        return true;
    }
};