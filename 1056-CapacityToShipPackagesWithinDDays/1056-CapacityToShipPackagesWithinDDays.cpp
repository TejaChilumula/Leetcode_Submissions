// Last updated: 7/2/2025, 11:51:25 PM
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int l = 0, h = 10e7, ans = INT_MAX;

        //for(auto i : weights) h += i;

        while(l <= h)
        {
            int mid = l + (h-l)/2;

            if(help(mid,weights) <=  days)
            {
                ans = min(ans,mid);
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        return ans;
    }
    int help(int mid, vector<int> weights)
    {
        int sum = 0,d=0;

        for(int i=0;i<weights.size();i++)
        {
            sum += weights[i];

            if(weights[i] > mid) return INT_MAX;
            if(sum >= mid)
            {
                d++;
                if(sum > mid)
                sum = weights[i];
                else sum=0;

            }

        }

        return sum > 0 ? d + 1 : d;
    }
};