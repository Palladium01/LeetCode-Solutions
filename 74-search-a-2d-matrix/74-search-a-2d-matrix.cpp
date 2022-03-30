class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),col=matrix[0].size();
        int start=0,end=rows*col-1;
        while(start<=end)
        {
            int mid=(start+end)/2;
            int midval=matrix[mid/col][mid%col];
            
            if(target==midval)
                return true;
            
            else if(target>midval)
                start=mid+1;
            
            else if(target<midval)
                end=mid-1;
            
        }
      
        
        return false;
    }
};