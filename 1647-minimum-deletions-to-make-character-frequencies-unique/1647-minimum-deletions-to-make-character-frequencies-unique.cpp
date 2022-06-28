class Solution {
public:
    int minDeletions(string s) {
        vector<int> mp(26,0);
        
        for(int i=0;i<s.size();++i)
        {
            mp[s[i]-'a']++;
        }
        
        int res=0;
        sort(mp.begin(),mp.end());
        
        for(int i=24;i>=0;--i)
        {
            if(mp[i]==0)
                continue;
            
            if(mp[i]>=mp[i+1])
            {
                int prev=mp[i];
                mp[i]=max(0,mp[i+1]-1);
                res+=prev-mp[i];
            }
        }
        
        return res;
        
        
    }
};