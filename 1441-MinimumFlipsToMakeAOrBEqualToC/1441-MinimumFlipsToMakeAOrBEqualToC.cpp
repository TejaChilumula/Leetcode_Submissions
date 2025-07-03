// Last updated: 7/2/2025, 11:50:51 PM
class Solution {
public:
    int minFlips(int a, int b, int c) {
        int cnt = 0;

        for(int i=0;i<32;i++){
            bool res = (c>>i)&1;
            cout<<res<<endl;
            if(res == 0){
                if(((a>>i)&1) == 1) cnt++;
                if(((b>>i)&1) == 1) cnt++;
            }
            else{
                if(((a>>i)&1) == 0 && ((b>>i)&1) == 0)cnt++;
            }
        }
        return cnt;
    }
};