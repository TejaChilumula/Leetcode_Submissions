// Last updated: 7/2/2025, 11:48:52 PM

class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        // Find all the zero indices
        vector<int> zeros;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) zeros.push_back(i);
        }

        // Try each zero index and check both directions
        for(auto start : zeros) {
            // Check left direction
            vector<int> d = nums;  // Copy of nums to simulate the process
            int dir = -1;  // Moving left initially
            int curr = start;
            bool valid = true;
            while(curr >= 0 && curr < n) {
                if(d[curr] == 0) {
                    // Move in the current direction
                    curr += dir;
                } else {
                    // Decrement the value, reverse direction, and move
                    d[curr]--;
                    dir = -dir;  // Reverse direction
                    curr += dir; // Take a step in the new direction
                }
            }

            // If all elements are zero, this is a valid path
            if(all_of(d.begin(), d.end(), [](int x) { return x == 0; })) {
                ans++;
            }

            // Check right direction
            d = nums;  // Copy nums again for the second direction check
            dir = 1;  // Moving right initially
            curr = start;
            while(curr >= 0 && curr < n) {
                if(d[curr] == 0) {
                    // Move in the current direction
                    curr += dir;
                } else {
                    // Decrement the value, reverse direction, and move
                    d[curr]--;
                    dir = -dir;  // Reverse direction
                    curr += dir; // Take a step in the new direction
                }
            }

            // If all elements are zero, this is a valid path
            if(all_of(d.begin(), d.end(), [](int x) { return x == 0; })) {
                ans++;
            }
        }

        return ans;
    }
};
