// Last updated: 7/2/2025, 11:49:41 PM
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int len = s.size();
        int rem = len % k, fill_len = 0;
        if(rem != 0) fill_len = k - rem;

        vector<string> ans;
        int idx = 0;
        string temp= "";
        for(int j=0;j<len;j+=k){
            temp= "";
            for(int i=j;i<j+k;i++) if(i<len) temp += s[i];
            cout<<"size"<<temp.size()<<endl;
            if(temp.size() < k) break;
            ans.push_back(temp);
        }
        
                cout<<"outside in";
        if(temp.size() == k) return ans;

        cout<<fill_len;
        while((fill_len) > 0) 
            {
                cout<<"going in";
                temp += fill;
                fill_len--;
            }

        ans.push_back(temp);

        return ans;
    }
};