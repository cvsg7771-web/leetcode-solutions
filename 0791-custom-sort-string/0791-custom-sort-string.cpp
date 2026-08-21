class Solution {
public:
    string customSortString(string order, string s) {
    vector<int> v(26,0);
    for(int i=0;i<s.size();i++)
    {
        v[s[i]-'a']++;
    }
    string ans="";
    for(int i=0;i<order.size();i++)
    {
        while(v[order[i]-'a'])
        {
            ans.push_back(order[i]);
            v[order[i]-'a']--;

        }
    }
    for(int i=0;i<s.size();i++)
    {
        while(v[s[i]-'a'])
        {
            ans.push_back(s[i]);
            v[s[i]-'a']--;
        }
    }
    return ans;
        
        
    }
};