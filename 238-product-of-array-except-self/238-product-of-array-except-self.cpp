class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       long long mul=1;
        int c_zero=0;
        for(auto &val:nums)
        {
            if(val==0)
                c_zero++;
            else
                mul*=val;
        }
        
        for(int i=0;i<nums.size();++i)
        {
            if(c_zero==0)
                nums[i]=mul/nums[i];
            
            else if(c_zero==1)
            {
                if(nums[i]==0)
                    nums[i]=mul;
                else
                    nums[i]=0;
            }
            
            else
                nums[i]=0;
        }
        
        return nums;
    }
};