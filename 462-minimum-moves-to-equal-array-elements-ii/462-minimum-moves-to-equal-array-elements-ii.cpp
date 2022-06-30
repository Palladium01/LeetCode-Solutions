class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid=0;
        int res=0;
        
        mid=nums.size()/2;
        
        for(int i=0;i<nums.size();++i)
        {
            if(i==mid)
                continue;
            res+=abs(nums[i]-nums[mid]);
        }
        
        return res;
    }
};