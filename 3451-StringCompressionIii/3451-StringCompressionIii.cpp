// Last updated: 7/2/2025, 11:48:56 PM
class Solution {
public:
    string compressedString(string word) {
        /*
        string ans = "";
        int c = 1;
        char cc;



        cc = word[0];

        for(int i=1;i<word.length();i++)
        {

            if(c == 9 || word[i] != word[i-1])
            {
                ans.push_back(c + '0');
                ans.push_back(word[i-1]);

                c = 1;
                cc = word[i];
            }
            else c++;

        }

        ans.push_back(c + '0');
        ans.push_back(word[word.size()-1]);

        return ans;
    }

    */
    // 2 pointers , kind of two pointers


    int i = 0, j =0;
    string ans = "";

    while(j < word.size())
    {
        int c = 0;
        while(j < word.size()  && word[i] == word[j] && c < 9)
        {
            c++;
            j++;
        }
        ans += to_string(c) + word[i];
        i = j;


    }
    return ans;
    }
};