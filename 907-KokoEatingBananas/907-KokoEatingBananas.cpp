// Last updated: 7/2/2025, 11:51:43 PM
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // if koko can eat all bananas at 10^9 times frequency
        // why wont we check at 10^5 freq per hour ? 
        // if it eats all at this pace why wont we chect at 10^3 pace ?

        int left = 1, right = 1e9;
        int sum =0 ;
        
        if(h == piles.size()) return *std::max_element(piles.begin(), piles.end());


        while(left < right)
        {
            int mid = left + (right - left)/2;
            int sum = 0;
            int c = 0;
            for(auto i : piles)
            {
                sum += (i + mid - 1)/mid; // this is equivalent to ceil(i/mid) because you are adding one more so that it will be rounded to the next balue
            }

            if(sum <= h) right = mid;
            else left = mid + 1;
        }

        return left;
    }
};