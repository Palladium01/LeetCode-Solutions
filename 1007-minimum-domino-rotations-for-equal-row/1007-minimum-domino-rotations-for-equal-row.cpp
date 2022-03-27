class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        
        unordered_map<int,int> same;
        int n=tops.size();
        
        for(int i=0;i<n;++i)
        {
            m1[tops[i]]++;
            m2[bottoms[i]]++;
            if(tops[i]==bottoms[i])
                same[tops[i]]++;
        }
        
        //int min_moves=INT_MAX;
        
        for(int i=1;i<=6;++i)
        {
            if(m1[i]+m2[i]-same[i]==n)
                //min_moves=min(min_moves,m1[i]+m2[i]-same[i]);
                return n-max(m1[i],m2[i]);
        }
        
   
            return -1;
     
    }
};