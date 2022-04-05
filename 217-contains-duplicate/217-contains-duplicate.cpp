class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(auto val:nums)
        {
            if(s.find(val)!=s.end())
                return true;
            s.insert(val);
        }
        return false;
    }
};