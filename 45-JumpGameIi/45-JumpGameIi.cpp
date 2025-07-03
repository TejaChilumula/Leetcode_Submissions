// Last updated: 7/2/2025, 11:55:13 PM
class Solution {
public:
    int jump(vector<int>& arr) {
        if(arr.size() == 1) return 0;
        int min_jumps = 0, n = arr.size();
        int i = 0;
        while(i<n-1){
            int jump_size = arr[i], maxi = 0, k =i;
            if(i+arr[i] >= n-1) return min_jumps+1;
            for(int j=1;j<=jump_size;j++){
                int max_jump = i+j;
                if(max_jump < n && max_jump + arr[max_jump] > maxi){
                    maxi = max_jump + arr[max_jump];
                    k = i+j;
                }
               
                
            }
             min_jumps++;
            i = k;
        }
        return min_jumps;
    }
};