// Last updated: 7/2/2025, 11:52:10 PM
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int startcolor = image[sr][sc];
        dfs(image, sr, sc, color, startcolor);
        return image;
    }

    void dfs(vector<vector<int>>& img, int sr, int sc, int c, int startcolor)
    {
        if(sr < 0 || sr >= img.size() || sc < 0 || sc >= img[0].size()  || img[sr][sc] != startcolor || img[sr][sc] == c) return;

        img[sr][sc] = c;

        dfs(img, sr-1, sc, c, startcolor);
        dfs(img, sr+1, sc, c, startcolor);
        dfs(img, sr, sc+1, c, startcolor);
        dfs(img, sr, sc-1, c, startcolor);

    
    }
};