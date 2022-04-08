class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
       /* priority_queue<int, vector<int>, greater<int>> minh;
        
        for(int i=0;i<matrix.size();++i)
        {
            for(int j=0;j<matrix[0].size();++j)
            {
                if(i)
                    matrix[i][j]=matrix[i][j]^matrix[i-1][j];
                if(j)
                    matrix[i][j]=matrix[i][j]^matrix[i][j-1];
                if(i&&j)
                    matrix[i][j]=matrix[i][j]^matrix[i-1][j-1];
                
                minh.push(matrix[i][j]);
                
                if(minh.size()>k)
                    minh.pop();
            }
        }
        
        return minh.top();*/
        
        int i, j, n = matrix.size(), m = matrix[0].size();
        priority_queue< int, vector<int>, greater<int> >pq;
        
		// Step 1
        for(i = 0; i < n; i++)
        {
            for(j = 1; j < m; j++)
            {
                matrix[i][j] = matrix[i][j-1] ^ matrix[i][j];
            }
        }
        
		// Step 2
        for(i = 0; i < m; i++)
        {
            for(j = 1; j < n; j++)
            {
                matrix[j][i] = matrix[j-1][i] ^ matrix[j][i];
            }
        }
        
		// Step 3
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                
                    pq.push(matrix[i][j]);
                if(pq.size()>k)
                    pq.pop();
            }
        }
        
        return pq.top();
    }
};