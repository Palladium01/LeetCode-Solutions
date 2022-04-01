class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> m;
        
        for(auto val:arr)
        {
            m[val]++;
        }
        int size=arr.size();
        
        priority_queue<pair<int,int>> maxh;
        
        for(auto val:m)
        {
            maxh.push({val.second,val.first});
        }
        
        int remove=0;
        int ans=0;
        while(remove<size/2)
        {
            remove+=maxh.top().first;
            maxh.pop();
            ans++;
        }
        
        return ans;
    }
};