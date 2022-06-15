class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string,int> mp;
        int res=0;
        
        sort(words.begin(),words.end(), [](const string &a, const string &b){return a.size()<b.size();});
        
        for(auto val:words)
        {
            mp[val]=1;
            
            for(int i=0;i<val.size();++i)
            {
                string prev=val.substr(0,i)+val.substr(i+1);
                
                if(mp.find(prev)!=mp.end())
                {
                    mp[val]=mp[prev]+1;
                    
                }
                res=max(res,mp[val]);
            }
        }
        
        return res;
    }
};