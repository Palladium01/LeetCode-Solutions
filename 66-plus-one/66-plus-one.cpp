class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        
        int i=digits.size()-1;
        int num=digits[i--]+1;
        res.push_back(num%10);
        int carry=num/10;
        
        
        while(i>=0)
        {
            num=digits[i]+carry;
            res.push_back(num%10);
            carry=num/10;
            i--;
        }
        
        if(carry>0)
            res.push_back(carry);
        
        reverse(res.begin(),res.end());
        return res;
    }
};