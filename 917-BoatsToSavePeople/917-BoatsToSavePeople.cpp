// Last updated: 7/2/2025, 11:51:42 PM
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        /* using sort

        sort(people.begin(), people.end());
        int ans = 0, j=0;


        for(int i=people.size()-1;i>=0;i--)
        {
            if(people[i] == limit)
            {
                ans+=1;
                continue;
            }
            if(j <= i)
            {
                if(people[i] + people[j] <= limit && i != j)
                {
                    ans+=1;
                    j++;
                }
                else ans+=1;
            }

        }
       // if(j==0) return ans+1;
        return ans;
    }*/

    sort(people.begin(), people.end());

    int l = 0, r = people.size()-1, boat = 0;

    while(l <= r)
    {
        if(people[l] + people[r] > limit)
        {
            r--;
            boat++;
            continue;
        }

        l++;
        r--;
        boat++;
    }

    return boat;
    }
};