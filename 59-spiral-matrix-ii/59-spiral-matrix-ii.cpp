class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int i=0;
        int k=1;
        
        vector<vector<int>> res(n,vector<int>(n));
        
        while(k<=n*n)
        {
            int j=i;
            
            while(j<n-i)               //left to right
                res[i][j++]=k++;
            
            j=i+1;
            
            while(j<n-i)               //right to bottom
                res[j++][n-i-1]=k++;
            
            j=n-i-2;
            
            while(j>i)                 //bottom to left
                res[n-i-1][j--]=k++;
            
            j=n-i-1;
            
            while(j>i)                 //left to top
                res[j--][i]=k++;
            
            i++;
        }
        
        return res;
    }
};