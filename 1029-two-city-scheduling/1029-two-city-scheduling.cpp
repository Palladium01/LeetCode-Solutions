class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int atotal=0;
        vector<int> diff;
        int n=costs.size();
        
        for(int i=0;i<n;++i){
            atotal+=costs[i][0];
            diff.push_back(costs[i][0]-costs[i][1]);
          
        }
        
        sort(diff.begin(),diff.end());
        int bprofit=0;
        for(int i=n/2;i<n;++i)
            bprofit+=diff[i];
        return atotal-bprofit;
    }
};