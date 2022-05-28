class Solution {
public:
   /* vector<int>vis,col;
    bool dfs(int v, int c, vector<vector<int>>& graph){
        vis[v]=1;
        col[v]=c;
        for(int child:graph[v]){
            if(vis[child]==0){
                // here c^1 is for flipping 1 by 0 or 0 by 1, that is flip the current color
                if(dfs(child,c^1,graph)==false) 
                    return false;
            }
            else{
                if(col[v]==col[child])
                    return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vis.resize(n);
        col.resize(n);

        for(int i=0;i<n;++i){
            if(vis[i]==0 && dfs(i,0,graph)==false){ 
                return false;
            }
        }
        
        return true;
    }*/
    
    bool bfs(int src,vector<vector<int>> adj, int color[])
    {
        queue<int> q;
        q.push(src);
        color[src]=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            
            for(auto it:adj[node])
            {
                if(color[it]==-1)
                {
                    color[it]=1-color[node];
                    q.push(it);
                }
                
                else if(color[it]==color[node])
                {
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        vector<vector<int>> adj(graph.size());
        int color[graph.size()];
        memset(color,-1,sizeof color);
        for(int i=0;i<graph.size();++i)
            adj[i]=graph[i];
        
       for(int i=0;i<graph.size();++i)
       {
           if(color[i]==-1)
               if(!bfs(i,adj,color))
                   return false;
       }
        return true;
    }
};