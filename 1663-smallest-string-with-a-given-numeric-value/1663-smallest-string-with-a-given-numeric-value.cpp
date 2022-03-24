class Solution {
public:
    string getSmallestString(int n, int k) {
        //if(n==k)
        string s="";
        
        
        while(n!=k)
        {
            if(k-(n-1)>26)
            {
               s+='z';
                k-=26;
                n--;
            }
            
            else{
                s+='a'+k-(n-1)-1;
                k-=k-(n-1);
                n--;
            }
        }
        
        while(n--)
            s+='a';
        reverse(s.rbegin(),s.rend());
        return s;
        
        
    }
};