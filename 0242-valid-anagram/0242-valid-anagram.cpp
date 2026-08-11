class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v(256,0);
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=0;i<s.size();i++)
        {
            v[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(v[t[i]-'a']==0)
            {
                return false;
            }
            v[t[i]-'a']--;
        }
        return true;
        
    }
};