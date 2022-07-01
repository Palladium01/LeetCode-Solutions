class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(), [] (const vector<int> &a, const vector<int>& b)
             {
                 return a[1]>b[1];
             });
        
        int res=0;
        
        for(auto val:boxTypes)
        {
            int count=min(val[0],truckSize);
            truckSize-=count;
            res+=count*val[1];
            
            if(truckSize==0)
                return res;
        }
        
        return res;
            
    }
};