class Solution {
public:
    int numSteps(string s) {
        int res=0;
        while(!(s.length()==1 && s[0]=='1'))
        {
            int len=s.length();
            if(s[len-1]=='1'){
                //num is odd
                addOne(s);
            }
            else{
                //num is even
                s.pop_back();
            }
            res++;
        }
        return res;
    }
    void addOne(string& s){
   
        
        int len=s.length();
        int k=len-1;
        while(k>=0 && s[k]!='0'){
            s[k]='0';
            k--;
        }
        if(k>=0)
        {
            s[k]='1';
            return ;
        }
        s='1'+s;
        
    }
};