// Last updated: 8/18/2025, 9:17:21 AM
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // we need the kth largest
        // we can sort and get it out

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i : nums){
            pq.push(i);

            if(pq.size() > k)
                pq.pop();
        }

        return pq.top();

    }
};