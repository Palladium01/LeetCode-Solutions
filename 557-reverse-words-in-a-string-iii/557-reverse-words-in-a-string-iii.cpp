class Solution {
public:
    string reverseWords(string s) {
        vector<char> v;
        string res="";
        for(int i=0;i<s.length();++i)
        {
            if(s[i]==' ')
            {
                reverse(v.begin(),v.end());
                for(auto val:v)
                {
                    res+=val;
                }
              
                res+=' ';
                v.clear();
                continue;
            }
            
            v.push_back(s[i]);
        }
        reverse(v.begin(),v.end());
        for(auto val:v)
        {
            res+=val;
        }
        
        return res;
    }
};