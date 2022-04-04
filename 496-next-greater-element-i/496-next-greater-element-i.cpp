class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> s;
        s.push(nums2[0]);
        unordered_map<int,int> m;
        vector<int> res(nums1.size());
        for(int i=1;i<nums2.size();++i)
        {
            while(!s.empty()&&nums2[i]>s.top())
            {
                m[s.top()]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);
        }
        
        for(int i=0;i<nums1.size();++i)
        {
            if(m.find(nums1[i])!=m.end())
            {
                res[i]=m[nums1[i]];
            }
            
            else
                res[i]=-1;
        }
        
        return res;
    }
};