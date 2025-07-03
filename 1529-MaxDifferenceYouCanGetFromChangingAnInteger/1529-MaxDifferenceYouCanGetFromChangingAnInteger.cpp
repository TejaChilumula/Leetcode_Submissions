// Last updated: 7/2/2025, 11:50:42 PM
class Solution {
public:
    int maxDiff(int num) {
        string s = to_string(num);

        char top = s[0];
        int k =0;
        while(s[k] == '9')k++;
        top = s[k];
        for(int i=k;i<s.size();i++){
            if(s[i] == top) s[i] = '9';
        }
        int a = stoi(s);

        s = to_string(num);
        top = s[0];
        int i=0;
        bool leadingOne = false;
        if(top == '1'){
            for(int i=0;i<s.size();i++){
                if(s[i] > top){
                    top = s[i];
                    leadingOne = true;
                    break;
                }
            }
        }
            if(leadingOne){
                for(int k=i;k<s.size();k++){
                    if(s[k] == top) s[k] = '0';
                }
            }
            else{
                for(int k=i;k<s.size();k++){
                    if(s[k] == top) s[k] = '1';
                }
            }
            
        int b = stoi(s);

        return a - b;
    }
};