class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> res(score.size());
        
        priority_queue<pair<int,int>> maxh;
        int pos=1;
        for(int i=0;i<score.size();++i)
        {
            maxh.push({score[i],i});
        }
        
        while(maxh.size()>0)
        {
            if(pos<=3)
            {
                if(pos==1)
                    res[maxh.top().second]="Gold Medal";
                else if(pos==2)
                    res[maxh.top().second]="Silver Medal";
                else 
                    res[maxh.top().second]="Bronze Medal";
                pos++;
                maxh.pop();
                
            }
            
            else
            {
                res[maxh.top().second]=to_string(pos);
                pos++;
                maxh.pop();
            }
        }
        return res;
    }
};