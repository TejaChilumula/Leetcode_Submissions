// Last updated: 7/2/2025, 11:50:20 PM
class Solution {
public:
    int totalMoney(int n) 
    {

        // 7 14 21 28 ( 7*m-1)
       int no_of_weeks = n/7;

       int ans = no_of_weeks * 28 + (no_of_weeks * ( no_of_weeks-1) / 2)*7;

       int rem_days = n%7;

       int rem_sum = (rem_days*(rem_days+1))/2;
       if(n >= 7) rem_sum =  rem_sum + no_of_weeks*rem_days;

       return ans+rem_sum;
    }
};