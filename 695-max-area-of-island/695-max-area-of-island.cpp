class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans{0};
        for(int i=0;i<grid.size();i++)
            for(int j=0;j<grid[0].size();j++)
                if(grid[i][j]==1)
                    ans=max(ans,dfs(grid,i,j,grid.size(),grid[0].size()));
        return ans;
    }
    
    int dfs(vector<vector<int>>&grid,int i,int j,int m,int n){
        if(i<0 || i>=m || j<0 || j>=n || grid[i][j]==0) return 0;
        grid[i][j]=0;
        return 1+dfs(grid,i-1,j,m,n)+dfs(grid, i+1,j,m,n)
            +dfs(grid, i,j-1,m,n)+dfs(grid,i,j+1,m,n);
    }
    
    /*
    int dfs(vector<vector<int>>& grid, int i, int j, int rows, int col,vector<vector<int>> &visited)
    {
        if(i<0||j<0||i>=rows||j>=col||grid[i][j]!=1||visited[i][j]==true)
            return 0;
        if(grid[i][j]==1)
        {
            //ans+=grid[i][j];
            visited[i][j]=true;
        }
        return 1+dfs(grid,i-1,j,rows,col,visited)
            +dfs(grid,i+1,j,rows,col,visited)
            +dfs(grid,i,j-1,rows,col,visited)
            +dfs(grid,i,j+1,rows,col,visited);
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows=grid.size();
        int col=grid[0].size();
        vector<vector<int>> visited(rows,vector<int>(col));
         int res=0;  
        for(int i=0;i<rows;++i)
            for(int j=0;j<col;++j)
            {
                if(visited[i][j]==true)
                    continue;
                
                if(grid[i][j]==1)
                {
                 
                res=max(res,dfs(grid,i,j,rows,col,visited));
                }
            }
        return res;
    }*/
};