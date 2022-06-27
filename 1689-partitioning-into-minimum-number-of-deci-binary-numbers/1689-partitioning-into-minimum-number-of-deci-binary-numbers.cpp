class Solution {
public:
    int minPartitions(string n) {
        int res=0;
        
        for(long long i=0;i<n.size();++i)
        {
            res=max(res, n[i]-'0');
        }
        
        return res;
    }
};