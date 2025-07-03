// Last updated: 7/2/2025, 11:54:27 PM
class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size(), m = b.size();
        int carry = 0, i =n-1, j =m-1;
        string str = "";
        while(i >= 0 || j >= 0 || carry){
            int sum = carry;

            if(i >= 0 ) sum += a[i--] - '0';
            if(j >= 0 ) sum += b[j--] - '0';

            str += (sum%2) + '0';
            carry = sum / 2;
        }

        reverse(str.begin(), str.end());
        return str;
    }
};