class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue <pair<int,char>> maxh;
        
        if(a)maxh.push({a,'a'});
        if(b)maxh.push({b,'b'});
        if(c)maxh.push({c,'c'});
        string ans="";
        while(maxh.size()>1){
            pair<int,char>one = maxh.top();maxh.pop();
            pair<int,char>two = maxh.top();maxh.pop();
            if(one.first>=2){
                ans+=one.second;
                ans+=one.second;
                one.first-=2;
            }
            else{
                ans+=one.second;
                one.first-=1;
            }
            
            
            if(two.first>=2 && two.first>=one.first){
                ans+=two.second;
                ans+=two.second;
                two.first-=2;
            }
            else{
                ans+=two.second;
                two.first-=1;
            }
            
            if(one.first>0)
                maxh.push(one);
            if(two.first>0)
                maxh.push(two);
        }
        if(maxh.empty())
            return ans;
        if(maxh.top().first>=2){
            ans+=maxh.top().second;
            ans+=maxh.top().second;
        }
        else{
            ans+=maxh.top().second;
        }
        return ans;
    }
};