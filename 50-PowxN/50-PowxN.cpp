// Last updated: 7/2/2025, 11:55:07 PM
class Solution {
public:
    double myPow(double x, int n) {
      if(n < 0)
      {
        x = 1/x;
      }
      long num = labs(n);
      double ans = 1;

      while(num)
      {
        if(num%2 != 0)//odd ( 1's bit )
        {
          ans *= x;
        }

        x *= x;

        num/=2;
      }

    
    return ans;
        
    }
};