// Last updated: 7/2/2025, 11:49:21 PM
class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());

        int l = 0, h = skill.size()-1;
        int sum = 0;
        long long p = 0;

        while(l < h)
        {
            if(sum > 0 && sum != skill[l]+skill[h]) return -1;

            sum = skill[l] + skill[h];
            p += skill[l] * skill[h];
            l++;
            h--;
        }

        return p;
    }
};