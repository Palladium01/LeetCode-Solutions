class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tot_gas=accumulate(gas.begin(), gas.end(), 0);
        int tot_cost=accumulate(cost.begin(), cost.end(), 0);
        
        if(tot_cost>tot_gas)
            return -1;
        
        int start=0, fuel=gas[0]-cost[0];
        
        for(int i=1;i<gas.size();++i)
        {
            if(fuel<0)
            {
                start=i;
                fuel=0;
            }
            fuel=fuel+gas[i]-cost[i];
            
        }
        return start;
    }
};