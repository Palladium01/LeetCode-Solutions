class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        res.push_back(nums[0]);
        int n=nums.size();
        for(int i=1; i<n; ++i){
            auto it= lower_bound(res.begin(),res.end(), nums[i]);
            
            if(it==res.end())
                res.push_back(nums[i]);
            else{
                *it=nums[i];
            }
        }
        return res.size();
    }
};