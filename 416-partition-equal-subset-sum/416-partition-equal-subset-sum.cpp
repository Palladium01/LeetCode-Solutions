class Solution {
public:
    bool fun(vector<int> &nums,int ind, int target, vector<vector<int>> &dp){
        if(dp[ind][target]!=-1)
            return dp[ind][target];
        if(target==0) return true;
        if(ind==0) return (nums[0]==target);
        
        bool notpick = fun(nums, ind-1, target,dp);
        bool pick = false;
        if(target- nums[ind]>=0)
            pick=fun(nums, ind-1, target-nums[ind],dp);
        
        return dp[ind][target]=pick | notpick;
    }
    
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0) return false;
        int target=sum/2;
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return fun(nums,n-1,target,dp);
       
    }
    
    
};