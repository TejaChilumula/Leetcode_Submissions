// Last updated: 7/2/2025, 11:52:59 PM
class Vector2D {
public:
vector<int> flatten;
int idx = 0, len = 0;
    Vector2D(vector<vector<int>>& vec) {
        // I will store it in a vector and I will hold
        for(auto i : vec)
        {
            for(auto j : i)
                {flatten.push_back(j);
                len++;}
        }
    }
    
    int next() {
        return flatten[idx++];
    }
    
    bool hasNext() {
        cout<<idx<<len;
        return idx != len;
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D* obj = new Vector2D(vec);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */