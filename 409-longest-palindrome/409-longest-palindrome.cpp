class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> m;
        
        for(auto val:s)
        {
            m[val]++;
        }
        
        int max_odd=0;
        
        for(auto val:m)
        {
            if(val.second%2!=0)
            {
                max_odd++;
            }
            
            
        }
        if(max_odd>1)
            return s.length()-max_odd+1;
        
        return s.length();
    }
};