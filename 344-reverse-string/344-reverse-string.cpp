class Solution {
public:
   /* void rev(vector<char> &s,int f,int l)
    {
        if(f>l)
            return;
        swap(s[f++],s[l--]);
        rev(s,f,l);
    }*/
    
    void reverseString(vector<char>& s) {
        //rev(s,0,s.size()-1);
        
        int f=0,l=s.size()-1;
        
        while(f<l)
        {
            swap(s[f++],s[l--]);
        }
    }
};