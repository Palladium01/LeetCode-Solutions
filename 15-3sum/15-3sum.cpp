class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
   
        for(int i=0;i<n-2;++i)
        {
            if(nums[i]>0) break;
            if(i>0&&nums[i]==nums[i-1])
                continue;
            
            int target=0-nums[i];
            int left=i+1, right=n-1;
            
            while(left<right)
            {
                
                if(nums[left]+nums[right]==target)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[left]);
                    temp.push_back(nums[right]);
                    res.push_back(temp);
                    
                    
                     while (left < right && (nums[left] == nums[left + 1]))
                        left++;
                    while (left < right && (nums[right] == nums[right - 1]))
                        right--;

                    left++, right--;
                        
                }
                else if(nums[left]+nums[right]>target)
                    right--;
                
                else if(nums[left]+nums[right]<target)
                    left++;
                
            }
        }
       
        
        return res;
    }
};