class Solution {
public:
    
    bool static cmp(vector<int> &a, vector<int> &b)
    {
        return a[1]<b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        int c=-1;
        sort(intervals.begin(),intervals.end(),cmp);
        vector<int> prev = intervals[0];
        
        for(auto val:intervals)
        {
            if(val[0]<prev[1])
                c++;
            else
                prev=val;
        }
        return c;
    }
};