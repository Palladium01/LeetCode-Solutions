class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> maxh;
        
        for(auto v:piles)
        {
            maxh.push(v);
        }
        
        while(k >0)
        {
            auto ele=maxh.top(); maxh.pop();
            ele=ele-(ele/2);
            maxh.push(ele);
            k--;
            
        }
        int sum=0;
        while(maxh.size()>0)
        {
           auto val=maxh.top(); maxh.pop();
            sum+=val;
        }
        return sum;
    }
};