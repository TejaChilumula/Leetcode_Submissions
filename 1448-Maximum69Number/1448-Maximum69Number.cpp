// Last updated: 7/2/2025, 11:50:49 PM
class Solution {
public:
    int maximum69Number (int num) {
        string num_s = to_string(num);
        int i=0;
        while(i < num_s.size()){
            if(num_s[i] == '6') break;
            i++;
        }
        if(i<num_s.size()) num_s[i] = '9';
        return stoi(num_s);
    }
};