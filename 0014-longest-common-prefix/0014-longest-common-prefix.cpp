class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            int s=0;
            while((s<prefix.size()&&s<strs[i].size())&&(prefix[s]==strs[i][s]))
            {
                s++;
            }
            prefix=prefix.substr(0,s);
        }
        return prefix;
    }
};