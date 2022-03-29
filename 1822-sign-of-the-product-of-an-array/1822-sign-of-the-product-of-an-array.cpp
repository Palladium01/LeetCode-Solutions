class Solution {
public:
    int arraySign(vector<int>& nums) {
        int c=0;
        
        for(auto &val:nums)
        {
            if(val==0)
                return 0;
            if(val<0)
                c++;
        }
        
        if(c%2==0)
            return 1;
        return -1;
    }
};