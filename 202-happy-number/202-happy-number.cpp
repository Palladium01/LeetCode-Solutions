class Solution {
public:
    bool isHappy(int n) {
        if(n>1&&n<5)
            return false;
        if(n==1)
            return true;
        int rem;
        int sum=0;
        while(n>0)
        {
            rem=n%10;
            sum+=rem*rem;
            n=n/10;
        }
        return isHappy(sum);
        
    }
};