class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue <int, vector<int>, greater<int>> minh;
        
        for(auto val:nums)
        {
            minh.push(val);
        }
        
        vector<int> res;
        while(minh.size()>0)
        {
            res.push_back(minh.top());
            minh.pop();
        }
        
        return res;
            
    }
};