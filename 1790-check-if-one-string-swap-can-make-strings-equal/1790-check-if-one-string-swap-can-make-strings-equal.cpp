class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return true;
        int flag=0;
        string x=s1,y=s2;
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        if(x==y)
        {
            for(int i=0;i<s1.length();++i)
            {
                
                if(s1[i]!=s2[i])
                    flag ++;
                if(flag>2)
                    return false;
            }
            return true;
        }
        return false;
    }
};