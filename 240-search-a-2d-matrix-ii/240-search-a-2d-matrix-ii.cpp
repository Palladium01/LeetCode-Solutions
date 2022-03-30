class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int col=matrix[0].size();
        int r=0, c=col-1;    // started from top right
        
        while(r<rows&&c>=0)
        {
            if(target==matrix[r][c])
                return true;
            
            else if(target<matrix[r][c])
                c--;                           //reducing column
            
            else if(target>matrix[r][c])
                r++;                            //reducing row
        }
        return false;
    }
};