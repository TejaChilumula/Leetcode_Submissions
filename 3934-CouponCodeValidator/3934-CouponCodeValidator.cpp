// Last updated: 7/12/2025, 6:29:33 PM
class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        multiset<string> p;
        multiset<string> e;
        multiset<string> r;
        multiset<string> g;

        for(int i=0;i<code.size();i++){
            if(Validate(code[i])){
                if(businessLine[i] == "grocery" || 
                  businessLine[i] == "restaurant" ||
                  businessLine[i] == "pharmacy" ||
                  businessLine[i] == "electronics"){
                    if(isActive[i] == true){
                        if(businessLine[i] == "grocery") g.insert(code[i]);
                        if(businessLine[i] == "restaurant") r.insert(code[i]);
                        if(businessLine[i] == "pharmacy")p.insert(code[i]);
                        if(businessLine[i] == "electronics") e.insert(code[i]);
                    }
                  }
            }
        }
        vector<string> ans(e.begin(),e.end());
         ans.insert(ans.end(),g.begin(),g.end());
         ans.insert(ans.end(),p.begin(),p.end());
         ans.insert(ans.end(),r.begin(),r.end());
        return ans;
    }

    bool Validate(string s){
        if(s == "") return false;
        for(auto &ch : s){
            if(ch =='_') continue;
            if (!((ch >= 'a' && ch <= 'z') ||
              (ch >= 'A' && ch <= 'Z') ||
              (ch >= '0' && ch <= '9'))) {
            return false;
        }
        }
        return true;
    }
};