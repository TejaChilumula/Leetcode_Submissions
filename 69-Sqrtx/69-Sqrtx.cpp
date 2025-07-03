// Last updated: 7/2/2025, 11:54:26 PM
class Solution {
public:
    int mySqrt(int x) {
        int l = 0, r = x/2+1;

        while(l<=r){
            int mid = l + (r-l)/2;
            long long sqrt = (long long) mid*mid;
            if(sqrt == x) return mid;
            if(sqrt > x) r = mid - 1;
            else l = mid +1;
        }

        return l-1;
    }
};