// Last updated: 7/2/2025, 11:52:54 PM
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 0, right = n, mid = 0;

        while(left < right)
        {
            mid = left + (right - left)/2;
            if(isBadVersion(mid))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }

        return left;
    }
};