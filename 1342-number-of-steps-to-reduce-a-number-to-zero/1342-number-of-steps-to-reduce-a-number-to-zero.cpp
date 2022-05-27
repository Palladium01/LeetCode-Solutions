class Solution {
public:
    int numberOfSteps(int num) {
        if(num<3)
            return num;
        int count=0;
        
        while(num>2)
        {
            if(num%2==0)
                num=num/2;
            else 
                num--;
            count++;
        }
        return count+2;
    }
};