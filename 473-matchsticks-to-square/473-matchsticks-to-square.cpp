class Solution {
public:
    bool makesquare(vector<int>& nums) {
    vector<int> vis(nums.size(),0);
        sort(nums.begin(),nums.end(),greater<int>());
        int k=4;
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%k) return false;
        int target=sum/k;
        
        return backtrack(nums,vis,target,0,0,k);
    }
    
    
    bool backtrack(vector<int> & nums, vector<int> &vis, int target, int cur_sum, int ind,int k)
    {
        if(k==1)
            return true;
        if(ind>=nums.size())
            return false;
        
        if(cur_sum==target)
            return backtrack(nums,vis,target,0,0,k-1);
        
        for(int j=ind;j<nums.size();++j)
        {
            if(vis[j]||cur_sum+nums[j]>target) continue;
            vis[j]=1;
            if(backtrack(nums,vis,target,cur_sum+nums[j],j+1,k)) return true;
            vis[j]=0;
        }
        
        return false;
    }
};