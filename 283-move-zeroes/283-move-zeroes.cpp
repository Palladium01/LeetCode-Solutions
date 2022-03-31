class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int czero=0;
        int cnzero=0;
        
        while(cnzero<nums.size())
        {
            if(cnzero<czero)
            {
                cnzero++;
                continue;
            }
            
            if(nums[czero]==0&&nums[cnzero]!=0)
            {
                swap(nums[czero],nums[cnzero]);
                czero++;
                cnzero++;
            }
            
            else if(nums[czero]==0&&nums[cnzero]==0)
            {
                cnzero++; 
            }
            
            else if(nums[czero]!=0&&nums[cnzero]!=0)
            {
                czero++; 
            }
            
            else if(nums[czero]!=0&&nums[cnzero]==0)
            {
                cnzero++; 
                czero++;
            }
            
        }
    }
};