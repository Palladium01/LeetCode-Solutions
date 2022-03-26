class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines=1;
        int size=0;
        int n=widths.size();
        vector<int> res;
        
        for(auto &c:s)
        {
            if(size+widths[c-'a']>100)
            {
                size=widths[c-'a'];
                lines++;
            }
            
            else
            {
                size+=widths[c-'a'];
            }
        }
        res.push_back(lines);
        res.push_back(size);
        return res;
    }
};