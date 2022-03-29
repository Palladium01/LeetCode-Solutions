class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        
        for(auto &val:nums)
        {
            s.insert(val);
            if(s.size()>3)
                s.erase(s.begin());
               
        }
        int n=s.size();
        if(n==3)
            return *s.begin();
        return *s.rbegin();
    }
};