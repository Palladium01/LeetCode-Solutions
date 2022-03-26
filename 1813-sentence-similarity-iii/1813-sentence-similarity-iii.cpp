class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
       /* if(sentence1.size()>sentence2.size())
            swap(s1,s2);*/
        int n1=sentence1.size();
        int n2=sentence2.size();
        
        deque<string> m1;
        deque<string> m2;
        string temp="";
        for(int i=0;i<n1;++i)
        {
            if(sentence1[i]==' '){
                m1.push_back(temp);
                temp="";
            }
            
            else
                temp+=sentence1[i];
        }
        m1.push_back(temp);
        temp="";
        for(int i=0;i<n2;++i)
        {
            if(sentence2[i]==' '){
                m2.push_back(temp);
                temp="";
            }
            
            else
                temp+=sentence2[i];
        }
        m2.push_back(temp);
        temp="";
        
        while(!m1.empty()&&!m2.empty()&&m1.front()==m2.front()){
            m1.pop_front();
            m2.pop_front();
        }
        
        while(!m1.empty()&&!m2.empty()&&m1.back()==m2.back()){
            m1.pop_back();
            m2.pop_back();
        }
        
        return m1.empty()||m2.empty();
        
    }
};