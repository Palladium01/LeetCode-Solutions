class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> res;
        
        priority_queue<pair<int,int>> maxh;
        
        for(int i=0;i<points.size();++i)
        {
            int d=points[i][0]*points[i][0]  + points[i][1]*points[i][1];
            
            maxh.push({d,i});
            
            if(maxh.size()>k)
            {
                maxh.pop();
            }
        }
        
        while(maxh.size()>0)
        {
            auto ele=maxh.top();
            maxh.pop();
            res.push_back({points[ele.second][0],points[ele.second][1]});
            
        }
        
        return res;
        
        
        
    }
};