// Last updated: 7/2/2025, 11:49:30 PM
class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int>ops(n+1 , 0);

        // we get our overall map done
        for(auto i : shifts){
            if(i[2] == 1)
            { ops[i[0]]++;
            ops[i[1]+1]--;}
            else
            { 
            ops[i[1]+1]++;
            ops[i[0]]--;}

        }
        int preSum = 0;

        for(int i=0;i<n;i++)
        {
            preSum += ops[i];

            int idx = ((preSum % 26) + 26)%26;   // preSum%26 is to handle the -ve elements

            int org_idx = s[i] - 'a';
            int shifted_idx = (org_idx + idx) % 26;
            s[i] = 'a' + shifted_idx;

        }

    return s;

    }
};