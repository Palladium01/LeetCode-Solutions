class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> ele;
        int row=mat.size(),col=mat[0].size();
        if(r*c!=row*col)
            return mat;
       
        vector<vector<int>> res(r,vector<int>(c));
        int x=0,y=0;
        for(int i=0;i<row;++i)
            for(int j=0;j<col;++j)
            {
                res[x][y]=mat[i][j];
                y++;
                if(y==c)
                {
                    y=0;x++;
                }
            }
       
        
        return res;
        
    }
};