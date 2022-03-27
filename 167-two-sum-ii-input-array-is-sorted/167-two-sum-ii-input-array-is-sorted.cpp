class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
       /* vector<int> res;
        unordered_map<int,int> m;
            
        for(int i=0;i<numbers.size();++i)
        {
            int diff=target-numbers[i];
            if(m.find(diff)!=m.end()&&m.find(diff)->second!=i)
            {
                res.push_back(m.find(diff)->second+1);
                res.push_back(i+1);
                return res;
            }
            m[numbers[i]]=i;
        }
        return res;*/
        
        vector<int> res;
        int left=0,right=numbers.size()-1;
        
        while(left<right)
        {
            if(numbers[left]+numbers[right]==target)
            {
                res.push_back(left+1);
                res.push_back(right+1);
                return res;
            }
            
            else if(numbers[left]+numbers[right]<target)
                left++;
            else
                right--;
        }
        return res;
    }
};