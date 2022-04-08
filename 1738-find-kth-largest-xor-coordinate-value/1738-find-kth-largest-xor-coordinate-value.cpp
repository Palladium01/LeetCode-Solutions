class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, greater<int>> minh;
        
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
        
        return minh.top();
    }
};