class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0;
        int n=people.size();
        int i=0,j=n-1;
        
        while(i<=j){
            if(people[j]+people[i]<=limit)
            {
                i++;j--;
                count++;
            }
            
            else //if(people[j]<=limit)
            {
                j--;
                count++;
            }
            
          /*  else if(people[i]<=limit)
            {
                i++;
                count++;
            }*/
        }
        
        return count;
        
    }
};