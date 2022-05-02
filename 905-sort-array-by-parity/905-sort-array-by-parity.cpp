class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> res(nums.size());
        int i=0,j=nums.size()-1;
        for(auto val:nums)
        {
            if(val%2==0)
            {
                res[i]=val;
               i++;
            }
             if(val%2!=0)
            {
                res[j]=val;
                j--;
             }
        }
        
        
        
        return res;
    }
};