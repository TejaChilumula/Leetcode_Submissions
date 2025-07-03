// Last updated: 7/2/2025, 11:53:35 PM
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;


        for(string& token : tokens)
        {
          if (token == "+" || token == "-" || token == "*" || token == "/"){
            int one = s.top();
            s.pop();
            int two = s.top();
            s.pop();

            if(token == "+")
               s.push(two + one);
            else if(token == "-")
              s.push(two - one);
            else if(token == "/")
              s.push(two / one);
            else if(token == "*")
              s.push(two * one);
            
            }
          
          else{
            s.push(stoi(token));
              }
        }

        
        
        return s.top();
    }
};