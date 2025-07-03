// Last updated: 7/2/2025, 11:48:50 PM
class Solution {
public:
    vector<int> findCoins(vector<int>& numWays) {
        vector<int> ans;
        vector<int> coins;
        for(int i=0;i<numWays.size();i++){
            int noWays = coinChange(coins, i+1, 0);
            cout<<"no of ways of"<<i+1<<"is "<<noWays<<endl;
            if(noWays == numWays[i]-1) {
                cout<<"coin added<"<<i+1<<endl;
                    coins.push_back(i+1);
            }
            if((numWays[i] == 0 && noWays > 0) || numWays[i] > noWays+1) return {};
        }
        return coins;
    }
    int coinChange(vector<int> &coins, int tar, int i){
        if(coins.size() == 0) return 0;

        vector<int> dp(tar+1,0);

        dp[0] = 1;

        for(int coin : coins){
            for(int i=coin;i<= tar;i++){
                
                dp[i] += dp[i - coin];
            }
        }

        return dp[tar];
        
    }
    int coinChange2(vector<int> &coins, int tar, int i){
        if(coins.size() == 0) return 0;
        if(i >= coins.size() || tar < 0) return 0;
        if(tar == 0 ) return 1;
        int take = 0;
            take = coinChange(coins, tar - coins[i], i);

        int not_take = coinChange(coins, tar, i+1);

        return take + not_take;
    }
};