class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       /* unordered_set<char> v;
        int l=0;
        for(int i=0;i<s.length();++i)
        {
            //v.insert(s[i]);
            for(int j=i;j<s.length();++j)
            {
                if(v.find(s[j])!=v.end())
                    break;
                v.insert(s[j]);
            }
            if(l<v.size())
                l=v.size();
            v.clear();
        }
        return l;*/
        
        unordered_map<char,int> m;
        int l=0;
        int i=0;
        for(int j=0;j<s.length();++j)
        {
            if(m.find(s[j])!=m.end())
            {
                i=max(i,m[s[j]]+1);
              
            }
            
                m[s[j]]=j;
            
            l=max(l,j-i+1);
            
        }
        return l;
    }
};