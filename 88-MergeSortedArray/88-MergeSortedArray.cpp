// Last updated: 7/2/2025, 11:54:15 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int s = m + n - 1;  // Correct total size
        m -= 1;
        n -= 1;

        // Merge from the end
        while (m >= 0 && n >= 0) {
            if (nums1[m] > nums2[n])
                nums1[s--] = nums1[m--];
            else
                nums1[s--] = nums2[n--];
        }

        // Copy any remaining nums2 elements
        while (n >= 0) nums1[s--] = nums2[n--];
    }
};
