// Last updated: 9/13/2025, 8:02:31 PM
class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int ans=0, counter = 0, start = 0, maxi = 0;
        int n = weight.size();
        if(weight.size() < 2) return 0;
        
        for(int end = 0;end<n;end++){
            maxi = max(weight[end], maxi);
            counter++;

            if(counter > 1){
                if(weight[end] < maxi){
                    ans++;
                    start = end+1;
                    counter = 0;
                    maxi = 0;
                }
            }
        }

        return ans;
    }
};