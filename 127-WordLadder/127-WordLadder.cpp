// Last updated: 7/2/2025, 11:53:52 PM
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
         set<string>sett(wordList.begin(), wordList.end());
         queue<pair<string, int>> q;
         q.push({beginWord, 1});

        while(!q.empty()){
            auto [top_word, steps] = q.front();
            q.pop();

            if(top_word == endWord) return steps;

            for(int i=0;i<top_word.size();i++){
                char charc = top_word[i];
                for(char c = 'a'; c <= 'z'; c++){
                    top_word[i] = c;

                    if(sett.find(top_word) != sett.end()) // we remove it from the sett, means we have encounter this word
                    {sett.erase(top_word);
                    q.push({top_word, steps+1});} 
                }
                top_word[i] = charc;
            }
        }

        return 0;
    }
};