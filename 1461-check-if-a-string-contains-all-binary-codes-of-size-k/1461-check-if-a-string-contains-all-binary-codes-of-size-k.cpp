class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())
            return false;
        
        unordered_set<string> binary;
        
        for(int i=0;i<=s.size()-k;++i)
        {
            binary.insert(s.substr(i,k));
        }
        
        return binary.size()==pow(2,k);
    }
};