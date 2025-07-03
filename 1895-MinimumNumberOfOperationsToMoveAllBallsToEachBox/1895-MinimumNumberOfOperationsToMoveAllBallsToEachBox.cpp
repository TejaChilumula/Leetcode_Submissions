// Last updated: 7/2/2025, 11:50:13 PM
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
       
        for(int i=0;i<boxes.length();i++)
        {
             int a=0;
            for(int j=0;j<boxes.length();j++)
            {
                if(i!=j)
                {  if(boxes[j] == '1')
                    a=a+abs(j-i);
                    
                }
              
            }
            ans.push_back(a);
            
        }
        return ans;
    }
};