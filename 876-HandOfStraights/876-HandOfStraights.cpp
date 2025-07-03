// Last updated: 7/2/2025, 11:51:51 PM
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       /*
        int n = hand.size();

        if(n % groupSize != 0 ) return false; // base case

        map<int, int> mp;

        for(int i : hand)
        {
            mp[i]++;
        }

        for(auto c : mp)
        {
            int card = c.first;
            int count = c.second;

            if(count > 0){ // already used for prev set of cards
                for(int j = 0 ; j<groupSize ;j++)
                {
                    if(mp[card+j] < count) return false;
                    mp[card+j] -=  count;
                }
            }
        }
            return true;
        }


        // Optimised O( MlogM ) Approach

         Queue + HashMap */


        int opened = 0, lastidx = -1;

        map<int, int> mp;

        for(int i : hand)
        {
            mp[i]++;
        }
        queue<int> used;

        for(auto it : mp)
        {
            int i = it.first;

            if( opened > 0 && i > lastidx + 1 || opened > mp[i]) return false;

            used.push(mp[i] - opened);

            lastidx = i, opened = mp[i];

            if(used.size() == groupSize){
                opened -= used.front();
                used.pop();
            }
        }
            return opened == 0;
        }
        
};