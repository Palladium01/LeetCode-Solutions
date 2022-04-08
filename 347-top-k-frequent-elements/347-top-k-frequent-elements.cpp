class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minh;
        unordered_map<int,int> mp;
        
        for(auto val:nums)
            mp[val]++;
        
        for(auto val:mp)
        {
            minh.push({val.second,val.first});
            
            if(minh.size()>k)
                minh.pop();
        }
        
        vector<int> res;
        
        while(k--)
        {
            res.push_back (minh.top().second);
            minh.pop();
        }
        return res;
    }
};