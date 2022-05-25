class Solution {
public:
   
  
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        if(source==destination) return true;
        
        vector<vector<int>> adj(n);
        
        for(auto val:edges)
        {
            adj[val[0]].push_back(val[1]);
            adj[val[1]].push_back(val[0]);
        }
        
        vector<int> vis(n,0);
        stack<int> st;
        
        st.push(source);
        vis[source]=1;
        
        while(!st.empty())
        {
            
            int node=st.top();
             vis[node]=1;
            if(node==destination) return true;
            st.pop();
            
            for(auto val:adj[node])
            {
                if(!vis[val])
                {
                    st.push(val);
                }
            }
        }
       
        
         
        return false;
        
    }
};