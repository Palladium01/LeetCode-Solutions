class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        
        for(auto val:s)
        {
            m[val]++;
        }
        
        priority_queue<pair<int,char>> maxh;
        
        for(auto val:m)
        {
            maxh.push({val.second,val.first});
        }
        
        string res="";
        
        while(maxh.size()>0)
        {
            int c=maxh.top().first;
            while(c--)
            {
                res.push_back(maxh.top().second);
               // maxh.top().first--;
            }
            maxh.pop();
        }
        return res;
    }
};