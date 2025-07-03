// Last updated: 7/2/2025, 11:48:47 PM
class Solution {
public:
    string generateTag(string caption) {
        string ans = "";
        ans += "#";
        bool Upper = false;
        int j=0;
        while(j < caption.size()){
            if(caption[j] == ' ') j++;
            else{
                ans += tolower(caption[j]);
                break;
            }
        }
        for(int i=j+1;i<caption.size();i++){
            if(ans.size() == 100) return ans;
            if(caption[i] == ' ') {
                Upper = true;
                continue;}
            if(Upper){
                Upper = false;
                ans += toupper(caption[i]);
            }
            else{
                ans+=tolower(caption[i]);
            }
            
        }
        return ans;
    }
};