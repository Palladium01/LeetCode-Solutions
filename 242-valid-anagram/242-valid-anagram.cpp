class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        
        for(int i=0;i<s.length();++i)
        {
            m1[s[i]]++;
        }
        
        for(int i=0;i<t.length();++i)
        {
            m2[t[i]]++;
        }
        
        for(auto val:m1)
        {
            if(m2.find(val.first)==m2.end()||m2.find(val.first)->second!=val.second)
                return false;
        }
        return true;
    }
};