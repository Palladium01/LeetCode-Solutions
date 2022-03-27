class Solution {
public:
    
 
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> v;
     
        int sold=0;
        for(int i=0;i<mat.size();++i)
        {
            sold=0;
            for(int j=0;j<mat[0].size();++j)
            {
                sold+=mat[i][j];
            }
            v.push_back({sold,i});
        }
        
        sort(v.begin(),v.end());
        
        vector<int> res;
        
        for(int i=0;i<k;++i)
        {
            res.push_back(v[i].second);
        }
        
        return res;
    }
};