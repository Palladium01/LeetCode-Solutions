class cmp {
public:
    bool operator() (string &b, string &a) { 
        if (a.size() != b.size()) 
            return a.size() < b.size();
        return  a < b;
    }
};


class Solution {
public:
    
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,cmp> minh;
        
        for(int i=0;i<nums.size();++i)
        {
          
            minh.push(nums[i]);
            if(minh.size()>k)
                minh.pop();
        }
        
        return minh.top();
    }
};