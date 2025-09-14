// Last updated: 9/13/2025, 8:02:33 PM
class Solution {
public:
    bool checkDivisibility(int n) {
        return n % (digitSum(n) + digitProduct(n)) == 0? true : false;
    }
    int digitSum(int n){
        int ans = 0;

        while(n > 0){
            ans+= n%10;
            n /= 10;
        }
        return ans;
    }

    int digitProduct(int n){
        int ans = 1;

        while(n>0){
            ans *= n%10;
            n /= 10;
        }
        return ans;
    }
};