class Solution {
public:
    int countHillValley(vector<int>& nums) {
        /*int res = 0;
        for (int i = 1, j = 0; i < nums.size() - 1; ++i)
        if ((nums[j] < nums[i] && nums[i] > nums [i + 1]) || 
            (nums[j] > nums[i] && nums[i] < nums [i + 1])) {
            ++res;
            j = i;
        }            
        return res;*/
        
        
        vector<int>v;
        v.push_back(nums[0]);
		//pushing unique elements into new vector
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                v.push_back(nums[i]);
            }
        }
        int c=0;
		
        for(int i=1;i<v.size()-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1] || v[i]<v[i-1] && v[i]<v[i+1]){
                c++;
            }
        }
        return c;
        
    }
};