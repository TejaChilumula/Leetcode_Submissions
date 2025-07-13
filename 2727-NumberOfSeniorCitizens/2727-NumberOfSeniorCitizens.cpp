// Last updated: 7/12/2025, 6:29:52 PM
class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            string age = details[i].substr(11,2);
            cout<<age<<endl;
            if(stoi(age) > 60) ans++;
        }

        return ans;
    }
};