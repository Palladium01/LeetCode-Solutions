class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid=0;
        int res=0;
        //if(nums.size()%2==0)
            mid=nums.size()/2;
        
       // else
          //  mid=nums.size()/2+1;
        
        for(int i=0;i<nums.size();++i)
        {
            res+=abs(nums[i]-nums[mid]);
        }
        
        return res;
    }
};