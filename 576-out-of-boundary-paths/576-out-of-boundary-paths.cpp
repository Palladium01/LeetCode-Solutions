class Solution {
public:
    int mod = pow(10,9) + 7;
    int helperFunction(int row, int col, int maxMoves, int x, int y,  int moves, vector<vector<vector<int>>> & dp){
        if(x < 0 || y < 0 || x >= row || y >= col){
            return 1;
        }
        if(moves == maxMoves){
            return 0;
        }
        if(dp[moves][x][y] != -1){
            return dp[moves][x][y] % mod;
        }
        int tempVal = 0;
        tempVal = (tempVal + helperFunction(row, col, maxMoves, x, y - 1, moves + 1, dp))%mod ;
        tempVal = (tempVal + helperFunction(row, col, maxMoves, x - 1, y, moves + 1, dp))%mod ;
        tempVal = (tempVal + helperFunction(row, col, maxMoves, x + 1, y, moves + 1, dp))%mod ;
        tempVal = (tempVal + helperFunction(row, col, maxMoves, x, y + 1, moves + 1, dp))%mod ;
        dp[moves][x][y] = tempVal%mod;
        return dp[moves][x][y];
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        vector<vector<vector<int>>> dp (maxMove,vector<vector<int>> (m,vector<int>(n,-1)));
        
        int res=helperFunction(m,n,maxMove,startRow,startColumn,0,dp);
        return res;
        
        
    }
};