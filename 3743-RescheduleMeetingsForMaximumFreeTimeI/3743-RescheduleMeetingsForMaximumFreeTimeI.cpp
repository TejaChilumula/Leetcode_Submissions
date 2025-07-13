// Last updated: 7/12/2025, 6:29:35 PM
class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        
        vector<int> spaces;
        int maxi = INT_MIN;
        int n = startTime.size();
        spaces.push_back(startTime[0] - 0);
        
        for(int i=1;i<n;i++){
            int space =startTime[i] - endTime[i-1];
            //if(spaces.size() == 0) spaces.push_back(space);
            spaces.push_back(space); 
        }
        spaces.push_back(eventTime - endTime[n-1]);

        int space_sum = 0, start = 0;
        for(int i=0;i<spaces.size();i++){
            space_sum += spaces[i];
            if(i - start + 1 > k+1)
                space_sum -= spaces[start++];

                maxi = max(maxi, space_sum);
        }

        return maxi;
        }
};