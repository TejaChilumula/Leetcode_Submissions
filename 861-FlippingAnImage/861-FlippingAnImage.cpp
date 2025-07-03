// Last updated: 7/2/2025, 11:51:55 PM
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& img : image)
        {
            reverse(img.begin(), img.end());

            for(int& pixel : img)
            {
                pixel = 1 - pixel;
            }
        }
        return image;
    }
};