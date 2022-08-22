class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        
        for(auto val:nums)
        {
            sum+=val;
            if(sum>maxi)
                maxi=sum;
            //maxi=max(sum,maxi);
            if(sum<0)
                sum=0;
        }
    return maxi;
    }
};