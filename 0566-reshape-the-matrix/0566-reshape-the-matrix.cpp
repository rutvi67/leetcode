class Solution {
public:
    vector<vector<int>> matrixReshape(
        vector<vector<int>>& mat,int r,int c){
        int o = mat.size() * mat[0].size();
        if(o != r * c)
        {
            return mat;
        }
        vector<vector<int>>  ans(r, vector<int>(c,0));
        int i = 0;
        for(auto &row : mat)
        {
            for(int num : row)
            {
                ans[i / c][i % c] = num;
                i++;
            }
        }
        return ans;
    }
};
