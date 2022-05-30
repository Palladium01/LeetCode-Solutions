class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;
    void dfs(vector<vector<int>>& graph, int curr)
    {
        temp.push_back(curr);
        if(curr==graph.size()-1)
        {
            res.push_back(temp);
        }
        
        for(auto node:graph[curr])
        {
            dfs(graph,node);
        }
        
        temp.pop_back();
    }
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        
        
        dfs(graph,0);
        return res;
    }
};