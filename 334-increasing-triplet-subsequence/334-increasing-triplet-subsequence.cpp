class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int max1=INT_MAX, max2=INT_MAX;
        
        for(auto val:nums)
        {
            if(val<=max1)
                max1=val;
            
            else if(val<=max2)
                max2=val;
            
            else
                return true;
        }
        return false;
        
    }
};