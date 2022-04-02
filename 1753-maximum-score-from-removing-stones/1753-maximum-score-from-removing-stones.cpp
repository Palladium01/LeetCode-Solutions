class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> maxh;
        
        maxh.push(a);
        maxh.push(b);
        maxh.push(c);
        int count=0;
        //int ele=1;
        while(1)
        {
            int ele=maxh.top();
            maxh.pop();
            int ele2=maxh.top();
            maxh.pop();
            if(ele==0||ele2==0)
                break;
            ele--;
            ele2--;
            count++;
            maxh.push(ele);
            maxh.push(ele2);
            
        }
        return count;
    }
};