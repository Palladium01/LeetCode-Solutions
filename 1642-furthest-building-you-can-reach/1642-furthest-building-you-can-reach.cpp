class Solution {
public:
    

    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        
        priority_queue<int> maxh;
        int i=0;
        for(i=0;i<heights.size()-1;++i)
        {
            int jump=heights[i+1]-heights[i];
            if(jump<=0)
                continue;
            
            
            bricks-=jump;
            
            maxh.push(jump);
            
            if(bricks<0)
            {
                bricks+=maxh.top();
                maxh.pop();
                ladders--;
            }
            
            if(ladders<0)
                break  ;
            
        }
        
        return i;
    }
};