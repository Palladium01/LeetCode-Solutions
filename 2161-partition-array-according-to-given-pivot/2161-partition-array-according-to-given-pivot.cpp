class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> more;
        int less=0, same=0;
        
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]<pivot)
                nums[less++]=nums[i];
            else if(nums[i]==pivot)
                same++;
            else
                more.push_back(nums[i]);
        }
        
        int m=less+same;
        
        while(same--)
            nums[less++]=pivot;
        
        for(int i=0;i<nums.size()-m;++i)
        {
            nums[less++]=(more[i]);
        }
        
        return nums;
    }
};