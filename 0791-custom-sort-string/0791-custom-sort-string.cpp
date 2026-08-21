class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<order.size();i++)
        {
            mp.insert({order[i],i});
        }
        int pos=0;
        for(char c:order)
        {
            for(int j=pos;j<s.size();j++)
            {
                if(s[j]==c)
                {
                    swap(s[j],s[pos]);
                    pos++;

                }
            }
        }
        return s;
       
        
        
    }
};