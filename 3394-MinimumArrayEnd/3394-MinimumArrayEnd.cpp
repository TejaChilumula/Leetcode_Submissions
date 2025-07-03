// Last updated: 7/2/2025, 11:48:58 PM
class Solution {
public:
    long long minEnd(int n, int x) {
   //n = n - 1;
   long long nn = n-1;
    long long result = x;
    int bitPos = 0;

    for (int i = 0; i < 64; ++i) {
        if ((x & (1LL << i)) == 0) {
            if((nn>>bitPos) & 1LL)
                result |= (1LL << i);
            
            bitPos++;
        }
    }

    return result;

/*
// Method - 2 , using the vectors to get the bitwise elemnts of x and n-1 and then perform the ops on it and
// then construct the ans no from the x, which is 64 bit

    vector<int> xbit(64,0);
    vector<int> nbit(64,0);
    n = n-1;

    for(int i=0;i<32;i++){
        xbit[i] = (x>>i)&1;  // convert to bitwise bits
        nbit[i] = (n>>i)&1; //  convert to bitwise bits
    }

    long long ans = 0;
    int i = 0,j = 0;
    while(i < 64){
        if(xbit[i] == 1){
            i++;
            continue;
        }
        xbit[i++] = nbit[j++];
    }

    // construct the answer
    for(int i=0;i<64;i++){
        ans += xbit[i] * (1LL<<i);
    }
    return ans;

*/
}

};