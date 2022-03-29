class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int n=nums.size();
        vector<int> temp(n);
        
        int i=1;
        int j=n-1;
        
        while(i<n)
        {
            temp[i]=nums[j];
            i+=2;
            j--;
        }
        
        i=0;
        
        while(i<n)
        {
            temp[i]=nums[j];
            i+=2;
            j--;
        }
        
        for(int m=0;m<n;++m)
            nums[m]=temp[m];
        
        
        
        
    }
};