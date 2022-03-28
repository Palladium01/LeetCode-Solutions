class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> m;
        vector<int> res;
        int n=nums.size();
        int c=0;
        for(auto val:nums)
        {
            m[val]++;
        }
        
        for(auto val:m)
        {
            if(c>2)
                break;
            if(val.second>n/3)
            {
                res.push_back(val.first);
                c++;
            }
                
        }
        return res;
    }
};