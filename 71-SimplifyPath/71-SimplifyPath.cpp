// Last updated: 7/2/2025, 11:54:24 PM
class Solution {
public:
    string simplifyPath(string path) {
        /*

        if you find / or // ignore,
        if you find .. , just pop out the top dir from stack
        if you find . , ignore
        if you find space ignore
        from / to next / form a string and check that
        ... or .... these are the valid dir names, so same as string
        */
        int n = path.size();
        string ans;
        stack<string> s;
        int i = 0;
        while(i < n)
        {
          while(i<n && path[i] == '/') 
            i++;

          string temp = "";
          while(i < n && path[i] != '/')
            temp += path[i++];

          if(temp == "." || temp == "") 
          continue;

          else if(temp == "..") {if(!s.empty())s.pop();}
          else s.push(temp);

        }

      while(!s.empty())
      {
        ans =  "/" + s.top() + ans;
        s.pop();
      }

      return ans == "" ? "/" : ans;

    }
};