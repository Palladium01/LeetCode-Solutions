class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxh;
        
        for(auto val:stones)
        {
            maxh.push(val);
        }
        
        while(maxh.size()>1)
        {
            int first=maxh.top();
            maxh.pop();
            int second=maxh.top();
            maxh.pop();
            
            if(first==second)
                continue;
            
            else
                maxh.push(first-second);
        }
        
        if(maxh.size()==0)
            return 0;
        return maxh.top();
    }
};