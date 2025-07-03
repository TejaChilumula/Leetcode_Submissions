// Last updated: 7/2/2025, 11:49:52 PM
class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        bitset<101> a;
        bitset<101> b;
        bitset<101> c;

        for(int i=0;i<nums1.size();i++){
            a[nums1[i]] = 1;
        }
        for(int i=0;i<nums2.size();i++){
            b[nums2[i]] = 1;
        }
        for(int i=0;i<nums3.size();i++){
            c[nums3[i]] = 1;
        }


        vector<int> ans;

        for(int i=0;i<=100;i++){
            int cnt = 0;
            if(a[i]) cnt++;
            if(b[i]) cnt++;
            if(c[i]) cnt++;
            if(cnt >= 2) ans.push_back(i);
        }
        return ans;
    }
};