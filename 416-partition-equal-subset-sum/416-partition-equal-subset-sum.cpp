class Solution {
public:
//     bool fun(vector<int> &nums,int ind, int target, vector<vector<int>> &dp){
//         if(dp[ind][target]!=-1)
//             return dp[ind][target];
//         if(target==0) return true;
//         if(ind==0) return (nums[0]==target);
        
//         bool notpick = fun(nums, ind-1, target,dp);
//         bool pick = false;
//         if(target- nums[ind]>=0)
//             pick=fun(nums, ind-1, target-nums[ind],dp);
        
//         return dp[ind][target]=pick | notpick;
//     }
    
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return false;
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0) return false;
        int target=sum/2;
        vector<vector<bool>> dp(n,vector<bool>(target+1,false));
        //return fun(nums,n-1,target,dp);
       
        for(int i=0;i<n;++i){
            dp[i][0]=true;
        }
        if(nums[0]<=target)
            dp[0][nums[0]]=true;
        for(int i=1; i<n; ++i){
            for(int k=1; k<=target; ++k){
                bool notpick = dp[i-1][k];
                bool pick = false;
                if(k- nums[i]>=0)
                    pick=dp[i-1][k-nums[i]];

                dp[i][k]=pick | notpick;
            }
        }
        return dp[n-1][target];
    }
    
    
};