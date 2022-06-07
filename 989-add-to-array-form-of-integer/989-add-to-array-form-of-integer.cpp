class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        
        int carry=0;
        vector<int> res;
        
        int i=num.size()-1;
        
        while(!num.empty()||k!=0)
        {
            int d1= num.empty()?0:num.back();
            
            int n= d1+ (k%10) + carry;
            res.push_back(n%10);
            carry=n/10;
            if(!num.empty()) num.pop_back();
            k=k/10;
        }
        
        if(carry!=0) res.push_back(carry);
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};