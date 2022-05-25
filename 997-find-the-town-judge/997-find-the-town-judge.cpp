class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustees(n+1);
        vector<int> trusted(n+1);
        
        for(auto val:trust)
        {
            trustees[val[1]]++;
            trusted[val[0]]++;
        }
        
        for(int i=1;i<=n;++i)
        {
            if(trustees[i]==n-1&&trusted[i]==0)
                return i;
        }
        return -1;
    }
};